#include <iostream>
#include<memory>

#include "Auto.h"

int main()
{
		//////// Smart Heap Lösung (ohne "new", Rule-Of-Zero Lösung) ////////

		std::unique_ptr<Auto> car = std::make_unique<Auto>();
		car->SetMotorName("Benziner");

		std::cout << car->GetMotorName() << '\n';

		car->SetReifenPosition(0, "VL");
		car->SetReifenPosition(1, "VR");
		car->SetReifenPosition(2, "HL");
		car->SetReifenPosition(3, "HR");

		for (int i = 0; i < 4; i++)
				std::cout << car->GetReifenPosition(i) << '\n';

		for (int i = 0; i < 5; i++)
		{
				car->SetSitzPosition(i, i + 1);
				std::cout << car->GetSitzPosition(i) << '\n';
		}
}