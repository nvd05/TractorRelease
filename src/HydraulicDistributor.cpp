#include "HydraulicDistributor.h"

void HydraulicDistributor::listener()
{
	_piston.update_distance();
	_spool.update_angle();
};

HydraulicDistributor::HydraulicDistributor(int pin1, int pin2) :
	_engine(HydraulicEngine(pin1, pin2)),
	_spool(HydraulicSpool(_engine)),
	_piston(HydraulicPiston(_spool))
{
};
