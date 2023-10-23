int pir_1 = 2;
int pir_2 = 3;
int pir_3 = 4;

int relay_1 = 5;
int relay_2 = 6;
int relay_3 = 7;

int pirState_1 = LOW; 
int pirState_2 = LOW; 
int pirState_3 = LOW; 

int val_1 = 0;  
int val_2 = 0; 
int val_3 = 0; 
 
void setup() {
  
  pinMode(relay_1, OUTPUT);  
  pinMode(relay_2, OUTPUT); 
  pinMode(relay_3, OUTPUT); 
  
  pinMode(pir_1, INPUT);  
  pinMode(pir_2, INPUT); 
  pinMode(pir_3, INPUT); 
 
  Serial.begin(9600);
}
 
void loop(){
  val_1 = digitalRead(pir_1);  
  val_2 = digitalRead(pir_2); 
  val_3 = digitalRead(pir_3); 
	
  if (val_1 == HIGH)	
  {            
    digitalWrite(relay_1, HIGH); 
	
    if (pirState_1 == LOW) 
	{
      Serial.println("Motion detected!");	
      pirState_1 = HIGH;
    }
  } 
  else 
  {
    digitalWrite(relay_1, LOW); 
	
    if (pirState_1 == HIGH)
	{
      Serial.println("Motion ended!");	
      pirState_1 = LOW;
    }
  }
  if (val_2 == HIGH)	
  {            
    digitalWrite(relay_2, HIGH); 
	
    if (pirState_2 == LOW) 
	{
      Serial.println("Motion detected!");	
      pirState_2 = HIGH;
    }
  } 
  else 
  {
    digitalWrite(relay_2, LOW); 
	
    if (pirState_2 == HIGH)
	{
      Serial.println("Motion ended!");	
      pirState_2 = LOW;
    }
  }
  if (val_3 == HIGH)	
  {            
    digitalWrite(relay_3, HIGH); 
	
    if (pirState_3 == LOW) 
	{
      Serial.println("Motion detected!");	
      pirState_3 = HIGH;
    }
  } 
  else 
  {
    digitalWrite(relay_3, LOW); 
	
    if (pirState_3 == HIGH)
	{
      Serial.println("Motion ended!");	
      pirState_3 = LOW;
    }
  }
}