---
title: ".NET Framework Class Library Overview"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net"
ms.reviewer: ""
ms.suite: ""
ms.technology: dotnet-standard
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "classes [.NET Framework], library overview"
  - "class objects value type"
  - "naming conventions [.NET Framework]"
  - "types, .NET Framework"
  - "user-defined types"
  - "Visual Basic, data types"
  - "data types [.NET Framework], C++"
  - "Visual C#, data types"
  - "libraries, .NET Framework class library"
  - "data types [.NET Framework], JScript"
  - "System namespace"
  - "JScript, data types"
  - ".NET Framework, class library"
  - "type system [.NET Framework]"
  - "data types [.NET Framework]"
  - "value types"
  - "data types [.NET Framework], Visual Basic"
  - "Common Language Specification"
  - "namespaces [.NET Framework]"
  - "floating point value type"
  - "class library [.NET Framework]"
  - "CLS"
  - "logical value type"
  - ".NET Framework class library, about"
  - "built-in types"
  - "namespaces [.NET Framework], about namespaces"
  - "Visual C++, data types"
  - "members [.NET Framework], type"
  - "data types [.NET Framework], C#"
  - "integer value type"
  - "base types, class library"
ms.assetid: 7e4c5921-955d-4b06-8709-101873acf157
caps.latest.revision: 19
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# .NET Framework Class Library Overview
The [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)] includes classes, interfaces, and value types that expedite and optimize the development process and provide access to system functionality. To facilitate interoperability between languages, most .NET Framework types are CLS-compliant and can therefore be used from any programming language whose compiler conforms to the common language specification (CLS).  
  
 The .NET Framework types are the foundation on which .NET applications, components, and controls are built. The [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)] includes types that perform the following functions:  
  
-   Represent base data types and exceptions.  
  
-   Encapsulate data structures.  
  
-   Perform I/O.  
  
-   Access information about loaded types.  
  
-   Invoke .NET Framework security checks.  
  
-   Provide data access, rich client-side GUI, and server-controlled, client-side GUI.  
  
 The [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)] provides a rich set of interfaces, as well as abstract and concrete (non-abstract) classes. You can use the concrete classes as is or, in many cases, derive your own classes from them. To use the functionality of an interface, you can either create a class that implements the interface or derive a class from one of the .NET Framework classes that implements the interface.  
  
## Naming Conventions  
 .NET Framework types use a dot syntax naming scheme that connotes a hierarchy. This technique groups related types into namespaces so they can be searched and referenced more easily. The first part of the full name — up to the rightmost dot — is the namespace name. The last part of the name is the type name. For example, **System.Collections.ArrayList** represents the **ArrayList** type, which belongs to the **System.Collections** namespace. The types in **System.Collections** can be used to manipulate collections of objects.  
  
 This naming scheme makes it easy for library developers extending the [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)] to create hierarchical groups of types and name them in a consistent, informative manner. It also allows types to be unambiguously identified by their full name (that is, by their namespace and type name), which prevents type name collisions. Library developers are expected to use the following convention when creating names for their namespaces:  
  
 *CompanyName*.*TechnologyName*  
  
 For example, the namespace Microsoft.Word conforms to this guideline.  
  
 The use of naming patterns to group related types into namespaces is a very useful way to build and document class libraries. However, this naming scheme has no effect on visibility, member access, inheritance, security, or binding. A namespace can be partitioned across multiple assemblies and a single assembly can contain types from multiple namespaces. The assembly provides the formal structure for versioning, deployment, security, loading, and visibility in the common language runtime.  
  
 For more information on namespaces and type names, see [Common Type System](../../docs/standard/base-types/common-type-system.md).  
  
## System Namespace  
 The <xref:System> namespace is the root namespace for fundamental types in the [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)]. This namespace includes classes that represent the base data types used by all applications: <xref:System.Object> (the root of the inheritance hierarchy), <xref:System.Byte>, <xref:System.Char>, <xref:System.Array>, <xref:System.Int32>, <xref:System.String>, and so on. Many of these types correspond to the primitive data types that your programming language uses. When you write code using .NET Framework types, you can use your language's corresponding keyword when a .NET Framework base data type is expected.  
  
 The following table lists the base types that the [!INCLUDE[dnprdnshort](../../includes/dnprdnshort-md.md)] supplies, briefly describes each type, and indicates the corresponding type in Visual Basic, C#, C++, and JScript.  
  
