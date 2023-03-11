
#define P_E 4
#define FT 5
#define playTime 12000
#define relay 9

void setup() 
{
pinMode(3, INPUT);
pinMode(13, OUTPUT);
pinMode(P_E,OUTPUT);
pinMode(FT,OUTPUT);

Serial.begin(9600);
pinMode(relay,OUTPUT);
}

void loop() 
{
  if (digitalRead(3)== HIGH)
    {
    digitalWrite(13, HIGH);
    digitalWrite(P_E, HIGH);
    digitalWrite(relay, HIGH);
    Serial.println("Motion detected!");
    delay(5000);
    digitalWrite(13, LOW);
    digitalWrite(P_E, LOW);
    digitalWrite(relay, LOW);
    
    }
    else
       {
      digitalWrite(13,LOW);
      digitalWrite(relay, LOW); 
      Serial.println("No Motion detected!");
      delay(500);
       }
    }
