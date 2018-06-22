#ifndef AUTO_H
#define AUTO_H

#include "Reifen.h"
#include "Motor.h"
#include "Sitze.h"

class Auto
{
public:
		Auto() = default;
		~Auto() = default;

		Reifen* GetReifen(int n) { return &reifen[n]; }

private:
		Motor  motor;
		Sitze  sitze[5];
		Reifen reifen[4];
};

#endif // !AUTO_H