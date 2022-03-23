
/*
 * Plant Watering System
 * Weather: Upstate NY area
 * Use: Indoor plants
 * Author: TanisM
 */

int IN1 = 2;
int Pin1 = A0;
int value1 = 0;
int IN2 = 3;
int Pin2 = A1;
int value2 = 0;
int IN3 = 4;
int Pin3 = A2;
int value3 = 0;
int IN4 = 5;
int Pin4 = A3;
int value4 = 0;

// Dryness Threshold (near 700 is totally dry)
int lower = 575; // Big plants
int upper = 590; // Small plants

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(Pin1, INPUT);
  digitalWrite(IN1, HIGH); // OFF
  pinMode(IN2, OUTPUT);
  pinMode(Pin2, INPUT);
  digitalWrite(IN2, HIGH); // OFF
  pinMode(IN3, OUTPUT);
  pinMode(Pin3, INPUT);
  digitalWrite(IN3, HIGH); // OFF
  pinMode(IN4, OUTPUT);
  pinMode(Pin4, INPUT);
  digitalWrite(IN4, HIGH); // OFF
  delay(500);
}
void loop() { 
  Serial.println("H U M I D I T Y   L E V E L S:");
  Serial.print("Romina: "); 
  value1 = (analogRead(Pin1));
  if(value1 >= lower) {
    Serial.println(lower - value1);
    digitalWrite(IN1, LOW); // ON
  } else {
    Serial.println(lower - value1);
    digitalWrite(IN1, HIGH); // OFF 
  }
  delay(500);
  Serial.print("Romero: "); 
  value2 = (analogRead(Pin2));
  if(value2 >= upper) {
    Serial.println(upper - value2);
    digitalWrite(IN2, LOW); // ON
  } else {
    Serial.println(upper - value2);
    digitalWrite(IN2, HIGH); // OFF 
  }
  delay(500);
  Serial.print("Savvy: "); 
  value3 = (analogRead(Pin3));
  if(value3 >= upper) {
    Serial.println(upper - value3);
    digitalWrite(IN3, LOW); // ON
  } else {
    Serial.println(upper - value3);
    digitalWrite(IN3, HIGH); // OFF 
  }
  delay(500);
  Serial.print("Romina's Daughter: "); 
  value4 = (analogRead(Pin4));
  if(value4 >= lower) {
    Serial.println(lower - value4);
    digitalWrite(IN4, LOW); // ON
  } else {
    Serial.println(lower - value4);
    digitalWrite(IN4, HIGH); // OFF 
  }
  delay(500);
  Serial.println("--------------------------------------------");
}
