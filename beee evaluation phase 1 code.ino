void setup()
{
  for(int i=7;i<13;i++)
  {
  pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  pinMode(4,INPUT);
  
}

void loop()
{  int i;
int d=analogRead(A0);
int a=digitalRead(4);
Serial.print("switch"); 
Serial.println(a);
Serial.print("darkness"); 
Serial.println(d);
delay(200);
 
if(d>490)
{
 if(a==HIGH)
  {
   for(int i=7;i<13;i++)
   {
     allLEDsOff;
      if(i!=12)
      {
       digitalWrite(i,HIGH);
       digitalWrite(i+1,HIGH);
       delay(200);
      }
       else
      {
       digitalWrite(i,HIGH);
       digitalWrite(i-5,HIGH);
       delay(200);
       allLEDsOff();
      }
    }
   }  
       else
       {
         for(int i=7;i<13;i++)
         {if(i%2==0)
         {digitalWrite(i,HIGH);
           }
         }
         delay(200);
         allLEDsOff();
         
         for(int i=7;i<13;i++)
         {if(i%2!=0)
           {
             digitalWrite(i,HIGH);
           }
         }
         delay(200);
         allLEDsOff();
       }
}
    else
    {
      allLEDsOff();
    }
   }

void allLEDsOff(void)
{
  for( int i=7;i<13;i++)
  {
    digitalWrite(i,LOW);
  }
  delay(200);
 }

  