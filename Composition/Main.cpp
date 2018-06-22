#include <iostream>

#include "Auto.h"

int main()
{
		//////// Stack Lösung ////////

		Auto car;

		Reifen* vlReifen = car.GetReifen(0);
		vlReifen->SetPosition("VL");

		// oder
		car.GetReifen(1)->SetPosition("VR");

		std::cout << car.GetReifen(0)->GetPosition() << "\n";
		std::cout << car.GetReifen(1)->GetPosition() << "\n";
		std::cout << car.GetReifen(2)->GetPosition();  // undefiniert, nicht gesetzt
}