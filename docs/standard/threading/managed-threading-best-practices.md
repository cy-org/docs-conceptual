---
title: "Managed Threading Best Practices"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net"
ms.reviewer: ""
ms.suite: ""
ms.technology: dotnet-standard
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "threading [.NET Framework], design guidelines"
  - "threading [.NET Framework], best practices"
  - "managed threading"
ms.assetid: e51988e7-7f4b-4646-a06d-1416cee8d557
caps.latest.revision: 19
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# Managed Threading Best Practices
Multithreading requires careful programming. For most tasks, you can reduce complexity by queuing requests for execution by thread pool threads. This topic addresses more difficult situations, such as coordinating the work of multiple threads, or handling threads that block.  
  
> [!NOTE]
>  In the [!INCLUDE[net_v40_long](../../../includes/net-v40-long-md.md)], the Task Parallel Library and PLINQ provide APIs that reduce some of the complexity and risks of multi-threaded programming. For more information, see [Parallel Programming](../../../docs/standard/parallel-programming/index.md).  
  
## Deadlocks and Race Conditions  
 Multithreading solves problems with throughput and responsiveness, but in doing so it introduces new problems: deadlocks and race conditions.  
  
### Deadlocks  
 A deadlock occurs when each of two threads tries to lock a resource the other has already locked. Neither thread can make any further progress.  
  
 Many methods of the managed threading classes provide time-outs to help you detect deadlocks. For example, the following code attempts to acquire a lock on the current instance. If the lock is not obtained in 300 milliseconds, <xref:System.Threading.Monitor.TryEnter%2A?displayProperty=fullName> returns **false**.  
  
```vb  
If Monitor.TryEnter(lockObject, 300) Then  
    Try  
        ' Place code protected by the Monitor here.  
    Finally  
        Monitor.Exit(Me)  
    End Try  
Else  
    ' Code to execute if the attempt times out.  
End If  
```  
  
```csharp  
if (Monitor.TryEnter(lockObject, 300)) {  
    try {  
        // Place code protected by the Monitor here.  
    }  
    finally {  
        Monitor.Exit(this);  
    }  
}  
else {  
    // Code to execute if the attempt times out.  
}  
```  
  
