### Accessing a WPF DataGrid's selected items from a handler of the DataGrid's UnloadingRow event can cause a NullReferenceException

|   |   |
|---|---|
|Details|Due to a bug in the .NET Framework 4.5, event handlers for <xref:System.Windows.Controls.DataGrid> events involving the removal of a row can cause a <xref:System.NullReferenceException?displayProperty=name> to be thrown if they access the <xref:System.Windows.Controls.DataGrid>&#39;s <xref:System.Windows.Controls.Primitives.Selector.SelectedItem?displayProperty=name> or <xref:System.Windows.Controls.Primitives.MultiSelector.SelectedItems?displayProperty=name> properties.|
|Suggestion|This issue has been fixed in the .NET Framework 4.6 and may be addressed by upgrading to that version of the .NET Framework.|
|Scope|Minor|
|Version|4.5|
|Type|Runtime|
|Affected APIs|<ul><li><xref:System.Windows.Controls.DataGrid.UnloadingRow?displayProperty=fullName></li><li><xref:System.Windows.Controls.DataGrid.UnloadingRowDetails?displayProperty=fullName></li></ul>|

