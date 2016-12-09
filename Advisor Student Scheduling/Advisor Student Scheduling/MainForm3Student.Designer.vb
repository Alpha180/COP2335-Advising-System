<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MainForm3Student
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
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.TBStudentName = New System.Windows.Forms.TextBox()
        Me.TBStudentID = New System.Windows.Forms.TextBox()
        Me.TBPhone = New System.Windows.Forms.TextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.CBProgram = New System.Windows.Forms.ComboBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.CBReason = New System.Windows.Forms.ComboBox()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.CBSelectAdvisor = New System.Windows.Forms.ComboBox()
        Me.Label7 = New System.Windows.Forms.Label()
        Me.DateTimePickStudent = New System.Windows.Forms.DateTimePicker()
        Me.MonthCalendarStudent = New System.Windows.Forms.MonthCalendar()
        Me.BtnConfirmStudent = New System.Windows.Forms.Button()
        Me.BtnCancelStudent = New System.Windows.Forms.Button()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.RTBConfirmChanges = New System.Windows.Forms.RichTextBox()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(13, 4)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(120, 21)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Student Name"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(13, 54)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(159, 21)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "10 Digit Student ID "
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(13, 107)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(195, 21)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Textable Phone Number"
        '
        'TBStudentName
        '
        Me.TBStudentName.Location = New System.Drawing.Point(16, 28)
        Me.TBStudentName.Name = "TBStudentName"
        Me.TBStudentName.Size = New System.Drawing.Size(192, 23)
        Me.TBStudentName.TabIndex = 5
        '
        'TBStudentID
        '
        Me.TBStudentID.Location = New System.Drawing.Point(16, 81)
        Me.TBStudentID.Name = "TBStudentID"
        Me.TBStudentID.Size = New System.Drawing.Size(192, 23)
        Me.TBStudentID.TabIndex = 6
        '
        'TBPhone
        '
        Me.TBPhone.Location = New System.Drawing.Point(16, 131)
        Me.TBPhone.Name = "TBPhone"
        Me.TBPhone.Size = New System.Drawing.Size(192, 23)
        Me.TBPhone.TabIndex = 7
        '
        'Label4
        '
        Me.Label4.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label4.Location = New System.Drawing.Point(373, 26)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(205, 33)
        Me.Label4.TabIndex = 8
        Me.Label4.Text = "Select Program of Study:"
        '
        'CBProgram
        '
        Me.CBProgram.FormattingEnabled = True
        Me.CBProgram.Items.AddRange(New Object() {"Program 1", "Program 2", "Program 3", "Program 4", "Program 5", "General Questions", "Not a Student"})
        Me.CBProgram.Location = New System.Drawing.Point(367, 53)
        Me.CBProgram.Name = "CBProgram"
        Me.CBProgram.Size = New System.Drawing.Size(241, 23)
        Me.CBProgram.TabIndex = 9
        Me.CBProgram.Text = "Select One"
        '
        'Label5
        '
        Me.Label5.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label5.Location = New System.Drawing.Point(373, 95)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(205, 33)
        Me.Label5.TabIndex = 10
        Me.Label5.Text = "Reason for Your Visit"
        '
        'CBReason
        '
        Me.CBReason.FormattingEnabled = True
        Me.CBReason.Items.AddRange(New Object() {"Advisor Assistance 1", "Advisor Assistance 2", "Advisor Assistance 3", "Advisor Assistance 4", "Advisor Assistance 5", "Advisor Assistance 6", "General Questions"})
        Me.CBReason.Location = New System.Drawing.Point(367, 121)
        Me.CBReason.Name = "CBReason"
        Me.CBReason.Size = New System.Drawing.Size(241, 23)
        Me.CBReason.TabIndex = 11
        Me.CBReason.Text = "Select One"
        '
        'Label6
        '
        Me.Label6.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label6.Location = New System.Drawing.Point(373, 159)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(205, 33)
        Me.Label6.TabIndex = 12
        Me.Label6.Text = "Select Your Advisor"
        '
        'CBSelectAdvisor
        '
        Me.CBSelectAdvisor.FormattingEnabled = True
        Me.CBSelectAdvisor.Items.AddRange(New Object() {"Advisor 1", "Advisor 2", "Advisor 3", "Advisor 4", "Advisor 5", "Advisor 6", "Not Sure", "First Available"})
        Me.CBSelectAdvisor.Location = New System.Drawing.Point(367, 196)
        Me.CBSelectAdvisor.Name = "CBSelectAdvisor"
        Me.CBSelectAdvisor.Size = New System.Drawing.Size(241, 23)
        Me.CBSelectAdvisor.TabIndex = 13
        Me.CBSelectAdvisor.Text = "Select One"
        '
        'Label7
        '
        Me.Label7.AutoSize = True
        Me.Label7.Font = New System.Drawing.Font("Segoe UI", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label7.Location = New System.Drawing.Point(12, 171)
        Me.Label7.Name = "Label7"
        Me.Label7.Size = New System.Drawing.Size(282, 21)
        Me.Label7.TabIndex = 14
        Me.Label7.Text = "Please Select Date and Time of Visit"
        '
        'DateTimePickStudent
        '
        Me.DateTimePickStudent.Location = New System.Drawing.Point(17, 198)
        Me.DateTimePickStudent.Name = "DateTimePickStudent"
        Me.DateTimePickStudent.Size = New System.Drawing.Size(230, 23)
        Me.DateTimePickStudent.TabIndex = 15
        '
        'MonthCalendarStudent
        '
        Me.MonthCalendarStudent.Location = New System.Drawing.Point(18, 233)
        Me.MonthCalendarStudent.Name = "MonthCalendarStudent"
        Me.MonthCalendarStudent.TabIndex = 16
        '
        'BtnConfirmStudent
        '
        Me.BtnConfirmStudent.Font = New System.Drawing.Font("Segoe UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnConfirmStudent.Location = New System.Drawing.Point(319, 353)
        Me.BtnConfirmStudent.Name = "BtnConfirmStudent"
        Me.BtnConfirmStudent.Size = New System.Drawing.Size(115, 42)
        Me.BtnConfirmStudent.TabIndex = 17
        Me.BtnConfirmStudent.Text = "CONFIRM" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "CHANGES"
        Me.BtnConfirmStudent.UseVisualStyleBackColor = True
        '
        'BtnCancelStudent
        '
        Me.BtnCancelStudent.Font = New System.Drawing.Font("Segoe UI", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.BtnCancelStudent.Location = New System.Drawing.Point(493, 353)
        Me.BtnCancelStudent.Name = "BtnCancelStudent"
        Me.BtnCancelStudent.Size = New System.Drawing.Size(115, 42)
        Me.BtnCancelStudent.TabIndex = 18
        Me.BtnCancelStudent.Text = "CANCEL"
        Me.BtnCancelStudent.UseVisualStyleBackColor = True
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Font = New System.Drawing.Font("Segoe UI", 11.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label8.Location = New System.Drawing.Point(338, 223)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(260, 40)
        Me.Label8.TabIndex = 19
        Me.Label8.Text = "Please Review Request Criteria and" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Press Confirm Changes to Complete"
        '
        'RTBConfirmChanges
        '
        Me.RTBConfirmChanges.Location = New System.Drawing.Point(319, 266)
        Me.RTBConfirmChanges.Name = "RTBConfirmChanges"
        Me.RTBConfirmChanges.Size = New System.Drawing.Size(289, 81)
        Me.RTBConfirmChanges.TabIndex = 20
        Me.RTBConfirmChanges.Text = ""
        '
        'MainForm3Student
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(665, 417)
        Me.Controls.Add(Me.RTBConfirmChanges)
        Me.Controls.Add(Me.Label8)
        Me.Controls.Add(Me.BtnCancelStudent)
        Me.Controls.Add(Me.BtnConfirmStudent)
        Me.Controls.Add(Me.MonthCalendarStudent)
        Me.Controls.Add(Me.DateTimePickStudent)
        Me.Controls.Add(Me.Label7)
        Me.Controls.Add(Me.CBSelectAdvisor)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.CBReason)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.CBProgram)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.TBPhone)
        Me.Controls.Add(Me.TBStudentID)
        Me.Controls.Add(Me.TBStudentName)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Name = "MainForm3Student"
        Me.Text = "Advisement Scheduling for Students"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents TBStudentName As TextBox
    Friend WithEvents TBStudentID As TextBox
    Friend WithEvents TBPhone As TextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents CBProgram As ComboBox
    Friend WithEvents Label5 As Label
    Friend WithEvents CBReason As ComboBox
    Friend WithEvents Label6 As Label
    Friend WithEvents CBSelectAdvisor As ComboBox
    Friend WithEvents Label7 As Label
    Friend WithEvents DateTimePickStudent As DateTimePicker
    Friend WithEvents MonthCalendarStudent As MonthCalendar
    Friend WithEvents BtnConfirmStudent As Button
    Friend WithEvents BtnCancelStudent As Button
    Friend WithEvents Label8 As Label
    Friend WithEvents RTBConfirmChanges As RichTextBox
End Class
