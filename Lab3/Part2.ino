/*
@ x: the independant variable input for the function
@ y: the dependant variable output for the function
*/
int x = 0, y;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  y = sin(x);
  x += 0.1;

  Serial.println(y);

  delay(10);
}