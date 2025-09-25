void setup() {
  // Declare pinMode to read inputs from buttons and outputs for the LEDs, and start a Serial connection to print.
  Serial.begin(9600);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // Check if button is pressed, then light up the LED associated with the button and print out the color
  if (!digitalRead(5)) {
    Serial.println("The light is blue!");
    digitalWrite(2, HIGH);
  }
  else if (!digitalRead(6)) {
    Serial.println("The light is red!");
    digitalWrite(3, HIGH);
  }
  else if (!digitalRead(7)) {
    Serial.println("The light is green!");
    digitalWrite(4, HIGH);
  }
  // If no buttons are currently pressed, turn off all LEDs
  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
}
