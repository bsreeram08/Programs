#include <Key.h>
#include <Keypad.h> 
const byte ROWS = 4;
const byte COLUMN = 3;
char keys[ROWS][COLUMN]={{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};
byte ROWPINS[ROWS]={2,3,4,5};
byte COLPINS[COLUMN]={6,7,8};
Keypad keypad=Keypad(makeKeymap(keys),ROWPINS,COLPINS,ROWS,COLUMN);//mapping the Keys to the keypad

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char Key=keypad.getKey();
  if (Key)
  {
    Serial.println(Key);
  }
}
