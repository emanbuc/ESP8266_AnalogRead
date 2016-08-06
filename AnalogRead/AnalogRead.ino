

/* ========= PRODUCT INFORMATION  =========== */
#define FW_REVISION 1
#define FW_NAME "ESP8266 AnalogRead"
/* -------------------- */

/*
 Author: Emanuele Buchicchio
 Created on 06 August 2016 
 https://github.com/emanbuc/ESP8266_AnalogRead.git
 http://blog.emanuelebuchicchio.com

*/
 
float analogValue=0.00f;

void setup() {
  Serial.begin(9600); 
  delay(20);
  Serial.println("---- SERIAL TEST -----");
  Serial.print("FW Name: ");
  Serial.println(FW_NAME);
  Serial.print("FW Revision: ");
  Serial.println(FW_REVISION);

}

void loop() {
  analogValue = analogRead(A0);
  Serial.print("AnalogRead: ");
  Serial.print(analogValue);
   Serial.print(" => ");
  Serial.print(analogValue/1024.00f);
  Serial.println(" V");
  delay(1000);
}