|Category|Class name|Description|Visual Basic data type|C# data type|C++ data type|JScript data type|  
|--------------|----------------|-----------------|----------------------------|-------------------|---------------------|-----------------------|  
|Integer|<xref:System.Byte>|An 8-bit unsigned integer.|**Byte**|**byte**|**unsigned char**|**Byte**|  
||<xref:System.SByte>|An 8-bit signed integer.<br /><br /> Not CLS-compliant.|**SByte**|**sbyte**|**char**<br /><br /> -or-<br /><br /> **signed** **char**|**SByte**|  
||<xref:System.Int16>|A 16-bit signed integer.|**Short**|**short**|**short**|**short**|  
||<xref:System.Int32>|A 32-bit signed integer.|**Integer**|**int**|**int**<br /><br /> -or-<br /><br /> **long**|**int**|  
||<xref:System.Int64>|A 64-bit signed integer.|**Long**|**long**|**__int64**|**long**|  
||<xref:System.UInt16>|A 16-bit unsigned integer.<br /><br /> Not CLS-compliant.|**UShort**|**ushort**|**unsigned short**|**UInt16**|  
||<xref:System.UInt32>|A 32-bit unsigned integer.<br /><br /> Not CLS-compliant.|**UInteger**|**uint**|**unsigned int**<br /><br /> -or-<br /><br /> **unsigned long**|**UInt32**|  
||<xref:System.UInt64>|A 64-bit unsigned integer.<br /><br /> Not CLS-compliant.|**ULong**|**ulong**|**unsigned __int64**|**UInt64**|  
|Floating point|<xref:System.Single>|A single-precision (32-bit) floating-point number.|**Single**|**float**|**float**|**float**|  
||<xref:System.Double>|A double-precision (64-bit) floating-point number.|**Double**|**double**|**double**|**double**|  
|Logical|<xref:System.Boolean>|A Boolean value (true or false).|**Boolean**|**bool**|**bool**|**bool**|  
|Other|<xref:System.Char>|A Unicode (16-bit) character.|**Char**|**char**|**wchar_t**|**char**|  
||<xref:System.Decimal>|A decimal  (128-bit) value.|**Decimal**|**decimal**|**Decimal**|**Decimal**|  
||<xref:System.IntPtr>|A signed integer whose size depends on the underlying platform (a 32-bit value on a 32-bit platform and a 64-bit value on a 64-bit platform).|**IntPtr**<br /><br /> No built-in type.|**IntPtr**<br /><br /> No built-in type.|**IntPtr**<br /><br /> No built-in type.|**IntPtr**|  
||<xref:System.UIntPtr>|An unsigned integer whose size depends on the underlying platform (a 32- bit value on a 32-bit platform and a 64-bit value on a 64-bit platform).<br /><br /> Not CLS-compliant.|**UIntPtr**<br /><br /> No built-in type.|**UIntPtr**<br /><br /> No built-in type.|**UIntPtr**<br /><br /> No built-in type.|**UIntPtr**|  
ass objects|<xref:System.Object>|The root of the object hierarchy.|**Object**|**object**|**Object\***|**Object**|  
||<xref:System.String>|An immutable, fixed-length string of Unicode characters.|**String**|**string**|**String\***|**String**|  
  
 In addition to the base data types, the <xref:System> namespace contains over 100 classes, ranging from classes that handle exceptions to classes that deal with core runtime concepts, such as application domains and the garbage collector. The <xref:System> namespace also contains many second-level namespaces.  
  
 For more information about namespaces, browse the [.NET Framework Class Library](http://go.microsoft.com/fwlink/?LinkID=227195). The reference documentation provides a brief overview of each namespace as well as a formal description of each type and its members.  
  
## See Also  
 [Common Type System](../../docs/standard/base-types/common-type-system.md)   
 [.NET Framework Class Library](http://go.microsoft.com/fwlink/?LinkID=227195)   
 [Overview](../../docs/framework/get-started/overview.md)
