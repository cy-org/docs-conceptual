---
title: "LoadFromHistory Function (WPF Unmanaged API Reference)"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-wpf"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "LoadFromHistory"
api_location: 
  - "PresentationHost_v0400.dll"
ms.assetid: d037c062-a911-4949-b251-ccd3e48b1d17
caps.latest.revision: 3
author: dotnet-bot
ms.author: dotnetcontent
manager: "wpickett"
---
# LoadFromHistory Function (WPF Unmanaged API Reference)
This API supports the Windows Presentation Foundation (WPF) infrastructure and is not intended to be used directly from your code.  
  
 Used by the Windows Presentation Foundation (WPF) infrastructure for windows management.  
  
## Syntax  
  
```cpp  
HRESULT LoadFromHistory_export(  
        IStream* pHistoryStream,   
        IBindCtx* pBindCtx  
)  
```  
  
#### Parameters  
 pHistoryStream  
 A pointer to a stream of history information.  
  
 pBindCtx  
 A pointer to a bind context.  
  
## Requirements  
 **Platforms:** See [.NET Framework System Requirements](../../../../docs/framework/get-started/system-requirements.md).  
  
 **DLL:**  
  
 In the .NET Framework 3.0 and 3.5: PresentationHostDLL.dll  
  
 In the .NET Framework 4 and later: PresentationHost_v0400.dll  
  
 **.NET Framework Version:** [!INCLUDE[net_current_v30plus](../../../../includes/net-current-v30plus-md.md)]  
  
## See Also  
 [WPF Unmanaged API Reference](../../../../docs/framework/wpf/advanced/wpf-unmanaged-api-reference.md)
