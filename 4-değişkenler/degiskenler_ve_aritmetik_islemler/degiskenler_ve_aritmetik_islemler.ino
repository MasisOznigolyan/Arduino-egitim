
//değişken tanımlama
int x=11;
int z=9;
char y='A';
float pi=3.14;
bool t=true;
bool durum=false;
char kelime[]="Arduino";

void setup() {
  Serial.begin(9600);
//aritmetik işlemler
  
  Serial.println(x);
  x=x+1;   //x=12
  Serial.println(x);
  x++;    //x=13
  Serial.println(x);
  z=x*z;  //z=13*9=117
  Serial.println(z);
  z--;    //z=116
  Serial.println(z);

  int yaricap=7;
  float cevre;
  float alan;

  alan=pi*yaricap*yaricap;
  Serial.println(alan);
  cevre=2*pi*yaricap;
  Serial.println(cevre);


}

void loop() {

  
}
