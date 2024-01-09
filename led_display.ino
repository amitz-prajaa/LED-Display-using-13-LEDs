int L1 = 2;
int L2 = 4;
int L3 = 6;
int L4 = 8;
int L5 = 10;
int L6 = 12;
int L7 = 14;
int L8 = 16;
int L9 = 18;
int L10 =20 ;
int L11 = 22;
int L12 =24 ;
int L13 = 26;


void setup() {
  // put your setup code here, to run once:
    pinMode(L1 , OUTPUT);
    pinMode(L2 , OUTPUT);
    pinMode(L3 , OUTPUT);
    pinMode(L4 , OUTPUT);
    pinMode(L5 , OUTPUT);
    pinMode(L6 , OUTPUT);
    pinMode(L7 , OUTPUT);
    pinMode(L8 , OUTPUT);
    pinMode(L9 , OUTPUT);
    pinMode(L10 , OUTPUT);
}

void loop() {
    delay(2000);
    
    a();
    delay(500);
    b();
    delay(500);
    c();
    delay(500);
    d();
    delay(500);
    e();
    delay(500);
    f();
    delay(500);
    g();
    delay(500);
    h();
    delay(500);
    i();
    delay(500);
    zero();
    delay(500);

}

void a(){
    //  1
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 1);

  delay(2000);
   //  1
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
  
}

void b(){
//  2
   digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 1);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);

  delay(2000);
   //  2
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
  
}

void c(){
       //  3
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);

  delay(2000);

  // 3
  
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void d(){

   //  4
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,1 );
  digitalWrite(L5 , 5);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 1);
  delay(2000);

   //  4
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void e(){
   //  5
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3 , 1);
  digitalWrite(L4 , 1 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);
  delay(2000);

   //  5
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void f(){
   //  6
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3 , 1);
  digitalWrite(L4 , 1 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 1);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);
  delay(2000);
  
   //  6
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void g(){
   //  7
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 1);

  delay(2000);

   //  7
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void h(){
   // 8 
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,1 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 1);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);
  delay(2000);

   //  8
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}
void i(){
   //  9
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,1 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 1);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);
  delay(2000);

   //  9
  digitalWrite(L1 , 0);
  digitalWrite(L2 , 0);
  digitalWrite(L3, 0);
  digitalWrite(L4 ,0 );
  digitalWrite(L5 , 0);
  digitalWrite(L6 , 0);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 0);
  digitalWrite(L9 , 0);
  digitalWrite(L10 , 0);
  digitalWrite(L11 , 0);
  digitalWrite(L12 , 0);
  digitalWrite(L13 , 0);
  delay(500);
}

void zero(){
   //  0
  digitalWrite(L1 , 1);
  digitalWrite(L2 , 1);
  digitalWrite(L3, 1);
  digitalWrite(L4 ,1 );
  digitalWrite(L5 , 1);
  digitalWrite(L6 , 1);
  digitalWrite(L7 , 0);
  digitalWrite(L8 , 1);
  digitalWrite(L9 , 1);
  digitalWrite(L10 , 1);
  digitalWrite(L11 , 1);
  digitalWrite(L12 , 1);
  digitalWrite(L13 , 1);
}
