int buttonState = 0;

int lastButtonState = 0;

int buttonPushCounter = 0;

int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int LED4 = 6;
int LED5 = 7;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
}

void loop()
{
  
  buttonState = digitalRead(2);
 
  if (buttonState != lastButtonState) {
   
    if (buttonState == HIGH) {
      
      buttonPushCounter += 1;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      
      Serial.println("off");
    }
   
    delay(5); 
  }
  
  lastButtonState = buttonState;
  
  buttonPushCounter = buttonPushCounter % 6;
  
  if (buttonPushCounter == 1) {
    digitalWrite(LED1, HIGH);
    
     
   
  } else {
   
  }
  
  if (buttonPushCounter == 2) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    
  } else {
   
  }
  
  if (buttonPushCounter == 3) {
     digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    
  } else {
   
  }
  
  if (buttonPushCounter == 4) {
     digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
  } else {
    
  }
  
   if (buttonPushCounter == 5) {
    digitalWrite(LED4, LOW);
     digitalWrite(LED5, HIGH);
  } else {
 
  }
  
     if (buttonPushCounter == 6) {
    digitalWrite(LED5, LOW);
     
  } else {
    
  }
  
  
  if (buttonPushCounter == 0) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
  } 
}
