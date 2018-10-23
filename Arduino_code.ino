int D0=6;
int D1=9;
int D2=10;
int D3=11;

int VAInput=A0;
int VBInput=A1;
int VCInput=A2;
int VDInput=A3;

float diff=0.5;

int bA=0;
int bB=0;
int bC=0;
int bD=0;

int cA=0;
int cB=0;
int cC=0;
int cD=0;

float VA=0.0;
float VA0=0.0;
float VB=0.0;
float VB0=0.0;
float VC=0.0;
float VC0=0.0;
float VD=0.0;
float VD0=0.0;

float lst[4];
float lst1[4];
float lst2[4];
float lst3[4];
float lst4[4];

float p;

float maxValue(float lst[]){
  float p;
  p=lst[0];
  for (int i=0;i<4;i++){ 
  if (lst[i]>p){
    p=lst[i];
    }
  }
  return p;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);
  pinMode(VAInput,INPUT);
  pinMode(VBInput,INPUT);
  pinMode(VCInput,INPUT);
  pinMode(VDInput,INPUT);

  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while (true){
    VA0=(5.0/1023.0)*analogRead(VAInput);
    delay(1000);
    VA=(5.0/1023.0)*analogRead(VAInput);
    bA=bA+1;
    if(bA>30){
      break;}
    if(VA-VA0>diff){ //|| VA0-VA>diff){
      cA=cA+1;}
    Serial.print("VA:");
    Serial.println(VA0);
    
    Serial.print("bA:");
    Serial.println(bA);
    Serial.print("cA:");
    Serial.println(cA);
    }

  while (true){
    VB0=(5.0/1023.0)*analogRead(VBInput);
    delay(1000);
    VB=(5.0/1023.0)*analogRead(VBInput);
    bB=bB+1;
    if(bB>30){
      break;}
    if(VB-VB0>diff){ //|| VB0-VB>diff){
      cB=cB+1;}
    Serial.print("VB:");
    Serial.println(VB0);
    
    Serial.print("bB:");
    Serial.println(bB);
    Serial.print("cB:");
    Serial.println(cB);
    
    }
  while (true){
    VC0=(5.0/1023.0)*analogRead(VCInput);
    delay(1000);
    VC=(5.0/1023.0)*analogRead(VCInput);
    bC=bC+1;
    if(bC>30){
      break;}
    if(VC-VC0>diff){ //|| VB0-VB>diff){
      cC=cC+1;}
    Serial.print("VC:");
    Serial.println(VC0);
    
    Serial.print("bC:");
    Serial.println(bC);
    Serial.print("cC:");
    Serial.println(cC);
    
    }
 while (true){
    VD0=(5.0/1023.0)*analogRead(VDInput);
    delay(1000);
    VD=(5.0/1023.0)*analogRead(VDInput);
    bD=bD+1;
    if(bD>30){
      break;}
    if(VD-VD0>diff){ //|| VB0-VB>diff){
      cD=cD+1;}
    Serial.print("VD:");
    Serial.println(VD0);
    
    Serial.print("bD:");
    Serial.println(bD);
    Serial.print("cD:");
    Serial.println(cD);
    
    }

float lst[]={cA,cB,cC,cD};

for (int i=0;i<4;i++){
  Serial.print(lst[0]);
  Serial.print(",");
  Serial.print(lst[1]);
  Serial.print(",");
  Serial.print(lst[2]);
  Serial.print(",");
  Serial.println(lst[3]);
  }
p=maxValue(lst);

if(p==cA){
  digitalWrite(D0,HIGH);
  delay(5000*cA);
  digitalWrite(D0,LOW);
  for(int i=0;i<4;i++){
    if(lst[i]!=p){
      lst1[i]=lst[i];
      }
    else{lst1[i]=0.0;}
    }
   };
if(p==cB){
  digitalWrite(D1,HIGH);
  delay(5000*cB);
  digitalWrite(D1,LOW);
  for(int i=0;i<4;i++){
    if(lst[i]!=p){
      lst1[i]=lst[i];
      }
    else{lst1[i]=0.0;}
    }
   };
if(p==cC){
  digitalWrite(D2,HIGH);
  delay(5000*cC);
  digitalWrite(D2,LOW);
  for(int i=0;i<4;i++){
    if(lst[i]!=p){
      lst1[i]=lst[i];
      }
    else{lst1[i]=0.0;}
    }
   };  
if(p==cD){
  digitalWrite(D3,HIGH);
  delay(5000*cD);
  digitalWrite(D3,LOW);
  for(int i=0;i<4;i++){
    if(lst[i]!=p){
      lst1[i]=lst[i];
      }
    else{lst1[i]=0.0;}
    }
   };

