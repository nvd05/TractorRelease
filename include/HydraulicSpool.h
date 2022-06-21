#pragma once
#include "HydraulicAssistant.h"
#include "HydraulicEngine.h"

/**
 * @brief Гидравлический золотник
 */
class HydraulicSpool : public HydraulicAssistant
{
private:
	HydraulicEngine _engine;

public:
	void update_angle();
	HydraulicSpool(HydraulicEngine engine);
};
