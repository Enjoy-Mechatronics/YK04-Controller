const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

const int out1 = 6;
const int out2 = 7;
const int out3 = 8;
const int out4 = 9;

int oldvalue1;
int oldvalue2;
int oldvalue3;
int oldvalue4;

bool deviceOn1;
bool deviceOn2;
bool deviceOn3;
bool deviceOn4;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);

  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);

  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int newvalue1 = digitalRead(in1);
  if(newvalue1 == 1 && oldvalue1 == 0){
    deviceOn1 = !deviceOn1;
    digitalWrite(out1, deviceOn1 == true? HIGH : LOW);
  } 

  int newvalue2 = digitalRead(in2);
  if(newvalue2 == 1 && oldvalue2 == 0){
    deviceOn2 = !deviceOn2;
    digitalWrite(out2, deviceOn2 == true? HIGH : LOW);
  }
  
  int newvalue3 = digitalRead(in3);
  if(newvalue3 == 1 && oldvalue3 == 0){
    deviceOn3 = !deviceOn3;
    digitalWrite(out3, deviceOn3 == true? HIGH : LOW);
  }

  int newvalue4 = digitalRead(in4);
  if(newvalue4 == 1 && oldvalue4 == 0){
    deviceOn4 = !deviceOn4;
    digitalWrite(out4, deviceOn4 == true? HIGH : LOW);
  }

  delay(30);

  oldvalue1 = newvalue1;
  oldvalue2 = newvalue2;
  oldvalue3 = newvalue3;
  oldvalue4 = newvalue4;
}





