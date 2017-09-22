---
title: "How to: Write to a Text File (C# Programming Guide)"

ms.date: "2015-07-20"
ms.prod: .net


ms.technology: 
  - "devlang-csharp"

ms.topic: "article"
f1_keywords: 
  - "TextWriter.WriteLine"
  - "StreamWriter.Close"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "files [C#], text files"
  - "text, writing to files [C#]"
ms.assetid: 2e99f184-d88b-4719-a7f1-d9ec482aa809
caps.latest.revision: 23
author: "BillWagner"
ms.author: "wiwagn"

translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Write to a Text File (C# Programming Guide)
These examples show various ways to write text to a file.  The first two examples use static convenience methods on the <xref:System.IO.File?displayProperty=fullName> class to write each element of any IEnumerable\<string> and a string to a text file.  Example 3 shows how to add text to a file when you have to process each line individually as you write to the file.  Examples 1-3 overwrite all existing content in the file, but example 4 shows you how to append text to an existing file.  
  
 These examples all write string literals to files, but more likely you will want to use the <xref:System.String.Format%2A> method, which has many controls for writing different types of values  right or left justified in a field, with or without padding, and so on.  You can also use the C# [string interpolation](../../../csharp/language-reference/keywords/interpolated-strings.md) feature.  
  
## Example  
 [!code-cs[csFilesandFolders#3](../../../csharp/programming-guide/file-system/codesnippet/CSharp/how-to-write-to-a-text-file_1.cs)]  
  
 These examples all write string literals to files, but more likely you will want to use the <xref:System.String.Format%2A> method, which has many controls for writing different types of values  right or left justified in a field, with or without padding, and so on.  You can also use the C# [string interpolation](../../../csharp/language-reference/keywords/interpolated-strings.md) feature.  
  
## Robust Programming  
 The following conditions may cause an exception:  
  
-   The file exists and is read-only.  
  
-   The path name may be too long.  
  
-   The disk may be full.  
  
## See Also  
 [C# Programming Guide](../../../csharp/programming-guide/index.md)   
 [File System and the Registry (C# Programming Guide)](../../../csharp/programming-guide/file-system/index.md)   
 [Sample: Save a collection to Application Storage](http://code.msdn.microsoft.com/CSWinStoreAppSaveCollection-bed5d6e6)
