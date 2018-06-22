#ifndef AUTO_H
#define AUTO_H

#include <cstddef>
#include <memory>
#include <vector>
#include <string>

#include "Motor.h"
#include "Sitze.h"
#include "Reifen.h"

class Auto
{
public:
		Auto();

		void SetMotorName(std::string);
		void SetSitzPosition(int, int);
		void SetReifenPosition(int, std::string);

		std::string GetMotorName();
		int GetSitzPosition(int);
		std::string GetReifenPosition(int);

private:
		std::unique_ptr<Motor> motor;
		std::vector<Reifen> reifen;
		std::vector<Sitze> sitze;
};

#endif // !AUTO_H