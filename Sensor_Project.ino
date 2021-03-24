 #define trigPin 10
 #define echoPin 12


 float duration, distance;
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
 
}

void loop() {
   
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0343;

  Serial.print("Distance = ");
  
              if (distance >= 20 || distance <= 2) {
                 Serial.println("You are Too Far");
                 digitalWrite(LED_BUILTIN, HIGH); 
                 
                 
                 
              }
                      else {
           
            Serial.print(distance);
            Serial.println(" cm");
            delay(500);
            digitalWrite(LED_BUILTIN, LOW); 
          }

}
