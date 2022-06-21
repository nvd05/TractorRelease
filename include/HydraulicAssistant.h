#pragma once
#include "HydraulicInterface.h"
#include "Timer.h"

/**
 * @brief Гидравлический помощник
 */
class HydraulicAssistant : public HydraulicInterface
{
private:
	Timer _timer;

	double _positionPerMicrosecond;
	double _currentPosition;
	double _maximumPosition;
	double _minimumPosition;

protected:
	void update_position(double direction);

public:
	double get_position();
	HydraulicAssistant(
		double positionPerMicrosecond,
		double currentPosition,
		double maximumPosition,
		double minimumPosition
	);
};
