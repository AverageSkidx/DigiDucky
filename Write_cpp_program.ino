#include "DigiKeyboard.h"

void setup() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(50);
    DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(750);
    DigiKeyboard.print("Visual Studio Code");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(10000);
    DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("#include <iostream>");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("int main() {");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("    std::cout << \"Hello, World!\" << std::endl;");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("    return 0;");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("}");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
