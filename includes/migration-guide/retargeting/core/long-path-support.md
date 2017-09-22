### Long path support

|   |   |
|---|---|
|Details|Starting with apps that target the .NET Framework 4.6.2, long paths (of up to 32K characters) are supported, and the 260-character (or <code>MAX_PATH</code>) limitation on path lengths has been removed.For apps that are recompiled to target the .NET Framework 4.6.2, code paths that previously threw a <xref:System.IO.PathTooLongException?displayProperty=name> because a path exceeded 260 characters will now throw a <xref:System.IO.PathTooLongException?displayProperty=name> only under the following conditions:<ul><li>The length of the path is greater than <xref:System.Int16.MaxValue> (32,767) characters.</li><li>The operating system returns <code>COR_E_PATHTOOLONG</code> or its equivalent.</li></ul>For apps that target the .NET Framework 4.6.1 and earlier versions, the runtime automatically throws a <xref:System.IO.PathTooLongException?displayProperty=name> whenever a path exceeds 260 characters.|
|Suggestion|For apps that target the .NET Framework 4.6.2, you can opt out of long path support if it is not desirable by adding the following to to the <code>&lt;runtime&gt;</code> section of your <code>app.config</code> file:<pre><code>&lt;runtime&gt;<br />&lt;AppContextSwitchOverrides value=&quot;Switch.System.IO.BlockLongPaths=true&quot; /&gt;<br />&lt;/runtime&gt;</code></pre>For apps that target earlier versions of the .NET Framework but run on the .NET Framework 4.6.2 or later, you can opt in to long path support by adding the following to to the <code>&lt;runtime&gt;</code> section of your <code>app.config</code> file:<pre><code>&lt;runtime&gt;<br />&lt;AppContextSwitchOverrides value=&quot;Switch.System.IO.BlockLongPaths=false&quot; /&gt;<br />&lt;/runtime&gt;</code></pre>|
|Scope|Minor|
|Version|4.6.2|
|Type|Retargeting|

