//void setup() {
  // put your setup code here, to run once:
int led_pin1 = 13;
int led_pin2 = 12;
int blink_duration1 = 100;

void setup()
{}

void loop() {
  digitalWrite (led_pin1,HIGH);
  delay (blink_duration1);
  digitalWrite (led_pin1,LOW);
  delay (blink_duration1);
 
  digitalWrite (led_pin2,HIGH);
  delay (blink_duration1);
  digitalWrite (led_pin2,LOW);
  delay (blink_duration1);// put your main code here, to run repeatedly:

}
