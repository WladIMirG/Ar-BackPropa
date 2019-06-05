//float w1[] = {random(1), random(1), random(1),
//              random(1), random(1), random(1),
//              random(1), random(1), random(1)};
//float w2[] = {random(1), random(1), random(1),
//              random(1), random(1), random(1),
//              random(1), random(1), random(1)};
//float w3[] = {random(1), random(1), random(1),
//              random(1), random(1), random(1),
//              random(1), random(1), random(1)};
float w[] = {random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1),
              random(1), random(1), random(1)};
// float w[] = {w1, w2, w3};
float n = 0.007;
float cn = 0;
int cepoc = 0;
float ecg = 1;
float in[] = {0.1, 0.6};
float z[] = {0};
// float w2[] = {random(3), random(3), random(3)};
// float w3[] = {random(3), random(3), random(3)};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  leer();
  //neuronaOut();
  if (ecg > 1*10^-15){
    for (int i=0; i<i; i=i+1){
      float y = neuronaOut(w, in[i]);
      float d = delta();
      float w = actuapesos();
      ec(i) = ((d(7)^2) + (d(8)^2))*0.5;
    }
  }
}

void leer() {
  
}
