#include "HydraulicPiston.h"
#include "HydraulicSpool.h"

void HydraulicPiston::update_distance()
{
	update_position(_spool.get_position());
};

HydraulicPiston::HydraulicPiston(HydraulicSpool spool) : HydraulicAssistant(0.012, 0, 0, 4), _spool(spool)
{
};
