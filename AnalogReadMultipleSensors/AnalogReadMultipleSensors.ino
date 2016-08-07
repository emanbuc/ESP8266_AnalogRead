

/* ========= PRODUCT INFORMATION  =========== */
#define FW_REVISION 4
#define FW_NAME "ESP8266 AnalogRead Multiple sensors"
/* -------------------- */

//V_ADC_STEP=3.3/1024 per NomeMCU A0
//V_ADC_STEP=1/1024 per ADC ESP-12
#define V_ADC_STEP  0.00322265625 // Volt per step ADC

                                  
/*
 Author: Emanuele Buchicchio
 Created on 07 August 2016 
 https://github.com/emanbuc/ESP8266_AnalogRead.git
 http://blog.emanuelebuchicchio.com

*/
 
float analogValue1=0.00f;
float analogValue2=0.00f;

void setup() {
  Serial.begin(9600); 
  delay(20);
  Serial.println("---- SERIAL TEST -----");
  Serial.print("FW Name: ");
  Serial.println(FW_NAME);
  Serial.print("FW Revision: ");
  Serial.println(FW_REVISION);
  pinMode(D7,OUTPUT);
  pinMode(D8,OUTPUT);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);

}

void loop() {
  Serial.print("AnalogRead Sensor1: ");
  digitalWrite(D7,HIGH);
  digitalWrite(D8,LOW);
  analogValue1 = analogRead(A0);
  Serial.print(analogValue1);
   Serial.print(" => ");
  Serial.print(analogValue1*V_ADC_STEP);
  Serial.println(" V");
  delay(1000);


  Serial.print("AnalogRead Sensor2: ");
  digitalWrite(D7,LOW);
  digitalWrite(D8,HIGH);
  analogValue2 = analogRead(A0);
  Serial.print(analogValue2);
  Serial.print(" => ");
  Serial.print(analogValue2*V_ADC_STEP);
  Serial.println(" V");
  
  delay(1000);
}
