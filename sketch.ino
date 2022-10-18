#define LED 2 // LED on pin 
#define BUTTON 5 // Button on pin 5
#define POT A0 // Potentiometer on pin A0

void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(POT, INPUT);

  // Turn on the LED
  digitalWrite(LED, HIGH);



  // Start the serial monitor for printing
  // 9600 baud rate (speed) is sufficient
  Serial.begin(9600);
}


void loop() {
  int potStatus = analogRead(POT);


  digitalWrite(2, HIGH);
  delay(potStatus);
  digitalWrite(2, LOW);
  delay(potStatus);

  
  Serial.print("Number of blinks:");
  Serial.println(potStatus);
}
