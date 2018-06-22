#ifndef MOTOR_H
#define MOTOR_H

#include <string>

class Motor
{
public:
		void SetName(std::string _name) { name = _name; }
		std::string GetName() { return name; }
		
private:
		std::string name;
};

#endif