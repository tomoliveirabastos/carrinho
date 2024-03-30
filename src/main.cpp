#include <Arduino.h>
#include <motor.hpp>
#include <Ultrasonic.h>
#include <Servo.h>

Ultrasonic ultrasonic(A5, A4);
Servo servo;
Motor * motor;

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

void loop()
{
    motor->next_motor_position();
    servo.write(motor->position);

    motor->distance = ultrasonic.read();
    Serial.println("Distance: ");
    Serial.println(motor->distance);

    delay(10);
}