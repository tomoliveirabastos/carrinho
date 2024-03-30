#include <Arduino.h>
#include <Ultrasonic.h>
#include <Servo.h>
#include "motor.hpp"

int pos = 0;
int distance = 0;

Ultrasonic ultrasonic(A5, A4);
Motor * motor;
Servo servo;

bool RIGHT = true;

void setup()
{
    Serial.begin(9600);
    servo.attach(3);
}

void direita()
{
    Serial.println("DIREITA");
}
void esquerda()
{
    Serial.println("ESQUERDA");
}

void frente()
{
    Serial.println("FRENTE");
}

void traz()
{
    Serial.println("TRAZ");
}
char *direction = "RIGHT";

void loop()
{
    motor->next_motor_position();
    servo.write(motor->position);

    distance = ultrasonic.read();
    Serial.println("Distance: ");
    Serial.println(distance);

    delay(10);
}