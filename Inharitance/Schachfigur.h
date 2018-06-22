#ifndef SCHACHFIGUR_H
#define SCHACHFIGUR_H

#include <string>

class Schachfigur
{
public:

		Schachfigur() = default;
		~Schachfigur() = default;

		std::string GetName() { return name; }

protected:

		std::string name;
};

#endif