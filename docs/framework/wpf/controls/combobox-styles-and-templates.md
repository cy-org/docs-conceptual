---
title: "ComboBox Styles and Templates"
ms.custom: ""
ms.date: "03/30/2017"
ms.prod: ".net-framework"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "dotnet-wpf"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "ComboBox [WPF], styles and templates"
  - "states [WPF], ComboBox"
  - "ControlTemplate [WPF], ComboBox"
  - "styles [WPF], ComboBox"
  - "templates [WPF], ComboBox"
  - "parts [WPF], ComboBox"
ms.assetid: b0662fa1-16d7-4320-b26b-c1804e565a44
caps.latest.revision: 21
author: dotnet-bot
ms.author: dotnetcontent
manager: "wpickett"
---
# ComboBox Styles and Templates
This topic describes the styles and templates for the <xref:System.Windows.Controls.ComboBox> control. You can modify the default <xref:System.Windows.Controls.ControlTemplate> to give the control a unique appearance. For more information, see [Customizing the Appearance of an Existing Control by Creating a ControlTemplate](../../../../docs/framework/wpf/controls/customizing-the-appearance-of-an-existing-control.md).  
  
## ComboBox Parts  
 The following table lists the named parts for the <xref:System.Windows.Controls.ComboBox> control.  
  
|Part|Type|Description|  
|-|-|-|  
|PART_EditableTextBox|<xref:System.Windows.Controls.TextBox>|Contains the text of the <xref:System.Windows.Controls.ComboBox>.|  
|PART_Popup|<xref:System.Windows.Controls.Primitives.Popup>|The drop-down that contains the items in the combo box.|  
  
 When you create a <xref:System.Windows.Controls.ControlTemplate> for a <xref:System.Windows.Controls.ComboBox>, your template might contain an <xref:System.Windows.Controls.ItemsPresenter> within a <xref:System.Windows.Controls.ScrollViewer>. (The <xref:System.Windows.Controls.ItemsPresenter> displays each item in the <xref:System.Windows.Controls.ComboBox>; the <xref:System.Windows.Controls.ScrollViewer> enables scrolling within the control).  If the <xref:System.Windows.Controls.ItemsPresenter> is not the direct child of the <xref:System.Windows.Controls.ScrollViewer>, you must give the <xref:System.Windows.Controls.ItemsPresenter> the name, `ItemsPresenter`.  
  
## ComboBox States  
 The following table lists the states for the <xref:System.Windows.Controls.ComboBox> control.  
  
|VisualState Name|VisualStateGroup Name|Description|  
|-|-|-|  
|Normal|CommonStates|The default state.|  
|Disabled|CommonStates|The control is disabled.|  
|MouseOver|CommonStates|The mouse pointer is over the <xref:System.Windows.Controls.ComboBox> control.|  
|Focused|FocusStates|The control has focus.|  
|Unfocused|FocusStates|The control does not have focus.|  
|FocusedDropDown|FocusStates|The drop-down for the <xref:System.Windows.Controls.ComboBox> has focus.|  
|Valid|ValidationStates|The control uses the <xref:System.Windows.Controls.Validation> class and the <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `false`.|  
|InvalidFocused|ValidationStates|The <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `true` has the control has focus.|  
|InvalidUnfocused|ValidationStates|The <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `true` has the control does not have focus.|  
|Editable|EditStates|The <xref:System.Windows.Controls.ComboBox.IsEditable%2A> property is `true`.|  
|Uneditable|EditStates|The <xref:System.Windows.Controls.ComboBox.IsEditable%2A> property is `false`.|  
  
## ComboBoxItem Parts  
 The <xref:System.Windows.Controls.ComboBoxItem> control does not have any named parts.  
  
## ComboBoxItem States  
 The following table lists the states for the <xref:System.Windows.Controls.ComboBoxItem> control.  
  
|VisualState Name|VisualStateGroup Name|Description|  
|-|-|-|  
|Normal|CommonStates|The default state.|  
|Disabled|CommonStates|The control is disabled.|  
|MouseOver|CommonStates|The mouse pointer is over the <xref:System.Windows.Controls.ComboBox> control.|  
|Focused|FocusStates|The control has focus.|  
|Unfocused|FocusStates|The control does not have focus.|  
|Selected|SelectionStates|The item is currently selected.|  
|Unselected|SelectionStates|The item is not selected.|  
|SelectedUnfocused|SelectionStates|The item is selected, but does not have focus.|  
|Valid|ValidationStates|The control uses the <xref:System.Windows.Controls.Validation> class and the <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `false`.|  
|InvalidFocused|ValidationStates|The <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `true` has the control has focus.|  
|InvalidUnfocused|ValidationStates|The <xref:System.Windows.Controls.Validation.HasError%2A?displayProperty=fullName> attached property is `true` has the control does not have focus.|  
  
## ComboBox ControlTemplate Example  
 The following example shows how to define a <xref:System.Windows.Controls.ControlTemplate> for the <xref:System.Windows.Controls.ComboBox> control and associated types.  
  
 [!code-xaml[ControlTemplateExamples#ComboBox](../../../../samples/snippets/csharp/VS_Snippets_Wpf/ControlTemplateExamples/CS/resources/combobox.xaml#combobox)]  
  
 The preceding example uses one or more of the following resources.  
  
 [!code-xaml[ControlTemplateExamples#Resources](../../../../samples/snippets/csharp/VS_Snippets_Wpf/ControlTemplateExamples/CS/resources/shared.xaml#resources)]  
  
 For the complete sample, see [Styling with ControlTemplates Sample](http://go.microsoft.com/fwlink/?LinkID=160041).  
  
## See Also  
 <xref:System.Windows.FrameworkElement.Style%2A>   
 <xref:System.Windows.Controls.ControlTemplate>   
 [Control Styles and Templates](../../../../docs/framework/wpf/controls/control-styles-and-templates.md)   
 [Control Customization](../../../../docs/framework/wpf/controls/control-customization.md)   
 [Styling and Templating](../../../../docs/framework/wpf/controls/styling-and-templating.md)   
 [Customizing the Appearance of an Existing Control by Creating a ControlTemplate](../../../../docs/framework/wpf/controls/customizing-the-appearance-of-an-existing-control.md)
