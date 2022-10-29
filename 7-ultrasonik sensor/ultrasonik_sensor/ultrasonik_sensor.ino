int buzzer = 9;
int trigPin = 13; 
int echoPin = 12;  
 
long zaman;
long mesafe;
 
void setup(){
   Serial.begin(9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin,INPUT); 
  pinMode(buzzer, OUTPUT); 
 
}
void loop()
{
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  zaman = pulseIn(echoPin, HIGH);//echoPin HIGH olana kadar geçen zamanı hesapla
  mesafe= (zaman /29.1)/2;    
  Serial.print("Mesafe ");  
  Serial.print(mesafe);
  Serial.println(" cm");  

if(mesafe<30){
  
  analogWrite(buzzer,10);
  }
  else{
    digitalWrite(buzzer,LOW);
    
    }
 
   
}
