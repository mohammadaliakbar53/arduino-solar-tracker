#include <Servo.h>

Servo solarServo;

#define LDR_LEFT  A0
#define LDR_RIGHT A1
#define SERVO_PIN 10

int servoPosition = 90;

// Increase this if the servo jitters
int tolerance = 30;

void setup() {
  Serial.begin(9600);

  solarServo.attach(SERVO_PIN);

  // Start at the center
  solarServo.write(servoPosition);

  delay(1000);
}

void loop() {

  // Read LDRs
  int leftLight = analogRead(LDR_LEFT);
  int rightLight = analogRead(LDR_RIGHT);

  // Calculate difference
  int difference = leftLight - rightLight;

  // Display readings
  Serial.print("Left/A0: ");
  Serial.print(leftLight);

  Serial.print("   Right/A1: ");
  Serial.print(rightLight);

  Serial.print("   Difference: ");
  Serial.println(difference);

  // Left LDR receives more light
  if (difference > tolerance) {
    servoPosition++;
  }

  // Right LDR receives more light
  else if (difference < -tolerance) {
    servoPosition--;
  }

  // Prevent servo from going beyond its limits
  servoPosition = constrain(servoPosition, 0, 180);

  // Move servo
  solarServo.write(servoPosition);

  // Small delay = smoother movement
  delay(30);
}
