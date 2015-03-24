int ldr=0;
int d,m=0;
String s,h="";
String a[]={"6","8","39","30","1","28","36","4","2","46","37","29","10","26","15","40","47","31","3","5","7","27","11","12","16","41"};
String b[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}
void loop()
{
  ldr=analogRead(A0);
  Serial.print(ldr);
  if(ldr > 200)
  {
    s=s+"1";
  }
  else
  {
    s=s+"0";
  }
  if(d >1)
  {
    if(s.charAt(d-1)=='0'&& s.charAt(d)=='0')
    {
      s=s.substring(0,d-1);
      for(int j=0;j<s.length();j++)
      {
        if(s.charAt(j)=='0')
        {
          continue;
        }
        else
        {
          m=m+1;
        }
      }
      if(m==6||m==8||m==7||m==11||m==12||m==16)
      {
       switch(m)
       {
        case 6:
        if(s.charAt(1)!='0')
        {
          m=m+20;
        }
        break;
      
        case 8:
        if(s.charAt(1)=='0')
        {
          if(s.charAt(3)=='0')
          {
            if(s.charAt(5)=='0')
            {
              m=m+19;
            }
            else
            {
              m=m+20;
            }
          }
          else
          {
            m=m+21;
          }
        }
        break;
      
        case 7:
        if(s.charAt(7)=='0')
        {
          if(s.charAt(5)=='0')
          {
            m=m+23;
          }
          else
          {
            m=m+24;
          }
        }
        break;
        
        case 11:
        if(s.charAt(5)=='0')
        {
          if(s.charAt(11)=='0')
          {
            m=m+25;
          }
          else
          {
            m=m+26;
          }
        }
        break;
        
        case 12:
        if(s.charAt(13)=='0')
        {
          if(s.charAt(7)=='0')
          {
            if(s.charAt(5)=='0')
            {
              m=m+27;
            }
            else
            {
              m=m+28;
            }
          }
          else
          {
            m=m+29;
          }
        }
        break;
      
        case 16:
        if(s.charAt(7)=='0')
        {
          if(s.charAt(1)=='0')
          {
            m=m+30;
          }
          else
          {
            m=m+31;
          }
        }
        break;
       }
      }
      h=h+m;
      for(int i=0;i<26;i++)
      {
       if(h.compareTo(a[i])==0)
        {
          Serial.print(b[i]);
          s="";
          h="";
          m=0;
          d=-1;
          break;
        }
       else
        {
          continue;
        }
      }
    }
  }
  d=d+1;
  delayMicroseconds(100);
}

