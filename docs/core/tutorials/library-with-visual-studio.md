---
title: Building a .NET Standard class library with C# and .NET Core in Visual Studio 2017
description: Learn how to create a .NET Standard class library written in C# using Visual Studio 2017.
keywords: .NET Core, .NET Standard class library, Visual Studio 2017
author: BillWagner
ms.author: wiwagn
ms.date: 08/07/2017
ms.topic: article
ms.prod: .net-core
ms.technology: devlang-csharp
ms.devlang: csharp
ms.assetid: c849ca26-6a25-4d35-9544-f343af88e0e7
---
# Building a class library with C# and .NET Core in Visual Studio 2017

A *class library* defines types and methods that are called by an application. A class library that targets the .NET Standard 2.0 allows your library to be called by any .NET implementation that supports that version of the .NET Standard. When you finish your class library, you can decide whether you want to distribute it as a third-party component or whether you want to include it as a bundled component with one or more applications.

> [!NOTE]
> For a list of the .NET Standard versions and the platforms they support, see [.NET Standard](../../standard/net-standard.md).

In this topic, you'll create a simple utility library that contains a single string-handling method. You'll implement it as an [extension method](../../csharp/programming-guide/classes-and-structs/extension-methods.md) so that you can call it as if it were a member of the <xref:System.String> class.

## Creating a class library solution

Start by creating a solution for your class library project and its related projects. A Visual Studio Solution just serves as a container for one or more projects. To create the solution:

1. On the Visual Studio menu bar, choose **File** > **New** > **Project**.

1. In the **New Project** dialog, expand the **Other Project Types** node, and select **Visual Studio Solutions**. Name the solution "ClassLibraryProjects" and select the **OK** button.

   ![New project dialog](./media/library-with-visual-studio/newproject.png)

## Creating the class library project

Create your class library project:

1. In **Solution Explorer**, right-click on the **ClassLibraryProjects** solution file and from the context menu, select **Add** > **New Project**.

1. In the **Add New Project** dialog, expand the **Visual C#** node, then select the **.NET Standard** node followed by the **Class Library (.NET Standard)** project template. In the **Name** text box, enter "StringLibrary" as the name of the project. Select **OK** to create the class library project.

   ![Add New Project dialog](./media/library-with-visual-studio/libproject.png)

   The code window then opens in the Visual Studio development environment.

   ![Visual Studio application window showing the default class library template code](./media/library-with-visual-studio/stringlibrary.png)

1. Check to make sure that our library targets the correct version of the .NET Standard. Right-click on the library project in the **Solution Explorer** windows, then select **Properties**. The **Target Framework** text box shows that we're targeting .NET Standard 2.0.

   ![Project properties for the class library](./media/library-with-visual-studio/properties.png)

1. Replace the code in the code window with the following code and save the file:

   [!CODE-csharp[ClassLib#1](../../../samples/snippets/csharp/getting_started/with_visual_studio_2017/classlib.cs)]

   The class library, `UtilityLibraries.StringLibrary`, contains a method named `StartsWithUpper`, which returns a <xref:System.Boolean> value that indicates whether the current string instance begins with an uppercase character. The Unicode standard distinguishes uppercase characters from lowercase characters. The <xref:System.Char.IsUpper(System.Char)?displayProperty=fullName> method returns `true` if a character is uppercase.

1. On the menu bar, select **Build** > **Build Solution**. The project should compile without error.

   ![Output pane showing that the build succeeded](./media/library-with-visual-studio/buildsucceeds.png)

## Next step

You've successfully built the library. Because you haven't called any of its methods, you don't know whether it works as expected. The next step in developing your library is to test it by using a [Unit Test Project](testing-library-with-visual-studio.md).