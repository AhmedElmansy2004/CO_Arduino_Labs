int x = 0, y;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  y = sin(x);
  x++;

  Serial.println(y);

  delay(10);
}