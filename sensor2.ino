//int ledPin =0; // Add the onboard LED on pin 13.
//int trigPin = 16; // Add the Trig pin on pin 10.
//int echoPin = 15; // Add the ECHO pin on pin 9.
//int duration, distance; // Add types 'duration' and 'distance'.
//void setup()
//{
//Serial.begin(9600);
//pinMode (ledPin, OUTPUT); // The LED must be controlled by Arduino, it means it is an output type.
//pinMode (trigPin, OUTPUT);// Same as above, the TRIG pin will send the ultrasonic wave.
//pinMode (echoPin, INPUT); // The ECHO pin will recieve the rebounded wave, so it must be an input type.
//}
//void loop()
//{
//digitalWrite (ledPin, LOW); // Here, LOW means off and HIGH means on.
//digitalWrite (trigPin, HIGH);
//delay(50);
//digitalWrite (trigPin, LOW);
//duration=pulseIn(echoPin,HIGH);
//distance=(duration/2)/29.1;
//if(distance <=3) // If the sensor detects an obstacle less than 30 cm in distance, the LED will start to blink.
//digitalWrite (ledPin, LOW);
//
//delay(50);
//if(distance >=3)// If no obstacle is there within 30 cm, the Led should turn off.
//digitalWrite (ledPin, HIGH);
//delay(50);
//Serial.print("cm"); 
//Serial.println(distance);
//}


int out=12;
int in=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(out,OUTPUT);
  pinMode(in,INPUT);
  Serial.println("Capacity: ");

}

void loop() {
  // put your main code here, to run repeatedly:
  int dur;
  int dis;

  digitalWrite(out,LOW);
  delay(100);

  digitalWrite(out,HIGH);
  delay(1000);
  digitalWrite(out,LOW);

  dur=pulseIn(in,HIGH);
  dis=(dur/2)/29.1;
  
  if (dis<=10){
         Serial.println("Bin Full");
        delay(1000);
         exit(0);

    
  }
  else { 
   Serial.println(String(dis)+ " cm left");
  
  }


  delay(100);
}
