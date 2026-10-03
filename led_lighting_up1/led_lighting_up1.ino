// C++ code
//
int sleeptime = 0;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  sleeptime = 1;
  digitalWrite(12, HIGH);
  sleeptime = 1;
  digitalWrite(12, LOW);
  sleeptime = 1;
  digitalWrite(10, HIGH);
  sleeptime = 1;
  digitalWrite(10, LOW);
  sleeptime = 1;
  digitalWrite(8, HIGH);
  sleeptime = 1;
  digitalWrite(8, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}