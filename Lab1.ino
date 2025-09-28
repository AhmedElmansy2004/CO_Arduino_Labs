// First arduino Lab for CO subject

//Global Variables
const int time_unit = 500;
int input_pin = 7;

//functions that generate the morse code
void gen_mrs_stp(){
  digitalWrite(input_pin, LOW);
  delay(time_unit);
}

void gen_mrs_dot(){
  digitalWrite(input_pin, HIGH);
  delay(time_unit);
}

void gen_mrs_dash(){
  digitalWrite(input_pin, HIGH);
  delay(3 * time_unit);
}

void gen_mrs_shrt_stp(){
  digitalWrite(input_pin, LOW);
  delay(3 * time_unit);
}

void gen_mrs_long_stp(){
  digitalWrite(input_pin, LOW);
  delay(7 * time_unit);
}

void generate_mrs_S(){
  gen_mrs_dot();
  gen_mrs_stp();
  gen_mrs_dot();
  gen_mrs_stp();
  gen_mrs_dot();
}

void generate_mrs_O(){
  gen_mrs_dash();
  gen_mrs_stp();
  gen_mrs_dash();
  gen_mrs_stp();
  gen_mrs_dash();
}

//arduino setup function
void setup()
{
  pinMode(input_pin, OUTPUT);
}

//arduino main loop
void loop()
{
  generate_mrs_S();
  gen_mrs_shrt_stp();
  
  generate_mrs_O();
  gen_mrs_shrt_stp();
  
  generate_mrs_S();
  
  gen_mrs_long_stp();
}