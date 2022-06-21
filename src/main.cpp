#include "HydraulicDistributor.h"
#include <Arduino.h>

#pragma region Pin announcement
	HydraulicDistributor distributor(1, 2);
#pragma endregion

void setup()
{
}

void loop()
{
	distributor.listener();
}
