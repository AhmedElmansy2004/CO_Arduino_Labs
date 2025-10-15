int x, y;
int idx;
char inputstr[4];
  
int getNumber();

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Enter the first number: ");
  x = getNumber();
  Serial.println(x);

  Serial.println("Enter the second number: ");
  y = getNumber();
  Serial.println(y);

  Serial.println("The result is: ");
  Serial.println(x+y);
}

int getNumber(){

  idx = 0;
  while(idx < 4){
    if(Serial.available()){
        char ch = Serial.read();
        inputstr[idx++] = ch;
    }
  }
  return atoi(inputstr);

}