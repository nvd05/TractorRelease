#pragma once

/**
 * @brief Гидравлический двигатель
 */
class HydraulicEngine : public HydraulicInterface
{
public:
	HydraulicEngine(int pin1, int pin2);
};