### Race Conditions  
 A race condition is a bug that occurs when the outcome of a program depends on which of two or more threads reaches a particular block of code first. Running the program many times produces different results, and the result of any given run cannot be predicted.  
  
 A simple example of a race condition is incrementing a field. Suppose a class has a private **static** field (**Shared** in Visual Basic) that is incremented every time an instance of the class is created, using code such as `objCt++;` (C#) or `objCt += 1` (Visual Basic). This operation requires loading the value from `objCt` into a register, incrementing the value, and storing it in `objCt`.  
  
 In a multithreaded application, a thread that has loaded and incremented the value might be preempted by another thread which performs all three steps; when the first thread resumes execution and stores its value, it overwrites `objCt` without taking into account the fact that the value has changed in the interim.  
  
 This particular race condition is easily avoided by using methods of the <xref:System.Threading.Interlocked> class, such as <xref:System.Threading.Interlocked.Increment%2A?displayProperty=fullName>. To read about other techniques for synchronizing data among multiple threads, see [Synchronizing Data for Multithreading](../../../docs/standard/threading/synchronizing-data-for-multithreading.md).  
  
 Race conditions can also occur when you synchronize the activities of multiple threads. Whenever you write a line of code, you must consider what might happen if a thread were preempted before executing the line (or before any of the individual machine instructions that make up the line), and another thread overtook it.  
  
## Number of Processors  
 Most computers now have multiple processors (also called cores), even small devices such as tablets and phones. If you know you're developing software that will also run on single-processor computers, you should be aware that multithreading solves different problems for single-processor computers and multiprocessor computers.  
  
### Multiprocessor Computers  
 Multithreading provides greater throughput. Ten processors can do ten times the work of one, but only if the work is divided so that all ten can be working at once; threads provide an easy way to divide the work and exploit the extra processing power. If you use multithreading on a multiprocessor computer:  
  
-   The number of threads that can execute concurrently is limited by the number of processors.  
  
-   A background thread executes only when the number of foreground threads executing is smaller than the number of processors.  
  
-   When you call the <xref:System.Threading.Thread.Start%2A?displayProperty=fullName> method on a thread, that thread might or might not start executing immediately, depending on the number of processors and the number of threads currently waiting to execute.  
  
-   Race conditions can occur not only because threads are preempted unexpectedly, but because two threads executing on different processors might be racing to reach the same code block.  
  
### Single-Processor Computers  
 Multithreading provides greater responsiveness to the computer user, and uses idle time for background tasks. If you use multithreading on a single-processor computer:  
  
-   Only one thread runs at any instant.  
  
-   A background thread executes only when the main user thread is idle. A foreground thread that executes constantly starves background threads of processor time.  
  
-   When you call the <xref:System.Threading.Thread.Start%2A?displayProperty=fullName> method on a thread, that thread does not start executing until the current thread yields or is preempted by the operating system.  
  
-   Race conditions typically occur because the programmer did not anticipate the fact that a thread can be preempted at an awkward moment, sometimes allowing another thread to reach a code block first.  
  
## Static Members and Static Constructors  
 A class is not initialized until its class constructor (`static` constructor in C#, `Shared Sub New` in Visual Basic) has finished running. To prevent the execution of code on a type that is not initialized, the common language runtime blocks all calls from other threads to `static` members of the class (`Shared` members in Visual Basic) until the class constructor has finished running.  
  
 For example, if a class constructor starts a new thread, and the thread procedure calls a `static` member of the class, the new thread blocks until the class constructor completes.  
  
 This applies to any type that can have a `static` constructor.  
  
## General Recommendations  
 Consider the following guidelines when using multiple threads:  
  
-   Don't use <xref:System.Threading.Thread.Abort%2A?displayProperty=fullName> to terminate other threads. Calling **Abort** on another thread is akin to throwing an exception on that thread, without knowing what point that thread has reached in its processing.  
  
-   Don't use <xref:System.Threading.Thread.Suspend%2A?displayProperty=fullName> and <xref:System.Threading.Thread.Resume%2A?displayProperty=fullName> to synchronize the activities of multiple threads. Do use <xref:System.Threading.Mutex>, <xref:System.Threading.ManualResetEvent>, <xref:System.Threading.AutoResetEvent>, and <xref:System.Threading.Monitor>.  
  
-   Don't control the execution of worker threads from your main program (using events, for example). Instead, design your program so that worker threads are responsible for waiting until work is available, executing it, and notifying other parts of your program when finished. If your worker threads do not block, consider using thread pool threads. <xref:System.Threading.Monitor.PulseAll%2A?displayProperty=fullName> is useful in situations where worker threads block.  
  
-   Don't use types as lock objects. That is, avoid code such as `lock(typeof(X))` in C# or `SyncLock(GetType(X))` in Visual Basic, or the use of <xref:System.Threading.Monitor.Enter%2A?displayProperty=fullName> with <xref:System.Type> objects. For a given type, there is only one instance of <xref:System.Type?displayProperty=fullName> per application domain. If the type you take a lock on is public, code other than your own can take locks on it, leading to deadlocks. For additional issues, see [Reliability Best Practices](../../../docs/framework/performance/reliability-best-practices.md).  
  
-   Use caution when locking on instances, for example `lock(this)` in C# or `SyncLock(Me)` in Visual Basic. If other code in your application, external to the type, takes a lock on the object, deadlocks could occur.  
  
-   Do ensure that a thread that has entered a monitor always leaves that monitor, even if an exception occurs while the thread is in the monitor. The C# [lock](~/docs/csharp/language-reference/keywords/lock-statement.md) statement and the Visual Basic [SyncLock](~/docs/visual-basic/language-reference/statements/synclock-statement.md) statement provide this behavior automatically, employing a **finally** block to ensure that <xref:System.Threading.Monitor.Exit%2A?displayProperty=fullName> is called. If you cannot ensure that **Exit** will be called, consider changing your design to use **Mutex**. A mutex is automatically released when the thread that currently owns it terminates.  
  
-   Do use multiple threads for tasks that require different resources, and avoid assigning multiple threads to a single resource. For example, any task involving I/O benefits from having its own thread, because that thread will block during I/O operations and thus allow other threads to execute. User input is another resource that benefits from a dedicated thread. On a single-processor computer, a task that involves intensive computation coexists with user input and with tasks that involve I/O, but multiple computation-intensive tasks contend with each other.  
  
-   Consider using methods of the <xref:System.Threading.Interlocked> class for simple state changes, instead of using the `lock` statement (`SyncLock` in Visual Basic). The `lock` statement is a good general-purpose tool, but the <xref:System.Threading.Interlocked> class provides better performance for updates that must be atomic. Internally, it executes a single lock prefix if there is no contention. In code reviews, watch for code like that shown in the following examples. In the first example, a state variable is incremented:  
  
    ```vb  
    SyncLock lockObject  
        myField += 1  
    End SyncLock  
    ```  
  
    ```csharp  
    lock(lockObject)   
    {  
        myField++;  
    }  
    ```  
  
     You can improve performance by using the <xref:System.Threading.Interlocked.Increment%2A> method instead of the `lock` statement, as follows:  
  
    ```vb  
    System.Threading.Interlocked.Increment(myField)  
    ```  
  
    ```csharp  
    System.Threading.Interlocked.Increment(myField);  
    ```  
  
    > [!NOTE]
    >  In the .NET Framework version 2.0, the <xref:System.Threading.Interlocked.Add%2A> method provides atomic updates in increments larger than 1.  
  
     In the second example, a reference type variable is updated only if it is a null reference (`Nothing` in Visual Basic).  
  
    ```vb  
    If x Is Nothing Then  
        SyncLock lockObject  
            If x Is Nothing Then  
                x = y  
            End If  
        End SyncLock  
    End If  
    ```  
  
    ```csharp  
    if (x == null)  
    {  
        lock (lockObject)  
        {  
            if (x == null)  
            {  
                x = y;  
            }  
        }  
    }  
    ```  
  
     Performance can be improved by using the <xref:System.Threading.Interlocked.CompareExchange%2A> method instead, as follows:  
  
    ```vb  
    System.Threading.Interlocked.CompareExchange(x, y, Nothing)  
    ```  
  
    ```csharp  
    System.Threading.Interlocked.CompareExchange(ref x, y, null);  
    ```  
  
    > [!NOTE]
    >  In the .NET Framework version 2.0, the <xref:System.Threading.Interlocked.CompareExchange%2A> method has a generic overload that can be used for type-safe replacement of any reference type.  
  
## Recommendations for Class Libraries  
 Consider the following guidelines when designing class libraries for multithreading:  
  
-   Avoid the need for synchronization, if possible. This is especially true for heavily used code. For example, an algorithm might be adjusted to tolerate a race condition rather than eliminate it. Unnecessary synchronization decreases performance and creates the possibility of deadlocks and race conditions.  
  
-   Make static data (`Shared` in Visual Basic) thread safe by default.  
  
-   Do not make instance data thread safe by default. Adding locks to create thread-safe code decreases performance, increases lock contention, and creates the possibility for deadlocks to occur. In common application models, only one thread at a time executes user code, which minimizes the need for thread safety. For this reason, the .NET Framework class libraries are not thread safe by default.  
  
-   Avoid providing static methods that alter static state. In common server scenarios, static state is shared across requests, which means multiple threads can execute that code at the same time. This opens up the possibility of threading bugs. Consider using a design pattern that encapsulates data into instances that are not shared across requests. Furthermore, if static data are synchronized, calls between static methods that alter state can result in deadlocks or redundant synchronization, adversely affecting performance.  
  
## See Also  
 [Threading](../../../docs/standard/threading/index.md)   
 [Threads and Threading](../../../docs/standard/threading/threads-and-threading.md)
