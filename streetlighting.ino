int y1,y2,y3,y4,y5;
int ldr1=A1;
int ldr2=A2;
int ldr3=A3;
int ldr4=A4;
int pir1=30;
int pir6=32;
int pir3=34;
int pir8=36;
int pir9=38;
int pir14=40;
int pir11=42;
int pir16=44;
int l1=2;
int l5=2;
int l2=3;
int l6=3;
int l3=4;
int l7=4;
int l4=5;
int l8=5;

int l9=6;
int l13=6;
int l10=7;
int l14=7;
int l11=8;
int l15=8;
int l12=9;
int l16=9;


void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  int val1,val2,val3,val4;
  val1=analogRead(A1);
  val2=analogRead(A2);
  val3=analogRead(A3);
  val4=analogRead(A4);
  
//Serial.println(val1,val2,val3,val4);
  
  int dval1,dval2,dval3,dval4,dval5,dval6,dval7,dval8;
  dval1=digitalRead(30);
  dval2=digitalRead(32);
  dval3=digitalRead(34);
  dval4=digitalRead(36);
  dval5=digitalRead(38);
  dval6=digitalRead(40);
  dval7=digitalRead(42);
  dval8=digitalRead(44);
  
  //Serial.println(dval1,dval2,dval3,dval4,dval5,dval6,dval7,dval8);
  
  int i1=0;
  int i2=0;
  int i3=0;
  int i4=0;
  if (val1>=0 && val1<=249)
  i1=1;
  if (val2>=0 && val2<=249)
  i2=1;
  if (val3>=0 && val3<=249)
  i3=1;
  if (val4>=0 && val4<=249)
  i4=1;
  
  y1=((i1&&i2&&i4)||(i2&&i3&&i4)||(i1&&i3&&i4)||(i1&&i2&&i3));
  
  
  int j1=0;
  int j2=0;
  int j3=0;
  int j4=0;
  if (val1>=250 && val1<=499)
  j1=1;
  if (val2>=250 && val2<=499)
  j2=1;
  if (val3>=250 && val3<=499)
  j3=1;
  if (val4>=250 && val4<=499)
  j4=1;
  
  
  y2=((j1&&j2&&j4)||(j2&&j3&&j4)||(j1&&j3&&j4)||(j1&&j2&&j3));
  
  int k1=0;
  int k2=0;
  int k3=0;
  int k4=0;
  if (val1>=500 && val1<=749)
  k1=1;
  if (val2>=500 && val2<=749)
  k2=1;
  if (val3>=500 && val3<=749)
  k3=1;
  if (val4>=500 && val4<=749)
  k4=1;
  
  
  y3=((k1&&k2&&k4)||(k2&&k3&&k4)||(k1&&k3&&k4)||(k1&&k2&&k3));
  
  int m1=0;
  int m2=0;
  int m3=0;
  int m4=0;
  if (val1>=750 && val1<=999)
  m1=1;
  if (val2>=750 && val2<=999)
  m2=1;
  if (val3>=750 && val3<=999)
  m3=1;
  if (val4>=750 && val4<=999)
  m4=1;
  
  
  y4=((m1&&m2&&m4)||(m2&&m3&&m4)||(m1&&m3&&m4)||(m1&&m2&&m3));
  
  int n1=0;
  int n2=0;
  int n3=0;
  int n4=0;
  if (val1>=1000)
  n1=1;
  if (val2>=1000)
  n2=1;
  if (val3>=1000)
  n3=1;
  if (val4>=1000)
  n4=1;
  
  
  y5=((n1&&n2&&n4)||(n2&&n3&&n4)||(n1&&n3&&n4)||(n1&&n2&&n3));
  
  
  
  if(y1==1)
  {
    if(dval1==1 && dval2==0 && dval3==0 && dval4==0)
    {
      analogWrite(2,255);
      analogWrite(3,128);
      analogWrite(4,64);
      analogWrite(5,0);
    }
    else if(dval1==1 && dval2==1 && dval3==0 && dval4==0)
    {
      analogWrite(2,128);
      analogWrite(3,255);
      analogWrite(4,128);
      analogWrite(5,64);
    }
    else if(dval1==0 && dval2==1 && dval3==1 && dval4==0)
    {
      analogWrite(2,0);
      analogWrite(3,128);
      analogWrite(4,255);
      analogWrite(5,128);
    }
    else if(dval1==0 && dval2==0 && dval3==1 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,128);
      analogWrite(4,255);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,255);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==0)
      {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,0);
    }
  }
  
   if(y2==1)
  {
    if(dval1==1 && dval2==0 && dval3==0 && dval4==0)
    {
      analogWrite(2,192);
      analogWrite(3,96);
      analogWrite(4,32);
      analogWrite(5,0);
    }
    else if(dval1==1 && dval2==1 && dval3==0 && dval4==0)
    {
      analogWrite(2,96);
      analogWrite(3,192);
      analogWrite(4,96);
      analogWrite(5,32);
    }
    else if(dval1==0 && dval2==1 && dval3==1 && dval4==0)
    {
      analogWrite(2,0);
      analogWrite(3,96);
      analogWrite(4,192);
      analogWrite(5,96);
    }
    else if(dval1==0 && dval2==0 && dval3==1 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,96);
      analogWrite(4,192);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,192);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==0)
      {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,0);
    }
  }
  
  
   if(y3==1)
  {
    if(dval1==1 && dval2==0 && dval3==0 && dval4==0)
    {
      analogWrite(2,128);
      analogWrite(3,64);
      analogWrite(4,16);
      analogWrite(5,0);
    }
    else if(dval1==1 && dval2==1 && dval3==0 && dval4==0)
    {
      analogWrite(2,64);
      analogWrite(3,128);
      analogWrite(4,64);
      analogWrite(5,16);
    }
    else if(dval1==0 && dval2==1 && dval3==1 && dval4==0)
    {
      analogWrite(2,0);
      analogWrite(3,64);
      analogWrite(4,128);
      analogWrite(5,64);
    }
    else if(dval1==0 && dval2==0 && dval3==1 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,64);
      analogWrite(4,128);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,128);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==0)
      {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(3,0);
      analogWrite(4,0);
    }
  }


 if(y4==1)
  {
    if(dval1==1 && dval2==0 && dval3==0 && dval4==0)
    {
      analogWrite(2,96);
      analogWrite(3,48);
      analogWrite(4,16);
      analogWrite(5,0);
    }
    else if(dval1==1 && dval2==1 && dval3==0 && dval4==0)
    {
      analogWrite(2,48);
      analogWrite(3,96);
      analogWrite(4,48);
      analogWrite(5,16);
    }
    else if(dval1==0 && dval2==1 && dval3==1 && dval4==0)
    {
      analogWrite(2,0);
      analogWrite(3,48);
      analogWrite(4,96);
      analogWrite(5,48);
    }
    else if(dval1==0 && dval2==0 && dval3==1 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(4,48);
      analogWrite(5,96);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==1)
    {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(4,0);
      analogWrite(5,96);
    }
    else if(dval1==0 && dval2==0 && dval3==0 && dval4==0)
      {
      analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(4,0);
      analogWrite(5,0);
    }
  }

