#include <Arduino.h>

void setup() {
    Serial.begin(115200);    // открыть канал связи с компьютером по USB
    pinMode(8, OUTPUT);      // ножка 8 — выход: к ней на плате подключён светодиод
}

void loop() {
    digitalWrite(8, LOW);    // подать на ножку 0 вольт — светодиод загорится
    Serial.println("горит");
    delay(200);              // подождать 200 мс 
    digitalWrite(8, HIGH);   // подать 3,3 вольта — светодиод погаснет
    Serial.println("погас");
    delay(600);
}