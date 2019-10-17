int xPin=A0;
int yPin=A1;

int ledPin=13;//led on pin 13 is ON except when transmitter is parallel to the ground

void setup() 
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);//Initialise the serial connection debugging
}

void loop() 
{
  int xval=analogRead(xPin);
  int yval=analogRead(yPin);
 /* 
  Serial.print("xval=");
  Serial.println(xval);
  
  Serial.print("yval=");
  Serial.println(yval); 
  
  delay(1000); //used to display values after 1s delay
 */ 
  //Serial.print("\n");

  
  
  if ((xval>322 && xval<365) && (yval>340 && yval<370)) //stationary or stop(transmitter parallel to ground)
  {
    digitalWrite(ledPin,HIGH);
    Serial.print("s");
  } 
  else 
  { 
    if ((xval>280 && xval<310) && (yval>340 && yval<370)) //forward(transmitter tilted forward)
    {
      digitalWrite(ledPin,HIGH);
      Serial.print("f");
      
    }
    if ((xval>380 && xval<420) && (yval>340 && yval<370)) //backward(transmitter tilted backward)
    {
      digitalWrite(ledPin,HIGH);
      Serial.print("b");
      
    }
    if ((xval>322 && xval<365) && (yval>275 && yval<315)) //left(transmitter tilted to left)
    {
      digitalWrite(ledPin,HIGH);
      Serial.print("l");
     }
     if ((xval>322 && xval<365) && (yval>370 && yval<406)) //right(transmitter tilted to right)
    {
      digitalWrite(ledPin,HIGH);
      Serial.print("r");
      
    }
    
  //}
  delay(1000);
  
  }
  }
