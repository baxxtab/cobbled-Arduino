#include <AFMotor.h>

AF_DCMotor _motor (2);
int _runTime;
int _delayTime;
int _speed;

void setup() {
}

void loop() {
  _motor.run(FORWARD); 
  _runTime = random(5, 40);
  _delayTime = random(5, 40);
  _speed = (random(15, 50) * 1000);
 
  _motor.setSpeed(_speed);
  _motor.run(FORWARD);
  delay(_runTime);
  
  _motor.run(RELEASE);
  delay(_delayTime);
  
}
