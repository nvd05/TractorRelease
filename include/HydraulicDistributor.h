#pragma once
#include "HydraulicPiston.h"
#include "HydraulicSpool.h"
#include "HydraulicEngine.h"

class HydraulicDistributor
{
private:
	HydraulicPiston _piston;
	HydraulicSpool  _spool;
	HydraulicEngine _engine;

public:
	void listener();
	HydraulicDistributor(int pin1, int pin2);
};
