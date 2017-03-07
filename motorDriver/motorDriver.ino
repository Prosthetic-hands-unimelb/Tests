//motor A connected between A01 and A02

#define PWMA 3 //Speed control 
#define AIN1 9 //Direction
#define AIN2 8 //Direction
#define STBY 10 //standby
#define OFF 0
#define FULL_SPEED 255
#define HALF_SPEED 128
#define CLOCKWISE 0
#define COUNTER_CLOCKWISE 1
#define MOTOR_A 1

void setup(){
  pinMode(STBY, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
}

void loop(){
  potValue = analogRead(POT_PIN);    // read the value from the sensor
  Serial.println(potValue);

  delay(100);

}


void move(int motor, int speed, int direction){
//Move specific motor at speed and direction

  digitalWrite(STBY, HIGH); //disable standby


  boolean inPin1 = LOW;
  boolean inPin2 = HIGH;

  if(direction == COUNTER_CLOCKWISE){
    inPin1 = HIGH;
    inPin2 = LOW;
  }
  if(motor == MOTOR_A){
    digitalWrite(AIN1, inPin1);
    digitalWrite(AIN2, inPin2);
    analogWrite(PWMA, speed);
  }
}

void stop(){
//enable standby  
  digitalWrite(STBY, LOW); 
}

