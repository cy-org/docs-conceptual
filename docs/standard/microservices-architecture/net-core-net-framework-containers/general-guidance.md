---
title: General guidance
description: .NET Microservices Architecture for Containerized .NET Applications | General guidance
keywords: Docker, Microservices, ASP.NET, Container
author: CESARDELATORRE
ms.author: wiwagn
ms.date: 05/26/2017
ms.prod: .net-core
ms.technology: dotnet-docker
---
# General guidance

This section provides a summary of when to choose .NET Core or .NET Framework. We provide more details about these choices in the sections that follow.

You should use .NET Core for your containerized Docker server application when:

-   You have cross-platform needs. For example, you want to use both Linux and Windows Containers.

-   Your application architecture is based on microservices.

-   You need to start containers fast and want a small footprint per container to achieve better density or more containers per hardware unit in order to lower your costs.

In short, when you create new containerized .NET applications, you should consider .NET Core as the default choice. It has many benefits and fits best with the containers philosophy and style of working.

An additional benefit of using .NET Core is that you can run side by side .NET versions for applications within the same machine. This benefit is more important for servers or VMs that do not use containers, because containers isolate the versions of .NET that the app needs. (As long as they are compatible with the underlying OS.)

You should use .NET Framework for your containerized Docker server application when:

-   Your application currently uses .NET Framework and has strong dependencies on Windows.

-   You need to use Windows APIs that are not supported by .NET Core.

-   You need to use third-party .NET libraries or NuGet packages that are not available for .NET Core.

Using .NET Framework on Docker can improve your deployment experiences by minimizing deployment issues. This "lift and shift" scenario is important for "dockerizing" legacy applications (at least, those that are not based on microservices).


>[!div class="step-by-step"]
[Previous] (index.md)
[Next] (net-core-container-scenarios.md)
