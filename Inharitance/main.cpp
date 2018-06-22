#include <iostream>

#include "Dame.h"
#include "Koenig.h"

int main(void)
{
		Dame dame;
		Koenig koenig;

		std::cout << dame.GetName() << "\n";
		std::cout << koenig.GetName();
}