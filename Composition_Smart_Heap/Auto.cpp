#include "Auto.h"

Auto::Auto()
{
		motor = std::make_unique<Motor>();
		reifen = std::vector<Reifen>(4);
		sitze = std::vector<Sitze>(5);
}

void Auto::SetMotorName(std::string name) 
{ 
		motor->SetName(name); 
}

std::string Auto::GetMotorName() 
{ 
		return motor->GetName(); 
}

void Auto::SetSitzPosition(int n, int pos)
{ 
		sitze[n].SetPosition(pos); 
}

void Auto::SetReifenPosition(int n, std::string pos)
{
		reifen[n].SetPosition(pos);
}

int Auto::GetSitzPosition(int n)
{ 
		return sitze[n].GetPosition(); 
}

std::string Auto::GetReifenPosition(int n)
{
		return reifen[n].GetPosition();
}