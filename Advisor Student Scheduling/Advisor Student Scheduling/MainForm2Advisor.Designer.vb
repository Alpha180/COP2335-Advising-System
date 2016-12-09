<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MainForm2Advisor
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.TBUsername = New System.Windows.Forms.TextBox()
        Me.TBPassword = New System.Windows.Forms.TextBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.BtnConfirmAdvisor = New System.Windows.Forms.Button()
        Me.BtnCancelAdvisor = New System.Windows.Forms.Button()
        Me.MonthCalendarAdvisor = New System.Windows.Forms.MonthCalendar()
        Me.DateTimePickAdvisor = New System.Windows.Forms.DateTimePicker()
        Me.RTBDailyAgenda = New System.Windows.Forms.RichTextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.CBTimeBlock = New System.Windows.Forms.ComboBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.BtnServicedCount = New System.Windows.Forms.Button()
        Me.BtnTypeOfServiceCount = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(19, 8)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(94, 21)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "User Name"
        '
        'TBUsername
        '
        Me.TBUsername.Location = New System.Drawing.Point(13, 32)
        Me.TBUsername.Name = "TBUsername"
        Me.TBUsername.Size = New System.Drawing.Size(100, 23)
        Me.TBUsername.TabIndex = 1
        '
        'TBPassword
        '
        Me.TBPassword.Location = New System.Drawing.Point(143, 32)
        Me.TBPassword.Name = "TBPassword"
        Me.TBPassword.Size = New System.Drawing.Size(100, 23)
        Me.TBPassword.TabIndex = 3
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(156, 8)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(82, 21)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Password"
        '
        'BtnConfirmAdvisor
        '
        Me.BtnConfirmAdvisor.Font = New System.Drawing.Font("Segoe UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnConfirmAdvisor.Location = New System.Drawing.Point(165, 363)
        Me.BtnConfirmAdvisor.Name = "BtnConfirmAdvisor"
        Me.BtnConfirmAdvisor.Size = New System.Drawing.Size(115, 42)
        Me.BtnConfirmAdvisor.TabIndex = 4
        Me.BtnConfirmAdvisor.Text = "CONFIRM" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "CHANGES"
        Me.BtnConfirmAdvisor.UseVisualStyleBackColor = True
        '
        'BtnCancelAdvisor
        '
        Me.BtnCancelAdvisor.Font = New System.Drawing.Font("Segoe UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnCancelAdvisor.Location = New System.Drawing.Point(393, 363)
        Me.BtnCancelAdvisor.Name = "BtnCancelAdvisor"
        Me.BtnCancelAdvisor.Size = New System.Drawing.Size(115, 42)
        Me.BtnCancelAdvisor.TabIndex = 5
        Me.BtnCancelAdvisor.Text = "CANCEL"
        Me.BtnCancelAdvisor.UseVisualStyleBackColor = True
        '
        'MonthCalendarAdvisor
        '
        Me.MonthCalendarAdvisor.Location = New System.Drawing.Point(13, 67)
        Me.MonthCalendarAdvisor.Name = "MonthCalendarAdvisor"
        Me.MonthCalendarAdvisor.TabIndex = 6
        '
        'DateTimePickAdvisor
        '
        Me.DateTimePickAdvisor.Location = New System.Drawing.Point(12, 256)
        Me.DateTimePickAdvisor.Name = "DateTimePickAdvisor"
        Me.DateTimePickAdvisor.Size = New System.Drawing.Size(227, 23)
        Me.DateTimePickAdvisor.TabIndex = 7
        '
        'RTBDailyAgenda
        '
        Me.RTBDailyAgenda.Location = New System.Drawing.Point(326, 33)
        Me.RTBDailyAgenda.Name = "RTBDailyAgenda"
        Me.RTBDailyAgenda.Size = New System.Drawing.Size(310, 196)
        Me.RTBDailyAgenda.TabIndex = 8
        Me.RTBDailyAgenda.Text = ""
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(454, 9)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(113, 21)
        Me.Label3.TabIndex = 9
        Me.Label3.Text = "Daily Agenda"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.Location = New System.Drawing.Point(-1, 291)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(262, 21)
        Me.Label4.TabIndex = 10
        Me.Label4.Text = "Calendar Date and/or Time Block"
        '
        'CBTimeBlock
        '
        Me.CBTimeBlock.FormattingEnabled = True
        Me.CBTimeBlock.Items.AddRange(New Object() {"Day Off", "Lunch", "Walk-Ins ONLY", "Vacation", "Other"})
        Me.CBTimeBlock.Location = New System.Drawing.Point(13, 315)
        Me.CBTimeBlock.Name = "CBTimeBlock"
        Me.CBTimeBlock.Size = New System.Drawing.Size(225, 23)
        Me.CBTimeBlock.TabIndex = 11
        Me.CBTimeBlock.Text = "Select Calerndar Block Reason"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(411, 250)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(0, 15)
        Me.Label5.TabIndex = 12
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(347, 291)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(226, 21)
        Me.Label6.TabIndex = 13
        Me.Label6.Text = "Run Types of Service Report "
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label7.Location = New System.Drawing.Point(347, 232)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(279, 21)
        Me.Label7.TabIndex = 14
        Me.Label7.Text = "Run Student Serviced Count Report"
        '
        'BtnServicedCount
        '
        Me.BtnServicedCount.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnServicedCount.Location = New System.Drawing.Point(351, 256)
        Me.BtnServicedCount.Name = "BtnServicedCount"
        Me.BtnServicedCount.Size = New System.Drawing.Size(121, 32)
        Me.BtnServicedCount.TabIndex = 15
        Me.BtnServicedCount.Text = "Stdnt Svc Count"
        Me.BtnServicedCount.UseVisualStyleBackColor = True
        '
        'BtnTypeOfServiceCount
        '
        Me.BtnTypeOfServiceCount.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnTypeOfServiceCount.Location = New System.Drawing.Point(351, 315)
        Me.BtnTypeOfServiceCount.Name = "BtnTypeOfServiceCount"
        Me.BtnTypeOfServiceCount.Size = New System.Drawing.Size(121, 35)
        Me.BtnTypeOfServiceCount.TabIndex = 16
        Me.BtnTypeOfServiceCount.Text = "Types of Svc"
        Me.BtnTypeOfServiceCount.UseVisualStyleBackColor = True
        '
        'MainForm2Advisor
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(663, 417)
        Me.Controls.Add(Me.BtnTypeOfServiceCount)
        Me.Controls.Add(Me.BtnServicedCount)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.CBTimeBlock)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.RTBDailyAgenda)
        Me.Controls.Add(Me.DateTimePickAdvisor)
        Me.Controls.Add(Me.MonthCalendarAdvisor)
        Me.Controls.Add(Me.BtnCancelAdvisor)
        Me.Controls.Add(Me.BtnConfirmAdvisor)
        Me.Controls.Add(Me.TBPassword)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.TBUsername)
        Me.Controls.Add(Me.Label1)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Name = "MainForm2Advisor"
        Me.Text = "Advisement Schedule Maintenance System"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents TBUsername As TextBox
    Friend WithEvents TBPassword As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents BtnConfirmAdvisor As Button
    Friend WithEvents BtnCancelAdvisor As Button
    Friend WithEvents MonthCalendarAdvisor As MonthCalendar
    Friend WithEvents DateTimePickAdvisor As DateTimePicker
    Friend WithEvents RTBDailyAgenda As RichTextBox
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents CBTimeBlock As ComboBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label6 As Label
    Friend WithEvents Label7 As Label
    Friend WithEvents BtnServicedCount As Button
    Friend WithEvents BtnTypeOfServiceCount As Button
End Class
