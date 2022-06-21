#include "HydraulicAssistant.h"
#include <Arduino.h>

void HydraulicAssistant::update_position(double direction)
{
	// Нахождение пройденного расстояния
	double distance = direction * _positionPerMicrosecond * _timer.get_elapsed_time();

	// Проверка выхода за границы
	_currentPosition = constrain(_currentPosition + distance, _minimumPosition, _maximumPosition);
};

double HydraulicAssistant::get_position()
{
	return _currentPosition;
};

HydraulicAssistant::HydraulicAssistant
(
	double positionPerMicrosecond,
	double currentPosition,
	double maximumPosition,
	double minimumPosition
) :
	_positionPerMicrosecond(positionPerMicrosecond),
	_currentPosition(currentPosition),
	_maximumPosition(maximumPosition),
	_minimumPosition(minimumPosition),
	_timer(Timer())
{
};
