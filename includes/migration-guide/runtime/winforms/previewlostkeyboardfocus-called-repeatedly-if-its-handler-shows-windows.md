### PreviewLostKeyboardFocus is called repeatedly if its handler shows a Windows Forms message box

|   |   |
|---|---|
|Details|Beginning in the .NET Framework 4.5, calling <code>System.Windows.Forms.MessageBox.Show</code> from a <xref:System.Windows.UIElement.PreviewLostKeyboardFocus> handler will cause the handler to re-fire when the message box is closed, potentially resulting in an infinite loop of message boxes.|
|Suggestion|There are two options to work around this issue -<ul><li>It may be avoided by calling <code>System.Windows.MessageBox.Show</code> instead of <code>System.Windows.Forms.MessageBox.Show</code>.</li><li>It may be avoided by showing the message box from a <xref:System.Windows.UIElement.LostKeyboardFocus> event handler (as opposed to a <xref:System.Windows.UIElement.PreviewLostKeyboardFocus?displayProperty=name> event handler).</li></ul>|
|Scope|Edge|
|Version|4.5|
|Type|Runtime|
|Affected APIs|<ul><li><xref:System.Windows.ContentElement.PreviewLostKeyboardFocus?displayProperty=fullName></li><li><xref:System.Windows.IInputElement.PreviewLostKeyboardFocus?displayProperty=fullName></li><li><xref:System.Windows.UIElement.PreviewLostKeyboardFocus?displayProperty=fullName></li><li><xref:System.Windows.UIElement3D.PreviewLostKeyboardFocus?displayProperty=fullName></li></ul>|
|Analyzers|<ul><li>CD0131</li></ul>|

