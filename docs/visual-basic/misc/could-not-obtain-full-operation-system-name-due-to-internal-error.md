---
title: "Could not obtain full operation system name due to internal error"

ms.date: "2015-07-20"
ms.prod: .net


ms.technology: 
  - "devlang-visual-basic"

ms.topic: "article"
f1_keywords: 
  - "vbrDiagnosticInfo_FullOSName"
ms.assetid: f69da02b-eb9a-4284-bb9e-3025517ae6c1
caps.latest.revision: 9
author: dotnet-bot
ms.author: dotnetcontent

translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Could not obtain full operation system name due to internal error
Could not obtain full operation system name due to internal error. This might be caused by WMI not existing on the current machine.  
  
 A call to the `My.Computer.Info.OSFullName` property failed. A possible cause for this failure is if Windows Management Instrumentation (WMI) is not installed on the current computer.  
  
## To correct this error  
  
1.  Add a `Try...Catch` block around the call to the `My.Computer.Info.OSFullName` property.  
  
2.  For more information about WMI and how to install it, go to  and search for "Windows Management Instrumentation Core".  
  
## See Also  
 [My.Computer.Info.OSFullName Property](http://msdn.microsoft.com/en-us/b3b0fbd1-4dc5-428a-ad04-0d9fc9c2a9be)   
 [Exception and Error Handling in Visual Basic](http://msdn.microsoft.com/en-us/3e351e73-cf23-40ab-8b60-05794160529e)   
 [Try...Catch...Finally Statement](../../visual-basic/language-reference/statements/try-catch-finally-statement.md)
