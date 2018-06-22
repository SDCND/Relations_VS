#ifndef PUNKT_H
#define PUNKT_H

class Punkt
{
public:
		Punkt() = default;
		Punkt(int _x, int _y) { x = _x;  y = _y; }

		Punkt* GetPunkt() { return this; }

		int GetX() { return x; }
		int GetY() { return y; }

private:
		int x;
		int y;
};

#endif // !PUNKT_H