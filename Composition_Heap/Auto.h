#ifndef AUTO_H
#define AUTO_H

#include <string>

#include "Reifen.h"
#include "Motor.h"
#include "Sitze.h"

class Auto
{
public:
		Auto();
		~Auto();

		void SetReifenPosition(int, std::string);
		std::string GetReifenPosition(int);

private:
		Motor*  motor;
		Reifen* reifen[4];
		Sitze*  sitze[5];
};

#endif // !AUTO_H