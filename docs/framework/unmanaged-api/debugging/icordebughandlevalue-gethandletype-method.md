---
title: "ICorDebugHandleValue::GetHandleType Method"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-clr"
ms.tgt_pltfrm: ""
ms.topic: "reference"
api_name: 
  - "ICorDebugHandleValue.GetHandleType"
api_location: 
  - "mscordbi.dll"
api_type: 
  - "COM"
f1_keywords: 
  - "ICorDebugHandleValue::GetHandleType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetHandleType method [.NET Framework debugging]"
  - "ICorDebugHandleValue::GetHandleType method [.NET Framework debugging]"
ms.assetid: d5e7b12d-835a-4e86-ae2f-d658d4f1c67c
topic_type: 
  - "apiref"
caps.latest.revision: 11
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# ICorDebugHandleValue::GetHandleType Method
Gets a value that indicates the kind of handle referenced by this ICorDebugHandleValue object.  
  
## Syntax  
  
```  
HRESULT GetHandleType (  
    [out] CorDebugHandleType  *pType  
);  
```  
  
#### Parameters  
 `pType`  
 [out] A pointer to a value of the CorDebugHandleType enumeration that indicates the type of this handle.  
  
## Requirements  
 **Platforms:** See [System Requirements](../../../../docs/framework/get-started/system-requirements.md).  
  
 **Header:** CorDebug.idl, CorDebug.h  
  
 **Library:** CorGuids.lib  
  
 **.NET Framework Versions:** [!INCLUDE[net_current_v20plus](../../../../includes/net-current-v20plus-md.md)]
