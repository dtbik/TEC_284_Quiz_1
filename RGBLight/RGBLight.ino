// TEC 284 Quiz 1
// Dane Bik
// September 25, 2025
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
  // Check if any button is pressed, then lights up the LED associated with each button and print out the color
  if (digitalRead(5) == LOW && digitalRead(6) == HIGH && digitalRead(7) == HIGH) {
    Serial.println("The light is blue!");
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (digitalRead(5) == HIGH && digitalRead(6) == LOW && digitalRead(7) == HIGH) {
    Serial.println("The light is red!");
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else if (digitalRead(5) == HIGH && digitalRead(6) == HIGH && digitalRead(7) == LOW) {
    Serial.println("The light is green!");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == HIGH) {
    Serial.println("The light is purple!");
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else if (digitalRead(5) == HIGH && digitalRead(6) == LOW && digitalRead(7) == LOW) {
    Serial.println("The light is yellow!");
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  else if (digitalRead(5) == LOW && digitalRead(6) == HIGH && digitalRead(7) == LOW) {
    Serial.println("The light is cyan!");
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW) {
    Serial.println("The light is white!");
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
}
