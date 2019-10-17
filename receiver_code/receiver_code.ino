#define m1 7
#define m2 9
#define m3 10
#define m4 11

void setup() {

  Serial.begin(9600);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0)
  {
    char cmd=Serial.read();
    
    //Serial.println(cmd);
    if(cmd=='s')
    {
      Serial.println("Stop");
    digitalWrite(m1, 0);
    digitalWrite(m2, 0);
    digitalWrite(m3, 0);
    digitalWrite(m4, 0);
    }

     else if(cmd=='f')
    {
      Serial.println("Forward");
    digitalWrite(m1, 1);
    digitalWrite(m2, 0);
    digitalWrite(m3, 1);
    digitalWrite(m4, 0);
    }

      else if(cmd=='b')
    {
      Serial.println("Backward");
    digitalWrite(m1, 0);
    digitalWrite(m2, 1);
    digitalWrite(m3, 0);
    digitalWrite(m4, 1);
    }

      else if(cmd=='l')
    {
      Serial.println("Left");
    digitalWrite(m1, 1);
    digitalWrite(m2, 0);
    digitalWrite(m3, 0);
    digitalWrite(m4, 1 );
    }

      else if(cmd=='r')
    {
      Serial.println("Right");
    digitalWrite(m1, 0);
    digitalWrite(m2, 1);
    digitalWrite(m3, 1);
    digitalWrite(m4, 0);
    }
  }
  // put your main code here, to run repeatedly:

}
