#ifndef SCHULE_H
#define SCHULE_H

#include "Lehrer.h"

class Schule
{
public:
		// RULE OF FIVE:
		virtual ~Schule() {}												// eigener Destruktor wegen virtual
		Schule(Schule&&) = default;									// bewegender Konstruktor
		Schule& operator=(Schule&&) = default;			// bewegender Zuweisungsoperator
		Schule(const Schule&) = default;						// Kopierkonstruktor
		Schule& operator=(const Schule&) = default; // kopierender Zuweisungsoperator

		Schule(Lehrer* lehrer) :lehrer(lehrer) {}

		Lehrer* GetLehrer() { return lehrer; }

private:
		Lehrer * lehrer;
};

#endif // !SCHULE_H