---
title: "How to: Copy, Delete, and Move Files and Folders (C# Programming Guide)"

ms.date: "2015-07-20"
ms.prod: .net


ms.technology: 
  - "devlang-csharp"

ms.topic: "article"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "I/O [C#]"
ms.assetid: 62e52cd7-9597-4e4a-acf9-1315f5cdbf05
caps.latest.revision: 13
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
# How to: Copy, Delete, and Move Files and Folders (C# Programming Guide)
The following examples show how to copy, move, and delete files and folders in a synchronous manner by using the <xref:System.IO.File?displayProperty=fullName>, <xref:System.IO.Directory?displayProperty=fullName>, <xref:System.IO.FileInfo?displayProperty=fullName>, and <xref:System.IO.DirectoryInfo?displayProperty=fullName> classes from the <xref:System.IO?displayProperty=fullName> namespace. These examples do not provide a progress bar or any other user interface. If you want to provide a standard progress dialog box, see [How to: Provide a Progress Dialog Box for File Operations](how-to-provide-a-progress-dialog-box-for-file-operations.md).  
  
 Use <xref:System.IO.FileSystemWatcher?displayProperty=fullName> to provide events that will enable you to calculate the progress when operating on multiple files. Another approach is to use platform invoke to call the relevant file-related methods in the Windows Shell. For information about how to perform these file operations asynchronously, see [Asynchronous File I/O](https://msdn.microsoft.com/library/kztecsys).  
  
## Example  
 The following example shows how to copy files and directories.  
  
 [!code-cs[csFilesandFolders#7](../../../csharp/programming-guide/file-system/codesnippet/CSharp/how-to-copy-delete-and-move-files-and-folders_1.cs)]  
  
## Example  
 The following example shows how to move files and directories.  
  
 [!code-cs[csFilesandFolders#8](../../../csharp/programming-guide/file-system/codesnippet/CSharp/how-to-copy-delete-and-move-files-and-folders_2.cs)]  
  
## Example  
 The following example shows how to delete files and directories.  
  
 [!code-cs[csFilesandFolders#9](../../../csharp/programming-guide/file-system/codesnippet/CSharp/how-to-copy-delete-and-move-files-and-folders_3.cs)]  
  
## See Also  
 <xref:System.IO?displayProperty=fullName>   
 [C# Programming Guide](../../../csharp/programming-guide/index.md)   
 [File System and the Registry (C# Programming Guide)](index.md)   
 [How to: Provide a Progress Dialog Box for File Operations](how-to-provide-a-progress-dialog-box-for-file-operations.md)   
 [File and Stream I/O](https://msdn.microsoft.com/library/k3352a4t)   
 [Common I/O Tasks](https://msdn.microsoft.com/library/ms404278)
