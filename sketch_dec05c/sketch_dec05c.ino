#include <StopWatch.h>

#define threshold 250

StopWatch sw;
int s1=0,s2=0,s3=0,s4=0,s5=0;
float t2,t3,t4,t5;
float t6,t7,t8,t9,t10;
boolean vemvai = false;

void setup(){
  Serial.begin(115200);
}

void loop(){
  if((analogRead(A0) < threshold) && (s1 == 0)){
    s1 = 1;
    sw.start();
  }
  if((analogRead(A1) < threshold) && (s2 == 0)){
    t2 = sw.elapsed();
    s2 = 1;
  }
  if((analogRead(A2) < threshold) && (s3 == 0)){
    t3 = sw.elapsed();
    s3 = 1;
  }
  if((analogRead(A3) < threshold) && (s4 == 0)){
    t4 = sw.elapsed();
    s4 = 1;
  }
  if((analogRead(A4) < threshold) && (s5 == 0)){
    t5 = sw.elapsed();
    s5 = 1;
    //Serial.println("1");
    vemvai = true;
  }
  /*if(vemvai == true){
    if((analogRead(A4) < threshold) && (s5 == 1)){
      t6 = sw.elapsed();
      s5 = 2;
    }
    if((analogRead(A3) < threshold) && (s4 == 1)){
      t7 = sw.elapsed();
      s4 = 2;
    }
    if((analogRead(A2) < threshold) && (s3 == 1)){
      t8 = sw.elapsed();
      s3 = 2;
    }
    if((analogRead(A1) < threshold) && (s2 == 1)){
      t9 = sw.elapsed();
      s2 = 2;
    }
    if((analogRead(A0) < threshold) && (s1 == 1)){
      s1 = 2;
      t10 = sw.elapsed();
      sw.stop();
      Serial.println("2");
    }
  }*/
  if((s1 == 1) && (s2 == 1) && (s3 == 1) && (s4 == 1) && (s5 == 1)){
    Serial.print("t2: ");
    Serial.println(t2);
    Serial.print("t3: ");
    Serial.println(t3-t2);
    Serial.print("t4: ");
    Serial.println(t4-t3);
    Serial.print("t5: ");
    Serial.println(t5-t4);
    /*Serial.print("t6: ");
    Serial.println(t6-t5);
    Serial.print("t7: ");
    Serial.println(t7-t6);
    Serial.print("t8: ");
    Serial.println(t8-t7);
    Serial.print("t9: ");
    Serial.println(t9-t8);
    Serial.print("t10: ");
    Serial.println(t10-t9);*/
    while(true)
    ;
  }
}
