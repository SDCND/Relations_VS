#ifndef LEHRER_H
#define LEHRER_H

#include <string>

class Lehrer
{
public:
		// RULE OF FIVE:
		virtual ~Lehrer() {}												// eigener Destruktor wegen virtual
		Lehrer(Lehrer&&) = default;									// bewegender Konstruktor
		Lehrer& operator=(Lehrer&&) = default;			// bewegender Zuweisungsoperator
		Lehrer(const Lehrer&) = default;						// Kopierkonstruktor
		Lehrer& operator=(const Lehrer&) = default; // kopierender Zuweisungsoperator

		Lehrer(std::string name) : name(name) { }

		std::string GetName() { return name; }

private:
		std::string name;
};

#endif // !LEHRER_H