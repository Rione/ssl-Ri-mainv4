#ifndef LGKIKCER_H
#define LGKIKCER_H
#include "mbed.h"
class LGKicker {
  public:
    LGKicker(PinName KickerPin);
    bool Kick(void);
    void setPower(float p);

  private:
    PwmOut Kicker; // DigitalOut Kicker;
    Timeout KickerIsRedey;
    Timeout Kicker_timeout;
    Timer timer;
    bool enabled;
    float power;

    void flip(void);
    void flipOn(void);
};

#endif
