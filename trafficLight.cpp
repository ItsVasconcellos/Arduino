// C++ code
// basco bocó
int ledVerde1 = 2, ledVerde2 = 7, ledAmarelo1 = 3, ledAmarelo2 = 6, ledVermelho1 = 4, ledVermelho2 = 5; 
int ledGroup1[3] = {ledVerde1,ledAmarelo1,ledVermelho1};
int ledGroup2[3] = {ledVermelho2,ledAmarelo2,ledVerde2};
int status = 0;
void setup()
{
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
}

void loop()
{
  group1();
  group2();
}

void group1()
{
  status = 1;
  acenderLed(status);
}

void group2(){
  status = 2;
  acenderLed(status);
}

void acenderLed(int status){
  if(status == 1){
    for(int i = 0; i < 3; i ++){
      if(i == 0){
    	digitalWrite(ledGroup1[i],HIGH);
      	digitalWrite(ledGroup2[i],HIGH);
        delay(7000);}
      else if(i == 1){ digitalWrite(ledGroup1[i-1],LOW);
                      digitalWrite(ledGroup1[i],HIGH);
                      delay(3000);
    	}
      else if(i == 2){ digitalWrite(ledGroup1[i-1],LOW);
                      digitalWrite(ledGroup2[i-2],LOW);
                      digitalWrite(ledGroup1[i],HIGH);
                      digitalWrite(ledGroup2[i],HIGH);
  		}
    }
  }
  else if(status == 2){
  	for(int i = 2; i >= 0 ; i --){
      if(i == 2){
    	digitalWrite(ledGroup2[i],HIGH);
        digitalWrite(ledGroup1[i],HIGH);
        delay(7000);}
      else if(i == 1){ digitalWrite(ledGroup2[i+1],LOW);
                      digitalWrite(ledGroup2[i],HIGH);
                      delay(3000);
    	}
      else if(i == 0){ digitalWrite(ledGroup2[i+1],LOW);
                      digitalWrite(ledGroup1[i+2],LOW);
                      digitalWrite(ledGroup2[i],HIGH);
                      digitalWrite(ledGroup1[i],HIGH);}
    }	
  }
}
 