---
title: "How to: Write Text to Files in Visual Basic"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: .net
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"

ms.topic: "article"
dev_langs: 
  - "VB"
helpviewer_keywords: 
  - "files, writing to"
  - "text, writing to files"
  - "writing to files"
  - "examples [Visual Basic], text files"
ms.assetid: 304956eb-530d-4df7-b48f-9b4d1f2581a0
caps.latest.revision: 19
author: dotnet-bot
ms.author: dotnetcontent

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
# How to: Write Text to Files in Visual Basic
The <xref:Microsoft.VisualBasic.FileIO.FileSystem.WriteAllText%2A> method can be used to write text to files. If the specified file does not exist, it is created.  
  
## Procedure  
  
#### To write text to a file  
  
-   Use the `WriteAllText` method to write text to a file, specifying the file and text to be written. This example writes the line `"This is new text."` to the file named `test.txt`, appending the text to any existing text in the file.  
  
     [!code-vb[VbFileIOWrite#3](../../../../visual-basic/developing-apps/programming/drives-directories-files/codesnippet/VisualBasic/how-to-write-text-to-files_1.vb)]  
  
#### To write a series of strings to a file  
  
-   Loop through the string collection. Use the `WriteAllText` method to write text to a file, specifying the target file and string to be added and setting `append` to `True`.  
  
     This example writes the names of the files in the `Documents and Settings` directory to `FileList.txt`, inserting a carriage return between each for better readability.  
  
     [!code-vb[VbFileIOWrite#4](../../../../visual-basic/developing-apps/programming/drives-directories-files/codesnippet/VisualBasic/how-to-write-text-to-files_2.vb)]  
  
## Robust Programming  
 The following conditions may cause an exception:  
  
-   The path is not valid for one of the following reasons: it is a zero-length string, it contains only white space, it contains invalid characters, or it is a device path (starts with \\\\.\\) (<xref:System.ArgumentException>).  
  
-   The path is not valid because it is `Nothing` (<xref:System.ArgumentNullException>).  
  
-   `File` points to a path that does not exist (<xref:System.IO.FileNotFoundException> or <xref:System.IO.DirectoryNotFoundException>).  
  
-   The file is in use by another process, or an I/O error occurs (<xref:System.IO.IOException>).  
  
-   The path exceeds the system-defined maximum length (<xref:System.IO.PathTooLongException>).  
  
-   A file or directory name in the path contains a colon (:) or is in an invalid format (<xref:System.NotSupportedException>).  
  
-   The user lacks necessary permissions to view the path (<xref:System.Security.SecurityException>).  
  
-   The disk is full, and the call to `WriteAllText` fails (<xref:System.IO.IOException>).  
  
 If you are running in a partial-trust context, the code might throw an exception due to insufficient privileges. For more information, see [Code Access Security Basics](https://msdn.microsoft.com/library/33tceax8).  
  
## See Also  
 <xref:Microsoft.VisualBasic.FileIO.FileSystem>   
 <xref:Microsoft.VisualBasic.FileIO.FileSystem.WriteAllText%2A>   
 [How to: Read from Text Files](../../../../visual-basic/developing-apps/programming/drives-directories-files/how-to-read-from-text-files.md)
