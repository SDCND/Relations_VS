#ifndef SCHULE_H
#define SCHULE_H

#include <memory>

#include "Lehrer.h"

// Lesbarkeit verbessern
using sptrLehrer = std::shared_ptr<Lehrer>;

class Schule
{
public:
		// RULE OF ZERO: RO5-Elemente werden nicht gebraucht
		//virtual ~Schule() {}												// eigener Destruktor wegen virtual
		//Schule(Schule&&) = default;									// bewegender Konstruktor
		//Schule& operator=(Schule&&) = default;			// bewegender Zuweisungsoperator
		//Schule(const Schule&) = default;						// Kopierkonstruktor
		//Schule& operator=(const Schule&) = default; // kopierender Zuweisungsoperator

		//Schule(std::shared_ptr<Lehrer> lehrer) : lehrer(lehrer) {  }  // Lesbarkeit verbessern
		Schule(sptrLehrer lehrer) : lehrer(lehrer) {  }

		//std::shared_ptr<Lehrer> GetLehrer() { return lehrer; }  // Lesbarkeit verbessern
		sptrLehrer GetLehrer() { return lehrer; }

private:
		//Lehrer* lehrer;  // besser: smart pointer
		//std::shared_ptr<Lehrer> lehrer;  // Lesbarkeit verbessern
		sptrLehrer lehrer;
};

#endif // !SCHULE_H