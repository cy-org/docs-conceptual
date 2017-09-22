### Assemblies compiled with Regex.CompileToAssembly breaks between 4.0 and 4.5

|   |   |
|---|---|
|Details|If an assembly of compiled regular expressions is built with the .NET Framework 4.5 but targets the .NET Framework 4, attempting to use one of the regular expressions in that assembly on a system with .NET Framework 4 installed throws an exception.|
|Suggestion|To work around this problem, you can do either of the following:<ul><li>Build the assembly that contains the regular expressions with the .NET Framework 4.</li><li>Use an interpreted regular expression.</li></ul>|
|Scope|Minor|
|Version|4.5|
|Type|Runtime|
|Affected APIs|<ul><li><xref:System.Text.RegularExpressions.Regex.CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo%5B%5D%2CSystem.Reflection.AssemblyName)?displayProperty=fullName></li><li><xref:System.Text.RegularExpressions.Regex.CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo%5B%5D%2CSystem.Reflection.AssemblyName%2CSystem.Reflection.Emit.CustomAttributeBuilder%5B%5D)?displayProperty=fullName></li><li><xref:System.Text.RegularExpressions.Regex.CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo%5B%5D%2CSystem.Reflection.AssemblyName%2CSystem.Reflection.Emit.CustomAttributeBuilder%5B%5D%2CSystem.String)?displayProperty=fullName></li></ul>|

