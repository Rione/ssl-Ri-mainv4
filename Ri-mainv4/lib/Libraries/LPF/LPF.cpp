#include "LPF.h"

LPF::LPF(float _timeConstant) : timeConstant(_timeConstant), prevValue(0) {
    timer.start();
}

float LPF::update(float _value) {
    float dt = timer.read();
    timer.reset();
    float alpha = dt / (timeConstant + dt);
    float value = alpha * _value + (1 - alpha) * prevValue;
    prevValue = value;
    return value;
}