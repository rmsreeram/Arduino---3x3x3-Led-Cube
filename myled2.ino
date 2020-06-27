
int dance=500;
int dance1=50;

int num[]={6,5,8,10};
void setup() {
  

for (int i=3;i<=11;i++)
{
  pinMode(i,1); 
}




}

void loop() {

 
full(); 
delay(1000);
each1();
delay(1000);
delay(1000);
up();
delay(1000);
mid();
delay(1000);
bot();
delay(1000);

//reverse

revbot();
delay(1000);
revmid();
delay(1000);
revtop();
delay(1000); 
upsideon();

upsideoff();

delay(500);
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
fulloff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();
roundon();
roundoff();

delay(500);
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
upcircleon();
upcircleoff();

midcircleon();
midcircleoff();

botcircleon();
botcircleoff();
delay(500);
circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();circleon();
circleoff();
circleon();
circleoff();
circleon();
circleoff();

}

void each1() // each led on and off
{
  for(int j=A0;j<=A4;j++)
{
  pinMode(j,1);
}

for(int k=3;k<=11;k++)
{
  digitalWrite(k,1);
  delay(500);
   digitalWrite(k,0);
}

}

void full()  // led blow fully
{
  for(int j=A0;j<=A4;j++)
{
  pinMode(j,1);
}
  for(int k=3;k<=11;k++)
  {
    
     digitalWrite(k,1);
     
  }
}
void up() //up led on and off
{

for(int l=A4;l<=A4;l++)
{
  pinMode(A2,1);
pinMode(A0,0);
pinMode(l,0);
{
for(int i=3;i<=11;i++)
{
  
  digitalWrite(i,1);
  delay(200);
  
}
for(int i=3;i<=11;i++)
{
digitalWrite(i,0);
delay(300);
}
}
} 
}


void mid() //mid led on and off
{

for(int l=A4;l<=A4;l++)
{
  pinMode(A2,0);
pinMode(A0,1);
pinMode(l,0);
{
for(int i=3;i<=11;i++)
{
  
  digitalWrite(i,1);
  delay(200);
  
}
for(int i=3;i<=11;i++)
{
digitalWrite(i,0);
delay(300);
}
}
} 
}


void bot() //bot led on and off
{

for(int l=A4;l<=A4;l++)
{
  pinMode(A2,0);
pinMode(A0,0);
pinMode(l,1);
{
for(int i=3;i<=11;i++)
{
  
  digitalWrite(i,1);
  delay(200);
  
}
for(int i=3;i<=11;i++)
{
digitalWrite(i,0);
delay(300);
}
}
} 
}



void revbot() //reverse bot led on and off
{

for(int m=A4;m<=A4;m++)
{
  pinMode(A2,0);
pinMode(A0,0);
pinMode(m,1);
{
for(int a=11;a>=3;a--)
{
  
  digitalWrite(a,1);
  delay(200);
  
}
for(int a=11;a>=3;a--)
{
digitalWrite(a,0);
delay(300);
}
}
} 
}


void revmid() //reverse mid led on and off
{

for(int m=A4;m<=A4;m++)
{
  pinMode(A2,0);
pinMode(A0,1);
pinMode(m,0);
{
for(int a=11;a>=3;a--)
{
  
  digitalWrite(a,1);
  delay(200);
  
}
for(int a=11;a>=3;a--)
{
digitalWrite(a,0);
delay(300);
}
}
} 
}

void revtop() //reverse top led on and off
{

for(int m=A4;m<=A4;m++)
{
  pinMode(A2,1);
pinMode(A0,0);
pinMode(m,0);
{
for(int a=11;a>=3;a--)
{
  
  digitalWrite(a,1);
  delay(200);
  
}
for(int a=11;a>=3;a--)
{
digitalWrite(a,0);
delay(300);
}
}
} 
}

