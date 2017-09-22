---
title: "How to: Convert Between Hexadecimal Strings and Numeric Types (C# Programming Guide)"

ms.date: "2015-07-20"
ms.prod: .net


ms.technology: 
  - "devlang-csharp"

ms.topic: "article"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "hexadecimal strings [C#], converting to numeric type"
  - "conversions [C#], hexidecimal strings"
  - "strings [C#], converting hexadecimal strings"
  - "hexadecimal strings [C#]"
ms.assetid: 7115c49f-7d1d-40c3-8bd9-aae0cc1d46b6
caps.latest.revision: 19
author: "BillWagner"
ms.author: "wiwagn"

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
# How to: Convert Between Hexadecimal Strings and Numeric Types (C# Programming Guide)
These examples show you how to perform the following tasks:  
  
-   Obtain the hexadecimal value of each character in a [string](../../../csharp/language-reference/keywords/string.md).  
  
-   Obtain the [char](../../../csharp/language-reference/keywords/char.md) that corresponds to each value in a hexadecimal string.  
  
-   Convert a hexadecimal `string` to an [int](../../../csharp/language-reference/keywords/int.md).  
  
-   Convert a hexadecimal `string` to a [float](../../../csharp/language-reference/keywords/float.md).  
  
-   Convert a [byte](../../../csharp/language-reference/keywords/byte.md) array to a hexadecimal `string`.  
  
## Example  
 This example outputs the hexadecimal value of each character in a `string`. First it parses the `string` to an array of characters. Then it calls <xref:System.Convert.ToInt32%28System.Char%29> on each character to obtain its numeric value. Finally, it formats the number as its hexadecimal representation in a `string`.  
  
 [!code-cs[csProgGuideTypes#30](../../../csharp/programming-guide/nullable-types/codesnippet/CSharp/how-to-convert-between-hexadecimal-strings-and-numeric-types_1.cs)]  
  
## Example  
 This example parses a `string` of hexadecimal values and outputs the character corresponding to each hexadecimal value. First it calls the [Split(Char\[\])](xref:System.String.Split(System.Char[])) method to obtain each hexadecimal value as an individual `string` in an array. Then it calls <xref:System.Convert.ToInt32%28System.String%2CSystem.Int32%29> to convert the hexadecimal value to a decimal value represented as an [int](../../../csharp/language-reference/keywords/int.md). It shows two different ways to obtain the character corresponding to that character code. The first technique uses <xref:System.Char.ConvertFromUtf32%28System.Int32%29>, which returns the character corresponding to the integer argument as a `string`. The second technique explicitly casts the `int` to a [char](../../../csharp/language-reference/keywords/char.md).  
  
 [!code-cs[csProgGuideTypes#31](../../../csharp/programming-guide/nullable-types/codesnippet/CSharp/how-to-convert-between-hexadecimal-strings-and-numeric-types_2.cs)]  
  
## Example  
 This example shows another way to convert a hexadecimal `string` to an integer, by calling the <xref:System.Int32.Parse%28System.String%2CSystem.Globalization.NumberStyles%29> method.  
  
 [!code-cs[csProgGuideTypes#32](../../../csharp/programming-guide/nullable-types/codesnippet/CSharp/how-to-convert-between-hexadecimal-strings-and-numeric-types_3.cs)]  
  
## Example  
 The following example shows how to convert a hexadecimal `string` to a [float](../../../csharp/language-reference/keywords/float.md) by using the <xref:System.BitConverter?displayProperty=fullName> class and the <xref:System.Int32.Parse%2A?displayProperty=fullName> method.  
  
 [!code-cs[csProgGuideTypes#39](../../../csharp/programming-guide/nullable-types/codesnippet/CSharp/how-to-convert-between-hexadecimal-strings-and-numeric-types_4.cs)]  
  
## Example  
 The following example shows how to convert a [byte](../../../csharp/language-reference/keywords/byte.md) array to a hexadecimal string by using the <xref:System.BitConverter?displayProperty=fullName> class.  
  
 [!code-cs[csProgGuideTypes#38](../../../csharp/programming-guide/nullable-types/codesnippet/CSharp/how-to-convert-between-hexadecimal-strings-and-numeric-types_5.cs)]  
  
## See Also  
 [Standard Numeric Format Strings](../../../standard/base-types/standard-numeric-format-strings.md)   
 [Types](../../../csharp/programming-guide/types/index.md)   
 [How to: Determine Whether a String Represents a Numeric Value](../../../csharp/programming-guide/strings/how-to-determine-whether-a-string-represents-a-numeric-value.md)
