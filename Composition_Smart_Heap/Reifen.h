#ifndef REIFEN_H
#define REIFEN_H

#include <string>

class Reifen
{
public:
		void SetPosition(std::string _position) { position = _position; }
		std::string GetPosition() { return position; }

private:
		std::string position;
};

#endif