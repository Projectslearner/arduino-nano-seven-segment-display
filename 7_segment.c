/*
    Project name : Seven Segment Display
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-seven-segment-display
*/

#define SEG_A 2
#define SEG_B 3
#define SEG_C 4
#define SEG_D 5
#define SEG_E 6
#define SEG_F 7
#define SEG_G 8

// Define the pin numbers for each segment of the display

int numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 0, 0, 1, 1}  // 9
};

void setup() {
  // Set the pins as output
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000); // Change the delay as needed
  }
}

void displayNumber(int num) {
  digitalWrite(SEG_A, numbers[num][0]);
  digitalWrite(SEG_B, numbers[num][1]);
  digitalWrite(SEG_C, numbers[num][2]);
  digitalWrite(SEG_D, numbers[num][3]);
  digitalWrite(SEG_E, numbers[num][4]);
  digitalWrite(SEG_F, numbers[num][5]);
  digitalWrite(SEG_G, numbers[num][6]);
}
