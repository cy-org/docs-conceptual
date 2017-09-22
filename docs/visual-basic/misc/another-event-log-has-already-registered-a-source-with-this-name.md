---
title: "Another event log has already registered a source with this name"

ms.date: "2015-07-20"
ms.prod: .net


ms.technology: 
  - "devlang-visual-basic"

ms.topic: "article"
ms.assetid: e6f5cd95-bb3f-4845-84fb-ae623a9bd44e
caps.latest.revision: 13
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
# Another event log has already registered a source with this name
An attempt was made to write an entry to an event log where the specified source is registered with another event log.  
  
 You must set the <xref:System.Diagnostics.EventLog.Source%2A> property of your <xref:System.Diagnostics.EventLog> component instance before your component writes an entry to a log. When this happens, the system checks that the source you specified is registered with the event log to which the component is writing, and calls <xref:System.Diagnostics.EventLog.CreateEventSource%2A> if needed.  
  
## To correct this error  
  
1.  Remove the association of the source with the first log using the <xref:System.Diagnostics.EventLog.DeleteEventSource%2A> or the <xref:System.Diagnostics.EventLog.DeleteEventSource%2A> method.  
  
2.  Register the source with the new log.  
  
## See Also  
 [My.Application.Log Object](../../visual-basic/language-reference/objects/my-application-log-object.md)   
 [How to: Remove an Event Source](http://msdn.microsoft.com/en-us/bc66c900-4b8a-426a-b8e2-17031a20167e)   
 [How to: Add Your Application as a Source of Event Log Entries](http://msdn.microsoft.com/en-us/948ff920-a739-4e66-a191-ee951512d42c)
