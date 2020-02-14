/*
 For this project, I was inspired by led lighter of different colors.
 So I want to mimic the traffic light.
 And the flashing of the traffic lights is characteristic. 
 When each light is about to end, 
 it will begin to flash until the next color is lit
 */
 
int led1 = 13;
int led2 = 8;
int led3 = 4;
const int ldr0 = A0;

void setup() {     
 Serial.begin(9600);
  pinMode(led1, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldr0, INPUT);   //initialize the LDR pin as an input
  
  pinMode(13, OUTPUT); 
    pinMode(8, OUTPUT);  
    pinMode(4, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);
  delay(2000);   
  digitalWrite(led1, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  delay(300); 
  digitalWrite(led1, LOW);
  delay(300); 
  digitalWrite(led1, HIGH);
  delay(300); 
  digitalWrite(led1, LOW);
  delay(300); 
  digitalWrite(led1, HIGH);
  delay(300); 
  digitalWrite(led1, LOW);
  delay(300); 

                

 digitalWrite(led2, HIGH);
  delay(2000);   
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led2, HIGH);
  delay(300); 
  digitalWrite(led2, LOW);
  delay(300); 
  digitalWrite(led2, HIGH);
  delay(300); 
  digitalWrite(led2, LOW);
  delay(300); 
  digitalWrite(led2, HIGH);
  delay(300); 
  digitalWrite(led2, LOW);
  delay(300);               

  digitalWrite(led3, HIGH);
  delay(2000);   
  digitalWrite(led3, LOW);
  delay(1000);
  
  digitalWrite(led3, HIGH);
  delay(300); 
  digitalWrite(led3, LOW);
  delay(300); 
  digitalWrite(led3, HIGH);
  delay(300); 
  digitalWrite(led3, LOW);
  delay(300); 
  digitalWrite(led3, HIGH);
  delay(300); 
  digitalWrite(led3, LOW);
  delay(300);   
}


  int ldrStatus = analogRead(ldr0);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=300) {

    digitalWrite(led1, HIGH);               //turn LED on
    Serial.println("LDR is DARK, LED is ON");
    
   }
  else {

    digitalWrite(led1, LOW);          //turn LED off
    Serial.println("---------------");
  }
