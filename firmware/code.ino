#include <Servo.h>
#include <Wire.h>


// servo motors
int signal_M1 = 26;
int signal_M2 = 27;

int button = 3; // initialization button

// bottom LCD Display I2C setup 
int sda = 13;
int scl = 14; 

// esp32-cam TX & RX
int rx = 16;
int tx = 17; 

// A4988 stepper motor 
int step = 21;
int dir = 22; 

// robot's face (main screen display)
int cs = 15;
int rst = 4;
int dc = 2;
int mosi = 23;
int sck = 18; 
int miso = 19;

// audio amplifier
int audio_input = 12;


void setup() {

  Serial.begin(115200);
  

}

void loop() {
  

}
