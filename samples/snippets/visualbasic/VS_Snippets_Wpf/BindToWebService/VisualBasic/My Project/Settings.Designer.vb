﻿'------------------------------------------------------------------------------
' <auto-generated>
'     This code was generated by a tool.
'     Runtime Version:2.0.50727.1414
'
'     Changes to this file may cause incorrect behavior and will be lost if
'     the code is regenerated.
' </auto-generated>
'------------------------------------------------------------------------------


Imports Microsoft.VisualBasic
Imports System
Namespace My


	<Global.System.Runtime.CompilerServices.CompilerGeneratedAttribute(), Global.System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "9.0.0.0")>
	Friend NotInheritable Partial Class Settings
		Inherits System.Configuration.ApplicationSettingsBase

		Private Shared defaultInstance As Settings = (CType(Global.System.Configuration.ApplicationSettingsBase.Synchronized(New Settings()), Settings))

		Public Shared ReadOnly Property [Default]() As Settings
			Get
				Return defaultInstance
			End Get
		End Property

		<Global.System.Configuration.ApplicationScopedSettingAttribute(), Global.System.Diagnostics.DebuggerNonUserCodeAttribute(), Global.System.Configuration.SpecialSettingAttribute(Global.System.Configuration.SpecialSetting.WebServiceUrl), Global.System.Configuration.DefaultSettingValueAttribute("http://services.msdn.microsoft.com/ContentServices/ContentService.asmx")>
		Public ReadOnly Property BindtoContentService_com_microsoft_msdn_services_ContentService() As String
			Get
				Return (CStr(Me("BindtoContentService_com_microsoft_msdn_services_ContentService")))
			End Get
		End Property
	End Class
End Namespace
