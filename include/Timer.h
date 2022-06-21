#pragma once

/**
 * @brief Таймер
 */
class Timer
{
private:
	long _lastRunTime;

public:
	/**
	 * @brief Возвращает пройденное количество времени в микросекундах с момента последнего вызова функции
	 */
	long get_elapsed_time();
	Timer();
};
