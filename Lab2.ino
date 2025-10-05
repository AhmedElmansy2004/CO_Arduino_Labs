// C++ code

//pin Variables
int green_pin = 8;
int red_pin = 7;
int button_pin = 2;

boolean green_state;

boolean debounce(int pin) {
    boolean state;
    boolean previous_state;
    previous_state = digitalRead(pin);
    for(int i = 0; i < 10; i++) {
        delay(1);
        state = digitalRead(pin);
        if(state != previous_state){
            i = 0;
            previous_state = state;
        }
    }
    return state;
}

void setup()
{
  Serial.begin(9600);
  
  pinMode(green_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
}

void loop()
{
  digitalWrite(green_pin, green_state);
  digitalWrite(red_pin, !green_state);
  
  if(!debounce(button_pin)) {
    green_state = !green_state;
  }
  
}