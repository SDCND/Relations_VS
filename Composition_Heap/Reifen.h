#ifndef REIFEN_H
#define REIFEN_H

#include <string>

class Reifen
{
public:
		Reifen() = default;
		~Reifen() = default;

		void SetPosition(std::string pos) { position = pos; }
		std::string GetPosition() { return position; }

private:
		std::string position;
};

#endif