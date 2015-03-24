
 int ledPin = 12; 
 int c=0;
char val;
void setup() {
   pinMode(ledPin, OUTPUT); 
   Serial.begin(9600); 
 }

 void loop() 
 {
   if (Serial.available() && c==0) 
   { 
     val = Serial.read(); 
   }
   else if(c==1)
   {
     Serial.end();
     val='{';
     c=0;
     Serial.begin(9600);
   }
   switch(val)
   {
   case 'a':

    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'b':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'c':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'd':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'e':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'f':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'g':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'h':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'i':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'j':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'k':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'l':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'm':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'n':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'o':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'p':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'q':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'r':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 's':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 't':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'u':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'v':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'w':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'x':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case  'y':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 'z':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '1':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '2':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '3':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '4':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '5':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 6:
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '7':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '8':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case 9:
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case '0':
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
    
    case ' ':
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
    c=1;break;
   }
   delay(1000); 
}
