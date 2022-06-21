#include <Arduino.h>
#include "Timer.h"

long Timer::get_elapsed_time()
{
	long current_time = micros();
	long elapsed_time = current_time - _lastRunTime;

	_lastRunTime = current_time;
	return elapsed_time;
};

Timer::Timer()
{
	_lastRunTime = 0;
};
