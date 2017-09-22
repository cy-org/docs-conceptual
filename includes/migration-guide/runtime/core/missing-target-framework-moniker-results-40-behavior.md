### Missing Target Framework Moniker results in 4.0 behavior

|   |   |
|---|---|
|Details|Applications without a <xref:System.Runtime.Versioning.TargetFrameworkAttribute?displayProperty=name> applied at the assembly level will automatically run using the semantics (quirks) of the .NET Framework 4.0. To ensure high quality, it is recommended that all binaries be explicitly attributed with a <xref:System.Runtime.Versioning.TargetFrameworkAttribute?displayProperty=name> indicating the version of the .NET Framework they were built with. Note that using a target framework moniker in a project file will caues MSBuild to automatically apply a <xref:System.Runtime.Versioning.TargetFrameworkAttribute?displayProperty=name>.|
|Suggestion|A <xref:System.Runtime.Versioning.TargetFrameworkAttribute?displayProperty=name> should be supplied, either through adding the attribute directly to the assembly or by specifying a target framework in the [project file or through Visual Studio&#39;s project properties GUI](http://blogs.msdn.com/b/visualstudio/archive/2010/05/19/visual-studio- managed-multi-targeting-part-1-concepts-target-framework-moniker-target-framework.aspx).|
|Scope|Major|
|Version|4.5|
|Type|Runtime|
|Analyzers|<ul><li>CD0013</li></ul>|

