---
title: When to choose .NET Core for Docker containers
description: .NET Microservices Architecture for Containerized .NET Applications | When to choose .NET Core for Docker containers
keywords: Docker, Microservices, ASP.NET, Container
author: CESARDELATORRE
ms.author: wiwagn
ms.date: 05/26/2017
ms.prod: .net-core
ms.technology: dotnet-docker
---
# When to choose .NET Core for Docker containers

The modularity and lightweight nature of .NET Core makes it perfect for containers. When you deploy and start a container, its image is far smaller with .NET Core than with .NET Framework. In contrast, to use .NET Framework for a container, you must base your image on the Windows Server Core image, which is a lot heavier than the Windows Nano Server or Linux images that you use for .NET Core.

Additionally, .NET Core is cross-platform, so you can deploy server apps with Linux or Windows container images. However, if you are using the full .NET Framework, you can only deploy images based on Windows Server Core.

The following is a more detailed explanation of why to choose .NET Core.

## Developing and deploying cross platform

Clearly, if your goal is to have an application (web application or service) that can run on multiple platforms supported by Docker (Linux and Windows), the right choice is .NET Core, because .NET Framework only supports Windows.

.NET Core also supports macOS as a development platform. However, when you deploy containers to a Docker host, that host must (currently) be based on Linux or Windows. For example, in a development environment, you could use a Linux VM running on a Mac.

[Visual Studio](https://www.visualstudio.com/) provides an integrated development environment (IDE) for Windows. [Visual Studio for Mac](https://www.visualstudio.com/vs/visual-studio-mac/) is an evolution of Xamarin Studio running in macOS, but as of the time of this writing, it still does not support Docker development. You can also use [Visual Studio Code](https://code.visualstudio.com/) (VS Code) on macOS, Linux, and Windows. VS Code fully supports .NET Core, including IntelliSense and debugging. Because VS Code is a lightweight editor, you can use it to develop containerized apps on the Mac in conjunction with the Docker CLI and the .NET Core CLI (dotnet cli). You can also target .NET Core with most third-party editors like Sublime, Emacs, vi, and the open-source OmniSharp project, which also provides IntelliSense support. In addition to the IDEs and editors, you can use the .NET Core command-line tools (dotnet CLI) for all supported platforms.

## Using containers for new ("green-field") projects

Containers are commonly used in conjunction with a microservices architecture, although they can also be used to containerize web apps or services that follow any architectural pattern. You can use .NET Framework on Windows Containers, but the modularity and lightweight nature of .NET Core makes it perfect for containers and microservices architectures. When you create and deploy a container, its image is far smaller with .NET Core than with .NET Framework.

## Creating and deploying microservices on containers

You could use the full .NET framework for microservices-based applications (without containers) when using plain processes, because .NET Framework is already installed and shared across processes. However, if you are using containers, the image for .NET Framework (Windows Server Core plus the full .NET Framework within each image) is probably too heavy for a microservices-on-containers approach.

In contrast, .NET Core is the best candidate if you are embracing a microservices-oriented system that is based on containers, because .NET Core is lightweight. In addition, its related container images, either the Linux image or the Windows Nano image, are lean and small.

A microservice is meant to be as small as possible: to be light when spinning up, to have a small footprint, to have a small Bounded Context, to represent a small area of concerns, and to be able to start and stop fast. For those requirements, you will want to use small and fast-to-instantiate container images like the .NET Core container image.

A microservices architecture also allows you to mix technologies across a service boundary. This enables a gradual migration to .NET Core for new microservices that work in conjunction with other microservices or with services developed with Node.js, Python, Java, GoLang, or other technologies.

There are many orchestrators you can use when targeting microservices and containers. For large and complex microservice systems being deployed as Linux containers, [Azure Container Service](https://azure.microsoft.com/services/container-service/) has multiple orchestrator offerings (Mesos DC/OS, Kubernetes, and Docker Swarm), which makes it a good choice. You can also use Azure Service Fabric for Linux, which supports Docker Linux containers. (At the time of this writing, this offering was still in [preview](https://docs.microsoft.com/azure/service-fabric/service-fabric-linux-overview). Check the [Azure Service Fabric](https://azure.microsoft.com/services/service-fabric/) for the latest status.)

For large and complex microservice systems being deployed as Windows Containers, most orchestrators are currently in a less mature state. However, you currently can use Azure Service Fabric for Windows Containers, as well as Azure Container Service. Azure Service Fabric is well established for running mission-critical Windows applications.

All these platforms support .NET Core and make them ideal for hosting your microservices.

## Deploying high density in scalable systems

When your container-based system needs the best possible density, granularity, and performance, .NET Core and ASP.NET Core are your best options. ASP.NET Core is up to ten times faster than ASP.NET in the full .NET Framework, and it leads other popular industry technologies for microservices, such as Java servlets, Go, and Node.js.

This is especially relevant for microservices architectures, where you could have hundreds of microservices (containers) running. With ASP.NET Core images (based on the .NET Core runtime) on Linux or Windows Nano, you can run your system with a much lower number of servers or VMs, ultimately saving costs in infrastructure and hosting.


>[!div class="step-by-step"]
[Previous] (general-guidance.md)
[Next] (net-framework-container-scenarios.md)
