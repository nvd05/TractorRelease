#include "HydraulicSpool.h"

void HydraulicSpool::update_angle()
{
	update_position(_engine.get_position());
};

HydraulicSpool::HydraulicSpool(HydraulicEngine engine) : HydraulicAssistant(0, 0, 0, 0), _engine(engine)
{
};
