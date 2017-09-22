---
title: "Exposing COM Components to the .NET Framework"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-clr"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "VB"
  - "CSharp"
  - "C++"
  - "jsharp"
helpviewer_keywords: 
  - "exposing COM components to .NET Framework"
  - "interoperation with unmanaged code, exposing COM components"
  - "COM interop, exposing COM components"
ms.assetid: e78b14f1-e487-43cd-9c6d-1a07483f1730
caps.latest.revision: 11
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# Exposing COM Components to the .NET Framework
This section summarizes the process needed to expose an existing COM component to managed code. For details about writing COM servers that tightly integrate with the .NET Framework, see [Design Considerations for Interoperation](http://msdn.microsoft.com/en-us/b59637f6-fe35-40d6-ae72-901e7a707689).  
  
 Existing COM components are valuable resources in managed code as middle-tier business applications or as isolated functionality. An ideal component has a primary interop assembly and conforms tightly to the programming standards imposed by COM.  
  
#### To expose COM components to the .NET Framework  
  
1.  [Import a type library as an assembly](../../../docs/framework/interop/importing-a-type-library-as-an-assembly.md).  
  
     The common language runtime requires metadata for all types, including COM types. There are several ways to obtain an assembly containing COM types imported as metadata.  
  
2.  [Create COM types in managed Code](http://msdn.microsoft.com/en-us/1a95a8ca-c8b8-4464-90b0-5ee1a1135b66).  
  
     You can inspect COM types, activate instances, and invoke methods on the COM object the same way you do for any managed type.  
  
3.  [Compile an interop project](../../../docs/framework/interop/compiling-an-interop-project.md).  
  
     The [!INCLUDE[winsdklong](../../../includes/winsdklong-md.md)] provides compilers for several languages compliant with the Common Language Specification (CLS), including [!INCLUDE[vbprvblong](../../../includes/vbprvblong-md.md)], C#, and C++.  
  
4.  [Deploy an interop application](../../../docs/framework/interop/deploying-an-interop-application.md).  
  
     Interop applications are best deployed as [strong-named](../../../docs/framework/app-domains/strong-named-assemblies.md), signed assemblies in the global assembly cache.  
  
## See Also  
 [Interoperating with Unmanaged Code](../../../docs/framework/interop/index.md)   
 [Design Considerations for Interoperation](http://msdn.microsoft.com/en-us/b59637f6-fe35-40d6-ae72-901e7a707689)   
 [COM Interop Sample: .NET Client and COM Server](../../../docs/framework/interop/com-interop-sample-net-client-and-com-server.md)   
 [Language Independence and Language-Independent Components](../../../docs/standard/language-independence-and-language-independent-components.md)   
 [Gacutil.exe (Global Assembly Cache Tool)](../../../docs/framework/tools/gacutil-exe-gac-tool.md)
