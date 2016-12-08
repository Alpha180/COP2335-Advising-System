<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class MainForm
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(MainForm))
        Me.Label1 = New System.Windows.Forms.Label()
        Me.TextBoxUser = New System.Windows.Forms.TextBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.TextBoxPass = New System.Windows.Forms.TextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.RichTextBoxMain = New System.Windows.Forms.RichTextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.ComboBoxPrograsm = New System.Windows.Forms.ComboBox()
        Me.CheckedListBox1 = New System.Windows.Forms.CheckedListBox()
        Me.ComboBoxAssist = New System.Windows.Forms.ComboBox()
        Me.CheckedListBox2 = New System.Windows.Forms.CheckedListBox()
        Me.MonthCalendar1 = New System.Windows.Forms.MonthCalendar()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.DateTimePickerCalendar = New System.Windows.Forms.DateTimePicker()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.ComboBoxAdvisor = New System.Windows.Forms.ComboBox()
        Me.CheckedListBox3 = New System.Windows.Forms.CheckedListBox()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(12, 45)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(102, 15)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "MDC User Name:"
        '
        'TextBoxUser
        '
        Me.TextBoxUser.Location = New System.Drawing.Point(10, 63)
        Me.TextBoxUser.Name = "TextBoxUser"
        Me.TextBoxUser.Size = New System.Drawing.Size(100, 23)
        Me.TextBoxUser.TabIndex = 1
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(128, 45)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(92, 15)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "MDC Password:"
        '
        'TextBoxPass
        '
        Me.TextBoxPass.Location = New System.Drawing.Point(131, 63)
        Me.TextBoxPass.Name = "TextBoxPass"
        Me.TextBoxPass.Size = New System.Drawing.Size(100, 23)
        Me.TextBoxPass.TabIndex = 3
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(-3, 13)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(142, 15)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "Log in to Schedule Appt."
        '
        'RichTextBoxMain
        '
        Me.RichTextBoxMain.Location = New System.Drawing.Point(237, 8)
        Me.RichTextBoxMain.Name = "RichTextBoxMain"
        Me.RichTextBoxMain.Size = New System.Drawing.Size(312, 187)
        Me.RichTextBoxMain.TabIndex = 6
        Me.RichTextBoxMain.Text = resources.GetString("RichTextBoxMain.Text")
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.Location = New System.Drawing.Point(7, 110)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(116, 15)
        Me.Label4.TabIndex = 7
        Me.Label4.Text = "REASON FOR VISIT:"
        '
        'ComboBoxPrograsm
        '
        Me.ComboBoxPrograsm.Location = New System.Drawing.Point(0, 128)
        Me.ComboBoxPrograsm.Name = "ComboBoxPrograsm"
        Me.ComboBoxPrograsm.Size = New System.Drawing.Size(121, 23)
        Me.ComboBoxPrograsm.TabIndex = 8
        Me.ComboBoxPrograsm.Text = "Select One"
        '
        'CheckedListBox1
        '
        Me.CheckedListBox1.FormattingEnabled = True
        Me.CheckedListBox1.Items.AddRange(New Object() {"Program 1", "Program 2", "Program 3", "Program 4", "Program 5", "Not a Student", "General Questions"})
        Me.CheckedListBox1.Location = New System.Drawing.Point(0, 148)
        Me.CheckedListBox1.Name = "CheckedListBox1"
        Me.CheckedListBox1.Size = New System.Drawing.Size(121, 130)
        Me.CheckedListBox1.TabIndex = 9
        '
        'ComboBoxAssist
        '
        Me.ComboBoxAssist.Location = New System.Drawing.Point(0, 284)
        Me.ComboBoxAssist.Name = "ComboBoxAssist"
        Me.ComboBoxAssist.Size = New System.Drawing.Size(121, 23)
        Me.ComboBoxAssist.TabIndex = 10
        Me.ComboBoxAssist.Text = "Select One"
        '
        'CheckedListBox2
        '
        Me.CheckedListBox2.FormattingEnabled = True
        Me.CheckedListBox2.Items.AddRange(New Object() {"Adv. Assistance 1", "Adv. Assistance 2", "Adv. Assistance 3", "Adv. Assistance 4", "Adv. Assistance 5", "Adv. Assistance 6", "Adv. Assistance 7"})
        Me.CheckedListBox2.Location = New System.Drawing.Point(0, 304)
        Me.CheckedListBox2.Name = "CheckedListBox2"
        Me.CheckedListBox2.Size = New System.Drawing.Size(121, 130)
        Me.CheckedListBox2.TabIndex = 11
        '
        'MonthCalendar1
        '
        Me.MonthCalendar1.Location = New System.Drawing.Point(322, 256)
        Me.MonthCalendar1.Name = "MonthCalendar1"
        Me.MonthCalendar1.TabIndex = 13
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Segoe UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label5.Location = New System.Drawing.Point(319, 218)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(232, 17)
        Me.Label5.TabIndex = 14
        Me.Label5.Text = "Please Select Date and time of Visit:"
        '
        'DateTimePickerCalendar
        '
        Me.DateTimePickerCalendar.Location = New System.Drawing.Point(322, 238)
        Me.DateTimePickerCalendar.Name = "DateTimePickerCalendar"
        Me.DateTimePickerCalendar.Size = New System.Drawing.Size(227, 23)
        Me.DateTimePickerCalendar.TabIndex = 15
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(155, 263)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(141, 15)
        Me.Label6.TabIndex = 16
        Me.Label6.Text = "SELECT YOUR ADVISOR:"
        '
        'ComboBoxAdvisor
        '
        Me.ComboBoxAdvisor.Location = New System.Drawing.Point(158, 284)
        Me.ComboBoxAdvisor.Name = "ComboBoxAdvisor"
        Me.ComboBoxAdvisor.Size = New System.Drawing.Size(121, 23)
        Me.ComboBoxAdvisor.TabIndex = 17
        Me.ComboBoxAdvisor.Text = "Select One"
        '
        'CheckedListBox3
        '
        Me.CheckedListBox3.FormattingEnabled = True
        Me.CheckedListBox3.Items.AddRange(New Object() {"Advisor 1", "Advisor 2", "Advisor 3", "Advisor 4", "Advisor 5", "Not Sure", "First Available"})
        Me.CheckedListBox3.Location = New System.Drawing.Point(158, 304)
        Me.CheckedListBox3.Name = "CheckedListBox3"
        Me.CheckedListBox3.Size = New System.Drawing.Size(121, 130)
        Me.CheckedListBox3.TabIndex = 18
        '
        'MainForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(553, 436)
        Me.Controls.Add(Me.CheckedListBox3)
        Me.Controls.Add(Me.ComboBoxAdvisor)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.DateTimePickerCalendar)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.MonthCalendar1)
        Me.Controls.Add(Me.CheckedListBox2)
        Me.Controls.Add(Me.ComboBoxAssist)
        Me.Controls.Add(Me.CheckedListBox1)
        Me.Controls.Add(Me.ComboBoxPrograsm)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.RichTextBoxMain)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.TextBoxPass)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.TextBoxUser)
        Me.Controls.Add(Me.Label1)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Name = "MainForm"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "CENTRAL SCEDULING DATABASE - STUDENTS"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents TextBoxUser As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents TextBoxPass As TextBox
    Friend WithEvents Label3 As Label
    Friend WithEvents RichTextBoxMain As RichTextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents ComboBoxPrograsm As ComboBox
    Friend WithEvents CheckedListBox1 As CheckedListBox
    Friend WithEvents ComboBoxAssist As ComboBox
    Friend WithEvents CheckedListBox2 As CheckedListBox
    Friend WithEvents MonthCalendar1 As MonthCalendar
    Friend WithEvents Label5 As Label
    Friend WithEvents DateTimePickerCalendar As DateTimePicker
    Friend WithEvents Label6 As Label
    Friend WithEvents ComboBoxAdvisor As ComboBox
    Friend WithEvents CheckedListBox3 As CheckedListBox
End Class