for (int i=0;i<4;i++){
  Serial.print(lst1[0]);
  Serial.print(",");
  Serial.print(lst1[1]);
  Serial.print(",");
  Serial.print(lst1[2]);
  Serial.print(",");
  Serial.println(lst1[3]);
  }
p=maxValue(lst1);

if(p==cA){
  digitalWrite(D0,HIGH);
  delay(5000*cA);
  digitalWrite(D0,LOW);
  for(int i=0;i<4;i++){
    if(lst1[i]!=p){
      lst2[i]=lst1[i];
      }
    else{lst2[i]=0.0;}
    }
   };
if(p==cB){
  digitalWrite(D1,HIGH);
  delay(5000*cB);
  digitalWrite(D1,LOW);
  for(int i=0;i<4;i++){
    if(lst1[i]!=p){
      lst2[i]=lst1[i];
      }
    else{lst2[i]=0.0;}
    }
   };
if(p==cC){
  digitalWrite(D2,HIGH);
  delay(5000*cC);
  digitalWrite(D2,LOW);
  for(int i=0;i<4;i++){
    if(lst1[i]!=p){
      lst2[i]=lst1[i];
      }
    else{lst2[i]=0.0;}
    }
   };  
if(p==cD){
  digitalWrite(D3,HIGH);
  delay(5000*cD);
  digitalWrite(D3,LOW);
  for(int i=0;i<4;i++){
    if(lst1[i]!=p){
      lst2[i]=lst1[i];
      }
    else{lst2[i]=0.0;}
    }
   };

for (int i=0;i<4;i++){
  Serial.print(lst2[0]);
  Serial.print(",");
  Serial.print(lst2[1]);
  Serial.print(",");
  Serial.print(lst2[2]);
  Serial.print(",");
  Serial.println(lst2[3]);
  }
p=maxValue(lst2);

if(p==cA){
  digitalWrite(D0,HIGH);
  delay(5000*cA);
  digitalWrite(D0,LOW);
  for(int i=0;i<4;i++){
    if(lst2[i]!=p){
      lst3[i]=lst2[i];
      }
    else{lst3[i]=0.0;}
    }
   };
if(p==cB){
  digitalWrite(D1,HIGH);
  delay(5000*cB);
  digitalWrite(D1,LOW);
  for(int i=0;i<4;i++){
    if(lst2[i]!=p){
      lst3[i]=lst2[i];
      }
    else{lst3[i]=0.0;}
    }
   };
if(p==cC){
  digitalWrite(D2,HIGH);
  delay(5000*cC);
  digitalWrite(D2,LOW);
  for(int i=0;i<4;i++){
    if(lst2[i]!=p){
      lst3[i]=lst2[i];
      }
    else{lst3[i]=0.0;}
    }
   };  
if(p==cD){
  digitalWrite(D3,HIGH);
  delay(5000*cD);
  digitalWrite(D3,LOW);
  for(int i=0;i<4;i++){
    if(lst2[i]!=p){
      lst3[i]=lst2[i];
      }
    else{lst3[i]=0.0;}
    }
   };

for (int i=0;i<4;i++){
  Serial.print(lst3[0]);
  Serial.print(",");
  Serial.print(lst3[1]);
  Serial.print(",");
  Serial.print(lst3[2]);
  Serial.print(",");
  Serial.println(lst3[3]);
  }
p=maxValue(lst3);

if(p==cA){
  digitalWrite(D0,HIGH);
  delay(5000*cA);
  digitalWrite(D0,LOW);
  for(int i=0;i<4;i++){
    if(lst3[i]!=p){
      lst4[i]=lst3[i];
      }
    else{lst4[i]=0.0;}
    }
   };
if(p==cB){
  digitalWrite(D1,HIGH);
  delay(5000*cB);
  digitalWrite(D1,LOW);
  for(int i=0;i<4;i++){
    if(lst3[i]!=p){
      lst4[i]=lst3[i];
      }
    else{lst4[i]=0.0;}
    }
   };
if(p==cC){
  digitalWrite(D2,HIGH);
  delay(5000*cC);
  digitalWrite(D2,LOW);
  for(int i=0;i<4;i++){
    if(lst3[i]!=p){
      lst4[i]=lst3[i];
      }
    else{lst4[i]=0.0;}
    }
   };  
if(p==cD){
  digitalWrite(D3,HIGH);
  delay(5000*cD);
  digitalWrite(D3,LOW);
  for(int i=0;i<4;i++){
    if(lst3[i]!=p){
      lst4[i]=lst3[i];
      }
    else{lst4[i]=0.0;}
    }
   };

for (int i=0;i<4;i++){
  Serial.print(lst4[0]);
  Serial.print(",");
  Serial.print(lst4[1]);
  Serial.print(",");
  Serial.print(lst4[2]);
  Serial.print(",");
  Serial.println(lst4[3]);
  }

Serial.println("Press any button to continue..");
while(Serial.available()==0){}
}
