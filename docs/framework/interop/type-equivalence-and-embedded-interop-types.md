---
title: "Type Equivalence and Embedded Interop Types"
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
  - "type equivalence"
  - "embedded interop types"
  - "primary interop assemblies,not necessary in CLR version 4"
  - "NoPIA"
ms.assetid: 78892eba-2a58-4165-b4b1-0250ee2f41dc
caps.latest.revision: 17
author: "rpetrusha"
ms.author: "ronpet"
manager: "wpickett"
---
# Type Equivalence and Embedded Interop Types
Beginning with the [!INCLUDE[net_v40_long](../../../includes/net-v40-long-md.md)], the common language runtime supports embedding type information for COM types directly into managed assemblies, instead of requiring the managed assemblies to obtain type information for COM types from interop assemblies. Because the embedded type information includes only the types and members that are actually used by a managed assembly, two managed assemblies might have very different views of the same COM type. Each managed assembly has a different <xref:System.Type> object to represent its view of the COM type. The common language runtime supports type equivalence between these different views for interfaces, structures, enumerations, and delegates.  
  
 Type equivalence means that a COM object that is passed from one managed assembly to another can be cast to the appropriate managed type in the receiving assembly.  
  
> [!NOTE]
>  Type equivalence and embedded interop types simplify the deployment of applications and add-ins that use COM components, because it is not necessary to deploy interop assemblies with the applications. Developers of shared COM components still have to create primary interop assemblies (PIAs) if they want their components to be used by earlier versions of the .NET Framework.  
  
## Type Equivalence  
 Equivalence of COM types is supported for interfaces, structures, enumerations, and delegates. COM types qualify as equivalent if all of the following are true:  
  
-   The types are both interfaces, or both structures, or both enumerations, or both delegates.  
  
-   The types have the same identity, as described in the next section.  
  
-   Both types are eligible for type equivalence, as described in the [Marking COM Types for Type Equivalence](#type_equiv) section.  
  
### Type Identity  
 Two types are determined to have the same identity when their scopes and identities match, in other words, if they each have the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute> attribute, and the two attributes have matching <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Scope%2A> and <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Identifier%2A> properties. The comparison for <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Scope%2A> is case-insensitive.  
  
 If a type does not have the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute> attribute, or if it has a <xref:System.Runtime.InteropServices.TypeIdentifierAttribute> attribute that does not specify scope and identifier, the type can still be considered for equivalence as follows:  
  
-   For interfaces, the value of the <xref:System.Runtime.InteropServices.GuidAttribute> is used instead of the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Scope%2A?displayProperty=fullName> property, and the <xref:System.Type.FullName%2A?displayProperty=fullName> property (that is, the type name, including the namespace) is used instead of the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Identifier%2A?displayProperty=fullName> property.  
  
-   For structures, enumerations, and delegates, the <xref:System.Runtime.InteropServices.GuidAttribute> of the containing assembly is used instead of the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Scope%2A> property, and the <xref:System.Type.FullName%2A?displayProperty=fullName> property is used instead of the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute.Identifier%2A> property.  
  
<a name="type_equiv"></a>   
### Marking COM Types for Type Equivalence  
 You can mark a type as eligible for type equivalence in two ways:  
  
-   Apply the <xref:System.Runtime.InteropServices.TypeIdentifierAttribute> attribute to the type.  
  
-   Make the type a COM import type. An interface is a COM import type if it has the <xref:System.Runtime.InteropServices.ComImportAttribute> attribute. An interface, structure, enumeration, or delegate is a COM import type if the assembly in which it is defined has the <xref:System.Runtime.InteropServices.ImportedFromTypeLibAttribute> attribute.  
  
## See Also  
 <xref:System.Type.IsEquivalentTo%2A>   
 [Using COM Types in Managed Code](http://msdn.microsoft.com/en-us/1a95a8ca-c8b8-4464-90b0-5ee1a1135b66)   
 [Importing a Type Library as an Assembly](../../../docs/framework/interop/importing-a-type-library-as-an-assembly.md)
