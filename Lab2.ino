//pin Variables
int green_pin = 8;
int red_pin = 7;
int button_pin = 2;

//state of the LEDs
boolean green_state;

//Debounce fix code
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

//setup for pins and their modes
void setup() {
  pinMode(green_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
}

//main program loop
void loop() {
  digitalWrite(green_pin, green_state);
  digitalWrite(red_pin, !green_state);
  
  if(!debounce(button_pin)) {
    green_state = !green_state;
  }
  
}