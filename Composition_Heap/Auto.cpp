#include "Auto.h"

Auto::Auto()
{
		Motor* motor = new Motor;

		for (int i = 0; i < 4; i++)
		{
				reifen[i] = new Reifen;
		}

		for (int i = 0; i < 5; i++)
		{
				sitze[i] = new Sitze;
		}
}

Auto::~Auto()
{
		delete motor;

		for (int i = 0; i < 4; i++)
		{
				delete reifen[i];
		}

		for (int i = 0; i < 5; i++)
		{
				delete sitze[i];
		}

		//delete[] sitze;   // false destruction
		//delete[] reifen;  // ..
}

void Auto::SetReifenPosition(int n, std::string pos)
{
		reifen[n]->SetPosition(pos);
}

std::string Auto::GetReifenPosition(int n)
{
		return reifen[n]->GetPosition();
}