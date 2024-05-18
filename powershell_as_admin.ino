#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT)
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
  DigiKeyboard.delay(200);

  DigiKeyboard.print("echo Started powershell as an administrator.");
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Dont touch
}
