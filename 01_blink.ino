int led_red = 		0;
int led_yellow = 	1;
int led_green =		2;

void setup() {
	// Setup all the LEDs as OUTPUT
	pinMode(led_red, 	OUTPUT);
	pinMode(led_yellow, OUTPUT);
	pinMode(led_green,	OUTPUT);
}

void loop() {
	// Turn the green LED on and the other LEDs off
	digitalWrite(led_red, 		LOW);
	digitalWrite(led_yellow, 	LOW);
	digitalWrite(led_green, 	HIGH);
	delay(2000);

	// Turn the yellow LED on and the other LEDs off
	digitalWrite(led_red,		LOW);
	digitalWrite(led_yellow, 	HIGH);
	digitalWrite(led_green, 	LOW);
	delay(1000);

	// Turn the red LED on and the other LEDs off
	digitalWrite(led_red,		HIGH);
	digitalWrite(led_yellow, 	LOW);
	digitalWrite(led_green, 	LOW);
	delay(3000);
}