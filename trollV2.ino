#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
}

void loop() {
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_U, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_P, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_K, MOD_GUI_LEFT);
}
