void setup() {
          
            pinMode(2, OUTPUT);
            pinMode(3, OUTPUT);
            pinMode(4, OUTPUT);
            pinMode(5, OUTPUT);
            pinMode(6, OUTPUT);
            pinMode(8, OUTPUT);
            pinMode(0, INPUT);
            Serial.begin(9600);
     
}

void loop() {

Serial.println(analogRead(0));

             if(analogRead(0) < 100) {
                              digitalWrite(2, LOW);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
              
              }
     
              if(analogRead(0) > 150 ) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             if(analogRead(0) > 300) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             if(analogRead(0) > 450) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             if(analogRead(0) > 600) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             if(analogRead(0) > 750) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, LOW);
    
      }             if(analogRead(0) > 900) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);
    
      }

             if(analogRead(0)  > 1015) {

                              digitalWrite(8, LOW);

                              delay(250);
                              
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);

                               delay(250);
    
     }





}
