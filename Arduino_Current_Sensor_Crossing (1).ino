void setup(){
  Serial.begin(9600);//Starts up our process for reading sensor values
  pinMode(6,OUTPUT);//Control for Flashboard
  pinMode(7,INPUT);//Sensor Input
}

void loop(){
  int Sensor = digitalRead(7);//Sets up "Sensor" as our value from the Current Sensor
  Serial.println(Sensor);//Allows for reading of sensor in Serial Monitor
  delay(200);//delay of 0.2 seconds in between reads

if (Sensor>0){
  digitalWrite(6,LOW);//turns off our Flashboard when nothing is in the detection zone
}

if (Sensor<1){
  digitalWrite(6,HIGH);//turns on Flashboard when something is detected
}
}
