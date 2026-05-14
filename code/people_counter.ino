#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define MAX_DEVICES 1
#define CLK_PIN 13
#define DATA_PIN 11
#define CS_PIN 10
#define IR_SENSOR_PIN 2
#define BUZZER_IN_PIN 3
#define BUZZER_OUT_PIN 4
#define LED_IN_PIN 5
#define LED_OUT_PIN 6

int inCount = 0;
int outCount = 0;

MD_Parola P10_display=
MD_Parola(CS_PIN,MAX_DEVICES);
MD_MAX72XX display =
MD_MAX72XX(DATA_PIN,CLK_PIN,
CS_PIN,MAX_DEVICES);

void setup(){
  p10_display.begin();
  pinMode(IR_SENSOR_PIN,INPUT);
  pinMode(BUZZER_IN_PIN,OUTPUT);
  pinMode(BUZZER_OUT_PIN,OUTPUT);
  pinMode(LED_IN_PIN,OUTPUT);
  pinMode(LED_IN_PIN,OUTPUT);
}

void loop() {
  int sensorValue =
  digitalRead(IR_SENSOR_PIN);

  if(sensorValue == HIGH) {
    intCount++;
    displayCount(inCount,outCount);
    activateBuzzerAndLED(BUZZER_IN_PIN,LED_IN_PIN);
    delay(1000);//to avoid multiple counts
  }
}
void displayCount(int in,int out){
  P10_display.displayClear();
  
  }

}
