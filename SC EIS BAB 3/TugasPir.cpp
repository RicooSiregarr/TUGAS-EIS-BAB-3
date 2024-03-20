
const int pirPin = 7;     
const int ledPinGreen = 13;  
const int ledPinRed = 3;    
const int buzzerPin = 2;    
 
void setup() {   
    pinMode(pirPin, INPUT);     
    pinMode(ledPinGreen, OUTPUT);    
    pinMode(ledPinRed, OUTPUT);     
     pinMode(buzzerPin, OUTPUT);    
  Serial.begin(9600);           
} 
 
void loop() { 
  int pirState = digitalRead(pirPin);  
 
  if (pirState == HIGH) {  
        digitalWrite(ledPinGreen, HIGH);   
           digitalWrite(ledPinRed, LOW);    
                tone(buzzerPin, HIGH);   
    Serial.println("Gerakan terdeteksi!"); 
         delay(1500); 
            } else { 

    digitalWrite(ledPinGreen, LOW); 
    
          digitalWrite(ledPinRed, HIGH);   
               noTone(buzzerPin);  
    Serial.println("Gerakan tidak terdeteksi");  
        delay(1500);  
  } 
} 

