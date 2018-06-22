#include <iostream>

#include<memory>

#include "Lehrer.h"
#include "Schule.h"

int main()
{
		// Schule - Aggregation (Smart Pointer Lösung mit shared_ptr)

		//std::shared_ptr<Lehrer> bob = std::make_shared<Lehrer>("Bob");  // Lesbarkeit verbessern
		sptrLehrer bob = std::make_shared<Lehrer>("Bob");

		{
				Schule Grundschule(bob);
				std::cout << "Grundschulleher: " << Grundschule.GetLehrer()->GetName() << '\n';

				Schule Grundschule2(Grundschule);  // Kopierkonstruktor
				std::cout << "Leher Grundschule 2: " << Grundschule2.GetLehrer()->GetName() << '\n';
				std::cout << "Grundschulleher: " << Grundschule.GetLehrer()->GetName() << '\n';       // kein Fehler wegen copy-Semantik

				//std::shared_ptr<Lehrer> fritz = std::make_shared<Lehrer>("Fritz");  // Lesbarkeit verbessern
				sptrLehrer fritz = std::make_shared<Lehrer>("Fritz");

				Schule Grundschule3(fritz);
				std::cout << "Leher Grundschule 3: " << Grundschule3.GetLehrer()->GetName() << '\n';

				Schule Grundschule4 = Grundschule3;  // kopierender Zuweisungsoperator
				std::cout << "Leher Grundschule 4: " << Grundschule4.GetLehrer()->GetName() << '\n';
				std::cout << "Leher Grundschule 3: " << Grundschule3.GetLehrer()->GetName() << '\n';  // kein Fehler wegen copy-Semantik

				// move-Semantik

				Schule Grundschule5(std::move(Grundschule3));   // bewegender Konstruktor
				std::cout << "Leher Grundschule 5: " << Grundschule5.GetLehrer()->GetName() << '\n';
				//std::cout << "Leher Grundschule 3: " << Grundschule3.GetLehrer()->GetName() << '\n';  // Fehler wegen move-Semantik

				Schule Grundschule6 = std::move(Grundschule5);   // bewegender Zuweisungsoperator
				std::cout << "Leher Grundschule 6: " << Grundschule6.GetLehrer()->GetName() << '\n';
				//std::cout << "Leher Grundschule 5: " << Grundschule5.GetLehrer()->GetName() << '\n';  // Fehler wegen move-Semantik
		}

		// Lehrer existiert immer noch obwohl die Schule schon zerstört ist

		Schule VHS(bob);
		std::cout << "VHS-Leher: " << VHS.GetLehrer()->GetName() << '\n';
}