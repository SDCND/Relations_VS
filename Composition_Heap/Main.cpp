#include <iostream>

#include "Auto.h"

int main()
{
		//////// Heap Lösung ////////

		Auto* car = new Auto;

		car->SetReifenPosition(0, "VL");
		car->SetReifenPosition(1, "VR");
		car->SetReifenPosition(2, "HL");
		car->SetReifenPosition(3, "HR");

		std::cout << car->GetReifenPosition(0) << "\n";
		std::cout << car->GetReifenPosition(1) << "\n";
		std::cout << car->GetReifenPosition(2) << "\n";
		std::cout << car->GetReifenPosition(3);

		delete car;
}