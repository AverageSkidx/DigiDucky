#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  for (int i = 0; i < 10; i++) {
    DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
    DigiKeyboard.delay(200);
  }
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("$foldersToClean = @(");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"$env:Temp\",");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"$env:SystemRoot\\Temp\",");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"$env:SystemDrive\\Temp\",");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"$env:SystemDrive\\Windows\\Prefetch\",");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("\"$env:SystemDrive\\Windows\\SoftwareDistribution\\Download\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(")");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("function Clear-Folder($folderPath) {");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("if (Test-Path $folderPath) {");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Get-ChildItem -Path $folderPath -Recurse -Force | Remove-Item -Recurse -Force");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Write-Host \"Cleared: $folderPath\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("} else {");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Write-Host \"Folder doesnt exist: $folderPath\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("}");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("}");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("foreach ($folder in $foldersToClean) {");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Clear-Folder $folder");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("}");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("Write-Host \"Cleaned temp folders.\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("exit");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Dont touch
}
