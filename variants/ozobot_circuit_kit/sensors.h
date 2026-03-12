#ifndef OZOBOT_SENSORS_H
#define OZOBOT_SENSORS_H

class BaseSensor {
public:
  BaseSensor(uint8_t id) : id(id) {};
  const uint8_t id;
  static constexpr const uint8_t sharedInterrupt = D20;
};

class GenericSensor : public BaseSensor {
public:
  GenericSensor(uint8_t id, uint8_t gpio, uint8_t adc) : BaseSensor(id), gpio(gpio), adc(adc) {};

  const uint8_t gpio;
  const uint8_t adc;
};

class DisplaySensor : public BaseSensor {
public:
  DisplaySensor(uint8_t id, uint8_t gpio_0, uint8_t gpio_1, uint8_t gpio_2, uint8_t gpio_3)
      : BaseSensor(id), gpio_0(gpio_0), gpio_1(gpio_1), gpio_2(gpio_2), gpio_3(gpio_3) {};

  const uint8_t gpio_0;
  const uint8_t gpio_1;
  const uint8_t gpio_2;
  const uint8_t gpio_3;
};

class AnalogSensor : public BaseSensor {
public:
  AnalogSensor(uint8_t id, uint8_t adc_0, uint8_t adc_1, uint8_t adc_2, uint8_t adc_3, uint8_t adc_4)
      : BaseSensor(id), adc_0(adc_0), adc_1(adc_1), adc_2(adc_2), adc_3(adc_3), adc_4(adc_4) {};

  const uint8_t adc_0 = A5;
  const uint8_t adc_1 = A6;
  const uint8_t adc_2 = A7;
  const uint8_t adc_3 = A8;
  const uint8_t adc_4 = A9;
};

extern const GenericSensor SensorLeft;
extern const GenericSensor SensorFront;
extern const GenericSensor SensorRight;
extern const GenericSensor SensorTop1;
extern const GenericSensor SensorTop2;

extern const DisplaySensor HMI;

extern const AnalogSensor LineSensor;

extern const BaseSensor BatterySensor;

#endif