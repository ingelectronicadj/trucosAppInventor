#include <Arduino.h>

int actuador = 13;
int status = 0;

void setup() {
    Serial.begin(9600);
    pinMode(actuador,OUTPUT);
}

void loop() {
    if(Serial.available()>0){
        status = Serial.read();
    }

    if(status == '1'){
        digitalWrite(actuador,HIGH);
    }
    else if(status == '0'){
        digitalWrite(actuador,LOW);
    }
    else{
        // do it other thing
    }
}
