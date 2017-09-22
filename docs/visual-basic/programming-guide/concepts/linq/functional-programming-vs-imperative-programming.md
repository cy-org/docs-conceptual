---
title: "Functional Programming vs. Imperative Programming (Visual Basic)"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: .net
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "VB"
ms.assetid: 6a1f3b57-00e6-447d-9906-74c7c4d5d85c
caps.latest.revision: 3
author: dotnet-bot
ms.author: dotnetcontent

---
# Functional Programming vs. Imperative Programming (Visual Basic)
This topic compares and contrasts functional programming with more traditional imperative (procedural) programming.  
  
## Functional Programming vs. Imperative Programming  
 The *functional programming* paradigm was explicitly created to support a pure functional approach to problem solving. Functional programming is a form of *declarative programming*. In contrast, most mainstream languages, including object-oriented programming (OOP) languages such as C#, Visual Basic, C++, and Java, were designed to primarily support *imperative* (procedural) programming.  
  
 With an imperative approach, a developer writes code that describes in exacting detail the steps that the computer must take to accomplish the goal. This is sometimes referred to as *algorithmic* programming. In contrast, a functional approach involves composing the problem as a set of functions to be executed. You define carefully the input to each function, and what each function returns. The following table describes some of the general differences between these two approaches.  
  
|Characteristic|Imperative approach|Functional approach|  
|--------------------|-------------------------|-------------------------|  
|Programmer focus|How to perform tasks (algorithms) and how to track changes in state.|What information is desired and what transformations are required.|  
|State changes|Important.|Non-existent.|  
|Order of execution|Important.|Low importance.|  
|Primary flow control|Loops, conditionals, and function (method) calls.|Function calls, including recursion.|  
|Primary manipulation unit|Instances of structures or classes.|Functions as first-class objects and data collections.|  
  
 Although most languages were designed to support a specific programming paradigm, many general languages are flexible enough to support multiple paradigms. For example, most languages that contain function pointers can be used to credibly support functional programming. Furthermore, Visual Basic includes explicit language extensions to support functional programming, including lambda expressions and type inference. LINQ technology is a form of declarative, functional programming.  
  
## Functional Programming Using XSLT  
 Many XSLT developers are familiar with the pure functional approach. The most effective way to develop an XSLT style sheet is to treat each template as an isolated, composable transformation. The order of execution is completely de-emphasized. XSLT does not allow side effects (with the exception that escaping mechanisms for executing procedural code can introduce side effects that result in functional impurity). However, although XSLT is an effective tool, some of its characteristics are not optimal. For example, expressing programming constructs in XML makes code relatively verbose, and therefore difficult to maintain. Also, the heavy reliance on recursion for flow control can result in code that is hard to read. For more information about XSLT, see [XSLT Transformations](../../../../standard/data/xml/xslt-transformations.md).  
  
 However, XSLT has proved the value of using a pure functional approach for transforming XML from one shape to another. Pure functional programming with LINQ to XML is similar in many ways to XSLT. However, the programming constructs introduced by LINQ to XML and Visual Basic allow you to write pure functional transformations that are more readable and maintainable than XSLT.  
  
## Advantages of Pure Functions  
 The primary reason to implement functional transformations as pure functions is that pure functions are composable: that is, self-contained and stateless. These characteristics bring a number of benefits, including the following:  
  
-   Increased readability and maintainability. This is because each function is designed to accomplish a specific task given its arguments. The function does not rely on any external state.  
  
-   Easier reiterative development. Because the code is easier to refactor, changes to design are often easier to implement. For example, suppose you write a complicated transformation, and then realize that some code is repeated several times in the transformation. If you refactor through a pure method, you can call your pure method at will without worrying about side effects.  
  
-   Easier testing and debugging. Because pure functions can more easily be tested in isolation, you can write test code that calls the pure function with typical values, valid edge cases, and invalid edge cases.  
  
## Transitioning for OOP Developers  
 In traditional object-oriented programming (OOP), most developers are accustomed to programming in the imperative/procedural style. To switch to developing in a pure functional style, they have to make a transition in their thinking and their approach to development.  
  
 To solve problems, OOP developers design class hierarchies, focus on proper encapsulation, and think in terms of class contracts. The behavior and state of object types are paramount, and language features, such as classes, interfaces, inheritance, and polymorphism, are provided to address these concerns.  
  
 In contrast, functional programming approaches computational problems as an exercise in the evaluation of pure functional transformations of data collections. Functional programming avoids state and mutable data, and instead emphasizes the application of functions.  
  
 Fortunately, Visual Basic doesn't require the full leap to functional programming, because it supports both imperative and functional programming approaches. A developer can choose which approach is most appropriate for a particular scenario. In fact, programs often combine both approaches.  
  
## See Also  
 [Introduction to Pure Functional Transformations (Visual Basic)](../../../../visual-basic/programming-guide/concepts/linq/introduction-to-pure-functional-transformations.md)   
 [XSLT Transformations](../../../../standard/data/xml/xslt-transformations.md)   
 [Refactoring Into Pure Functions (Visual Basic)](../../../../visual-basic/programming-guide/concepts/linq/refactoring-into-pure-functions.md)
