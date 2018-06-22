#include <iostream>

#include "Punkt.h"
#include "Kreis.h"

int main()
{
		// Assoziation (Rule-of-Zero)

		Punkt punkt = Punkt(1, 2);

		Kreis kreis1;
		kreis1.SetMittelpunkt(punkt);

		std::cout << kreis1.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis1.GetMittelpunkt()->GetY() << '\n';

		// copy-Semantik (Rule-of-Zero)

		Kreis kreis2(kreis1);  // Kopierkonstruktor
		std::cout << kreis2.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis2.GetMittelpunkt()->GetY() << '\n';
		std::cout << kreis1.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis1.GetMittelpunkt()->GetY() << '\n';

		Kreis kreis3 = kreis2;  // Kopierender Zuweisungsoperator
		std::cout << kreis3.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis3.GetMittelpunkt()->GetY() << '\n';
		std::cout << kreis2.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis2.GetMittelpunkt()->GetY() << '\n';

		// move-Semantik (Rule-of-Zero)

		Kreis kreis4(std::move(kreis3));  // Bewegender Konstruktor
		std::cout << kreis4.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis4.GetMittelpunkt()->GetY() << '\n';
		std::cout << kreis3.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis3.GetMittelpunkt()->GetY() << '\n';

		Kreis kreis5 = std::move(kreis4);  // Bewegender Zuweisungsoperator
		std::cout << kreis5.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis5.GetMittelpunkt()->GetY() << '\n';
		std::cout << kreis4.GetMittelpunkt()->GetX() << '\n';
		std::cout << kreis4.GetMittelpunkt()->GetY() << '\n';
}