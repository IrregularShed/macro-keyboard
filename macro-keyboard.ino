// uses HID-Project library
#include "HID-Project.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==LOW) {
    Serial.println("2 is down - MUTE");
    Keyboard.press(MEDIA_VOL_MUTE);
    delay(100);
    Keyboard.releaseAll();
    delay(100);
  }
  
  if (digitalRead(3)==LOW) {
    Serial.println("3 is down");
    delay(200);
  }
  
  if (digitalRead(4)==LOW) {
    Serial.println("4 is down");
    delay(200);
  }
  
  if (digitalRead(5)==LOW) {
    Serial.println("5 is down - SELECT ALL");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
    delay(100);
  }
  
  if (digitalRead(6)==LOW) {
    Serial.println("6 is down - COPY");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(100);
  }
  
  if (digitalRead(7)==LOW) {
    Serial.println("7 is down");
    delay(200);
  }
  
  if (digitalRead(8)==LOW) {
    Serial.println("8 is down");
    delay(200);
  }
  
  if (digitalRead(9)==LOW) {
    Serial.println("9 is down");
    delay(200);
  }
  
  if (digitalRead(10)==LOW) {
    Serial.println("10 is down - CUT");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('x');
    delay(100);
    Keyboard.releaseAll();
    delay(100);
  }
  
  if (digitalRead(16)==LOW) {
    Serial.println("16 is down - PASTE");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
    delay(100);
  }
}
