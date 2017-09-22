---
title: "218 - ClientOperationCompleted"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-clr"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b069bced-7bb2-4e01-8227-e5dbda17af09
caps.latest.revision: 5
author: "Erikre"
ms.author: "erikre"
manager: "erikre"
---
# 218 - ClientOperationCompleted
## Properties  
  
|||  
|-|-|  
|ID|218|  
|Keywords|Troubleshooting, ServiceModel|  
|Level|Information|  
|Channel|Microsoft-Windows-Application Server-Applications/Analytic|  
  
## Description  
 This event is emitted by clients just after an operation completes. For one-way operations, this is just after the message is sent successfully. For request-response operations this is after the response is received.  
  
## Message  
 The Client completed executing Action '%1' associated with the '%2' contract. The message was sent to '%3'.  
  
## Details  
  
|Data Item Name|Data Item Type|Description|  
|--------------------|--------------------|-----------------|  
|Action|xs:string|The SOAP action header of the outgoing message.|  
|Contract Name|`xs:string`|The name of the contract. Example: ICalculator.|  
|Destination|`xs:string`|The address of the service endpoint that the message was sent to.|  
|HostReference|`xs:string`|For Web-hosted services, this field uniquely identifies the service in the Web hierarchy. Its format is defined as 'Web Site Name Application Virtual Path&#124;Service Virtual Path&#124;ServiceName'. Example: 'Default Web Site/CalculatorApplication&#124;/CalculatorService.svc&#124;CalculatorService'.|  
|AppDomain|`xs:string`|The string returned by AppDomain.CurrentDomain.FriendlyName.|
