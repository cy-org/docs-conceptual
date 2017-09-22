---
title: "&lt;states&gt; of WCF, &lt;workflowInstanceQuery&gt;"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-clr"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d17f7525-8035-4e9e-85a0-4cddae59f85d
caps.latest.revision: 3
author: "Erikre"
ms.author: "erikre"
manager: "erikre"
---
# &lt;states&gt; of WCF, &lt;workflowInstanceQuery&gt;
Represents a collection of subscribed states from the tracked workflow instance when the tracking records are created.  
  
 For more information on tracking profile queries, see [Tracking Profiles](../../../../../docs/framework/windows-workflow-foundation/tracking-profiles.md)  
  
 \<system.serviceModel>  
\<tracking>  
\<trackingProfile>  
\<workflow>  
\<workflowInstanceQueries>  
\<workflowInstanceQuery>  
\<states>  
  
## Syntax  
  
```vb  
<tracking>   <trackingProfile name="Name">       <workflow>          <workflowInstanceQueries>             <workflowInstanceQuery>                <states>                   <state name="Name"/>                </states>            </workflowInstanceQuery>         </workflowInstanceQueries>       </workflow>   </trackingProfile></tracking>  
```  
  
## Attributes and Elements  
 The following sections describe attributes, child elements, and parent elements.  
  
### Attributes  
 None.  
  
### Child Elements  
  
|Element|Description|  
|-------------|-----------------|  
|[\<states>](../../../../../docs/framework/configure-apps/file-schema/windows-workflow-foundation/states.md)|A subscribed state from the tracked workflow instance when the tracking record is created.|  
  
### Parent Elements  
  
|Element|Description|  
|-------------|-----------------|  
|[\<workflowInstanceQuery>](../../../../../docs/framework/configure-apps/file-schema/windows-workflow-foundation/workflowinstancequery.md)|A query that tracks workflow instance life cycle changes such as a started or completed event.|  
  
## Remarks  
 The returned records are filtered by the states in this collection.  
  
 Possible state values are described in the following table.  
  
|State|Description|  
|-----------|-----------------|  
|Aborted|The workflow instance is aborted.|  
|Completed|The workflow instance is completed.|  
|Deleted|The workflow instance is deleted.|  
|Idle|The workflow instance is idle.|  
|Persisted|The workflow instance is persisted.|  
|Resumed|The workflow instance is resumed.|  
|Started|The workflow instance is started.|  
|UnhandledException|The workflow instance encountered an unhandled exception.|  
|Unloaded|The workflow instance is unloaded.|  
|Canceled|The workflow instance is canceled.|  
|Suspended|The workflow instance is suspended.|  
|Terminated|The workflow instance is terminated.|  
|Unsuspended|The workflow instance is unsuspended.|  
  
## Example  
 The following configuration subscribes to workflow instance-level tracking records for the `Started` instance state using this query.  
  
```xml  
<workflowInstanceQueries>  
    <workflowInstanceQuery>  
      <states>  
        <state name="Started"/>  
      </states>  
    </workflowInstanceQuery>  
</workflowInstanceQueries>  
```  
  
## See Also  
 <xref:System.ServiceModel.Activities.Tracking.Configuration.WorkflowInstanceQueryElement?displayProperty=fullName>       
 <xref:System.ServiceModel.Activities.Tracking.Configuration.StateElementCollection?displayProperty=fullName>       
 <xref:System.Activities.Tracking.WorkflowInstanceQuery?displayProperty=fullName>       
 [Workflow Tracking and Tracing](../../../../../docs/framework/windows-workflow-foundation/workflow-tracking-and-tracing.md)   
 [Tracking Profiles](../../../../../docs/framework/windows-workflow-foundation/tracking-profiles.md)
