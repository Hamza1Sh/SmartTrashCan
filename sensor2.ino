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
