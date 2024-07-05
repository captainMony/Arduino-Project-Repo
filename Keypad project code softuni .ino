#include <LiquidCrystal.h>
#include <Keypad.h>
#include <Servo.h>

// Initialize the LCD with the pin numbers: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(13, 11, 10, 9, 8, 14);



const byte ROWS = 4; //size of the keypad
const byte COLS = 4; // so we can give it to the array
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {7, 6, 5, 4}; // Pins define in array 
byte colPins[COLS] = {3, 2, 1, 0}; // so its easier to give to class?

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
//makes the keypad object that i interact with 
// Define the servo
Servo myServo;
const int servoPin = 12; // Servo pin


String password = "123456789"; // Yes the pass is hardcoded 
String inputPassword;        //The size is dynamic :)

void setup() {
  
  lcd.begin(16, 2); //start hte lcd
  lcd.setCursor(0, 0);
  lcd.print("Enter Passcode:");

  
  myServo.attach(servoPin); //dont forget plz
  myServo.write(0); // "locked"
}

void loop() {
  char key = keypad.getKey();
  if (key) {
    if (key == '#') {
      checkPassword();
    } else if (key == '*') {
      inputPassword = "";
      lcd.setCursor(0, 1);
      lcd.print("                "); // Clear the input line
    } else {
      inputPassword += key;
      lcd.setCursor(0, 1);
      lcd.print("*"); // doesnt work
    }
  }
}

void checkPassword() { //Method to check the password
  if (inputPassword == password) {
    lcd.setCursor(0, 1);
    lcd.print("Access Granted ");
    myServo.write(90); // Unlocked position
    delay(10000); 
    myServo.write(0); // Locked position
    lcd.setCursor(0, 1);
    lcd.print("                "); // maybe clear() is better? idk
    inputPassword = "";
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Access Denied  ");
    delay(2000); // Wait for 2 seconds
    lcd.setCursor(0, 1);
    lcd.print("                "); 
    inputPassword = "";
  }
}

