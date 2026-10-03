// C++ code
//
int sleeptime = 1000;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  
  digitalWrite(12, HIGH);
 delay (sleeptime );
  digitalWrite(12, LOW);
  delay (sleeptime );
  digitalWrite(10, HIGH);
  delay (sleeptime) ;
  digitalWrite(10, LOW);
  delay (sleeptime) ;
  digitalWrite(8, HIGH);
  delay (sleeptime );
  digitalWrite(8, LOW);
  delay(1000); // Delay a little bit to improve simulation performance
}