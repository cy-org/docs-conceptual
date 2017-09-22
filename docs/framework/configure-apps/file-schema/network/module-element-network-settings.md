---
title: "&lt;module&gt; Element (Network Settings)"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-clr"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "http://schemas.microsoft.com/.NetConfiguration/v2.0#module"
  - "http://schemas.microsoft.com/.NetConfiguration/v2.0#configuration/system.net/defaultProxy/module"
dev_langs: 
  - "VB"
  - "CSharp"
  - "C++"
  - "jsharp"
helpviewer_keywords: 
  - "module element"
  - "<module> element"
ms.assetid: 10318725-9666-4d65-ab61-b94c64e59f13
caps.latest.revision: 14
author: "mcleblanc"
ms.author: "markl"
manager: "markl"
---
# &lt;module&gt; Element (Network Settings)
Adds a new proxy module to the application.  
  
 \<configuration>  
\<system.net>  
\<defaultProxy>  
\<module>  
  
## Syntax  
  
```xml  
      <module   
   type = "name", System, Version="version number", Culture="culture", PublicKeyToken="token" "   
/>  
```  
  
## Attributes and Elements  
 The following sections describe attributes, child elements, and parent elements.  
  
### Attributes  
  
|**Attribute**|**Description**|  
|-------------------|---------------------|  
|`type`|The name and specifics of the module that implements the proxy.|  
  
### Child Elements  
 None.  
  
### Parent Elements  
  
|**Element**|**Description**|  
|-----------------|---------------------|  
|[defaultProxy](../../../../../docs/framework/configure-apps/file-schema/network/defaultproxy-element-network-settings.md)|Configures the Hypertext Transfer Protocol (HTTP) proxy server.|  
  
## Remarks  
 The `module` element registers proxy classes that implement the <xref:System.Net.IWebProxy> interface. After registering the proxy class, `module` can be used to request information through the supported proxy.  
  
 The value for the `type` attribute should be the name of a valid Dynamic Link Library (DLL) and the class name of the module.  
  
## Configuration Files  
 This element can be used in the application configuration file or the machine configuration file (Machine.config).  
  
## Example  
 The following example registers a custom proxy class.  
  
```xml  
<configuration>  
  <system.net>  
    <defaultProxy>  
      <module  
        type = "Test.CustomWebProxy, System, Version=2.0.3600.0, Culture=neutral, PublicKeyToken=b77a5c561934e089"  
      />  
    </defaultProxy>  
  </system.net>  
</configuration>  
```  
  
## See Also  
 <xref:System.Net.IWebProxy?displayProperty=fullName>   
 [Network Settings Schema](../../../../../docs/framework/configure-apps/file-schema/network/index.md)
