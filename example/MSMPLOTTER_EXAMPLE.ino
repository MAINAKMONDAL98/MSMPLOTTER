#include"MSMPLOTTER.h"
void setup() {
Serial.begin(9600);
}


void loop() {

uint16_t arr[]={10,5,15,5,15,5,10};
Serial.println("  ");
uint16_t p=(sizeof(arr) / sizeof(arr[0]));
MSMPLOTTER MSMP;
MSMP.msmplotter(arr,p);
delay(20000);
}
