#define led1_pin 2
#define led2_pin 3

void setup() {
    pinMode(led1_pin, OUTPUT);
    pinMode(led2_pin, OUTPUT);
}

void loop() {
    digitalWrite(led1_pin, HIGH);
    digitalWrite(led2_pin, LOW);
    delay(500);
    digitalWrite(led1_pin, LOW);
    digitalWrite(led2_pin, HIGH);
    delay(500);
}