if(y5==1)
{
   analogWrite(2,0);
      analogWrite(3,0);
      analogWrite(4,0);
      analogWrite(5,0);
       analogWrite(6,0);
      analogWrite(7,0);
      analogWrite(8,0);
      analogWrite(9,0);
}


if(y1==1)
  {
    if(dval8==1 && dval7==0 && dval6==0 && dval5==0)
    {
      analogWrite(9,255);
      analogWrite(8,128);
      analogWrite(7,64);
      analogWrite(6,0);
    }
    else if(dval8==1 && dval7==1 && dval6==0 && dval5==0)
    {
      analogWrite(9,128);
      analogWrite(8,255);
      analogWrite(7,128);
      analogWrite(6,64);
    }
    else if(dval8==0 && dval7==1 && dval6==1 && dval5==0)
    {
      analogWrite(9,0);
      analogWrite(8,128);
      analogWrite(7,255);
      analogWrite(6,128);
    }
    else if(dval8==0 && dval7==0 && dval6==1 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,128);
      analogWrite(6,255);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,255);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==0)
      {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,0);
    }
  }
  
   if(y2==1)
  {
    if(dval8==1 && dval7==0 && dval6==0 && dval5==0)
    {
      analogWrite(9,192);
      analogWrite(8,96);
      analogWrite(7,32);
      analogWrite(6,0);
    }
    else if(dval8==1 && dval7==1 && dval6==0 && dval5==0)
    {
      analogWrite(9,96);
      analogWrite(8,192);
      analogWrite(7,96);
      analogWrite(6,32);
    }
    else if(dval8==0 && dval7==1 && dval6==1 && dval5==0)
    {
      analogWrite(9,0);
      analogWrite(8,96);
      analogWrite(7,192);
      analogWrite(6,96);
    }
    else if(dval8==0 && dval7==0 && dval6==1 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,96);
      analogWrite(6,192);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,192);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==0)
      {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,0);
    }
  }
  
  
   if(y3==1)
  {
    if(dval8==1 && dval7==0 && dval6==0 && dval5==0)
    {
      analogWrite(9,128);
      analogWrite(8,64);
      analogWrite(7,16);
      analogWrite(6,0);
    }
    else if(dval8==1 && dval7==1 && dval6==0 && dval5==0)
    {
      analogWrite(9,64);
      analogWrite(8,128);
      analogWrite(7,64);
      analogWrite(6,16);
    }
    else if(dval8==0 && dval7==1 && dval6==1 && dval5==0)
    {
      analogWrite(9,0);
      analogWrite(8,64);
      analogWrite(7,128);
      analogWrite(6,64);
    }
    else if(dval8==0 && dval7==0 && dval6==1 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,64);
      analogWrite(6,128);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,128);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==0)
      {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,0);
    }
  }


 if(y4==1)
  {
    if(dval8==1 && dval7==0 && dval6==0 && dval5==0)
    {
      analogWrite(9,96);
      analogWrite(8,48);
      analogWrite(7,16);
      analogWrite(6,0);
    }
    else if(dval8==1 && dval7==1 && dval6==0 && dval5==0)
    {
      analogWrite(9,48);
      analogWrite(8,96);
      analogWrite(7,48);
      analogWrite(6,16);
    }
    else if(dval8==0 && dval7==1 && dval6==1 && dval5==0)
    {
      analogWrite(9,0);
      analogWrite(8,48);
      analogWrite(7,96);
      analogWrite(6,48);
    }
    else if(dval8==0 && dval7==0 && dval6==1 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,48);
      analogWrite(6,96);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==1)
    {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,96);
    }
    else if(dval8==0 && dval7==0 && dval6==0 && dval5==0)
      {
      analogWrite(9,0);
      analogWrite(8,0);
      analogWrite(7,0);
      analogWrite(6,0);
    }
  }
}

