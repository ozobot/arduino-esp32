#include "pins_arduino.h"
#include "sensors.h"

const GenericSensor SensorLeft(0, D0, A0);
const GenericSensor SensorFront(1, D1, A1);
const GenericSensor SensorRight(2, D2, A2);
const GenericSensor SensorTop1(5, D4, A4);
const GenericSensor SensorTop2(4, D3, A3);

const DisplaySensor HMI(3, D6, D7, D8, D9);

const AnalogSensor LineSensor(6, A5, A6, A7, A8, A9);

const BaseSensor BatterySensor(7);