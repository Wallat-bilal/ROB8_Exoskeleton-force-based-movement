uint8_t pin;
bool first;

void pulse(float period, bool toHigh = true);
void setStable(bool toHigh);
void setPulse(bool toHigh);

void setup() {
  Serial.begin(9600);
  pin = 13;
  pinMode(pin, OUTPUT);
  first = true;
}

void loop() {
  if (first) {
    Serial.println("Ready");
    first = false;
  }
  if (Serial.available() > 0) {
    String line = Serial.readString();
    if (line == "Pulse\n") {
      pulse(.1);
    }
  }
}

void pulse(float period, bool toHigh) {
  period *= 1000;
  setStable(toHigh);
  setPulse(toHigh);
  Serial.println("Start");
  delay(period);
  setStable(toHigh);
  Serial.println("End\n");
}

void setStable(bool toHigh) {
  if (toHigh) {
    digitalWrite(pin, LOW);
  } else {
    digitalWrite(pin, HIGH);
  }
}

void setPulse(bool toHigh) {
  if (toHigh) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

