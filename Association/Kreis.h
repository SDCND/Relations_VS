#ifndef KREIS_H
#define KREIS_H

#include "Punkt.h"

class Kreis
{
public:
		Kreis() = default;

		void SetMittelpunkt(Punkt punkt) { mittelPunkt = punkt; }
		Punkt* GetMittelpunkt() { return mittelPunkt.GetPunkt(); }

private:

		Punkt mittelPunkt;
};

#endif // !KREIS_H