#pragma once
#include "HydraulicAssistant.h"
#include "HydraulicSpool.h"

/**
 * @brief Гидравлический поршень
 */
class HydraulicPiston : public HydraulicAssistant
{
private:
	HydraulicSpool _spool;

public:
	void update_distance();
	HydraulicPiston(HydraulicSpool spool);
};
