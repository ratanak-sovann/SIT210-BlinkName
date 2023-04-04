// We will be using D7 to control our LED
// Our button wired to D3
int MY_LED = D7;
int MY_BUTTON = D3;

// The setup() method is called once when the device boots.
void setup()
{
    pinMode(MY_LED, OUTPUT);
    pinMode(MY_BUTTON, INPUT_PULLUP);
}

// The loop() method is called frequently.
void loop()
{

    if (digitalRead(MY_BUTTON) == LOW)
    {
        // Morse Code

        // Letter R
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(300);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(100);

        // Space between letters
        digitalWrite(MY_LED, LOW);
        delay(300);

        // Letter A
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(300);

        // Space between letters
        digitalWrite(MY_LED, LOW);
        delay(300);

        // Letter T
        digitalWrite(MY_LED, HIGH);
        delay(300);
        digitalWrite(MY_LED, LOW);
        delay(100);

        // Space between letters
        digitalWrite(MY_LED, LOW);
        delay(300);

        // Letter A
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(300);

        // Space between letters
        digitalWrite(MY_LED, LOW);
        delay(300);

        // Letter N
        digitalWrite(MY_LED, HIGH);
        delay(300);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(100);

        // Space between letters
        digitalWrite(MY_LED, LOW);
        delay(300);

        // Letter A
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(300);

        // Letter K
        digitalWrite(MY_LED, HIGH);
        delay(300);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(100);
        digitalWrite(MY_LED, LOW);
        delay(100);
        digitalWrite(MY_LED, HIGH);
        delay(300);

        // Space between words
        digitalWrite(MY_LED, LOW);
        delay(700);
    }
    else
    {
        // otherwise
        // turn the LED Off
        digitalWrite(MY_LED, LOW);
    }
}