void upsideon()
{
  
  pinMode(A2,1);
pinMode(A0,1);
pinMode(A4,1);
  digitalWrite(11,1);
 delay(dance);
   digitalWrite(9,1); 
   delay(dance);
    digitalWrite(5,1);
    delay(dance);
     digitalWrite(3,1);
     delay(dance);
}


void upsideoff()
{
  
  pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);
  digitalWrite(11,0);
 delay(dance);
   digitalWrite(9,0); 
   delay(dance);
    digitalWrite(5,0);
    delay(dance);
     digitalWrite(3,0);
     delay(dance);
}


void roundon()
{

pinMode(A2,1);
pinMode(A0,1);
pinMode(A4,1);
  digitalWrite(9,1);
 delay(dance1);
  digitalWrite(10,1);
 delay(dance1);
   digitalWrite(11,1); 
   delay(dance1);
    digitalWrite(8,1);
 delay(dance1);
    digitalWrite(5,1);
 delay(dance1);
    digitalWrite(4,1);
    delay(dance1);
     digitalWrite(3,1);
 delay(dance1);
     digitalWrite(6,1);
     delay(dance1);
  
}


void roundoff()
{

pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);
  digitalWrite(9,0);
 delay(0);
  digitalWrite(10,0);
 delay(0);
   digitalWrite(11,0); 
   delay(0);
    digitalWrite(8,0);
 delay(0);
    digitalWrite(5,0);
 delay(0);
    digitalWrite(4,0);
    delay(0);
     digitalWrite(3,0);
 delay(0);
     digitalWrite(6,0);
     delay(0);
  
}



void fulloff()
{

pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);
  for(int i=3;i<=11;i++)
  {
    digitalWrite(i,0);
    delay(1000);
  }
  
}

void upcircleon()
{
    pinMode(A2,1);
pinMode(A0,0);
pinMode(A4,0);

 delay(100);
  digitalWrite(10,1);
  delay(100);
 digitalWrite(8,1);
 delay(100);
 digitalWrite(6,1);
 delay(100);
 digitalWrite(4,1);
 delay(100);
}

void upcircleoff()
{
    pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);


  digitalWrite(10,0);
  delay(10);
 digitalWrite(8,0);
 delay(10);
 digitalWrite(6,0);
 delay(10);
 digitalWrite(4,0);
 
}


void midcircleon()
{
  pinMode(A0,1);
    pinMode(A2,0);
pinMode(A4,0);

 delay(100);
  digitalWrite(10,1);
  delay(100);
 digitalWrite(8,1);
 delay(100);
 digitalWrite(6,1);
 delay(100);
 digitalWrite(4,1);
 delay(100);
}

void midcircleoff()
{
    pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);


  digitalWrite(10,0);
  delay(10);
 digitalWrite(8,0);
 delay(10);
 digitalWrite(6,0);
 delay(10);
 digitalWrite(4,0);
 
}



void botcircleon()
{
  pinMode(A4,1);
    pinMode(A2,0);
pinMode(A0,0);


 delay(100);
  digitalWrite(10,1);
  delay(100);
 digitalWrite(8,1);
 delay(100);
 digitalWrite(6,1);
 delay(100);
 digitalWrite(4,1);
 delay(100);
}

void botcircleoff()
{
    pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);


  digitalWrite(10,0);
  delay(100);
 digitalWrite(8,0);
 delay(100);
 digitalWrite(6,0);
 delay(100);
 digitalWrite(4,0);
 
}


void circleon()
{
    pinMode(A2,1);
pinMode(A0,1);
pinMode(A4,1);


  digitalWrite(10,1);
  delay(500);
 digitalWrite(8,1);
 delay(500);
 digitalWrite(6,1);
 delay(500);
 digitalWrite(4,1);
 
}



void circleoff()
{
    pinMode(A2,0);
pinMode(A0,0);
pinMode(A4,0);

delay(100);
  digitalWrite(10,0);
  delay(100);
 digitalWrite(8,0);
 delay(100);
 digitalWrite(6,0);
 delay(100);
 digitalWrite(4,0);
 
}
