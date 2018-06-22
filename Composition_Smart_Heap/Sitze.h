#ifndef SITZE_H
#define SITZE_H

class Sitze
{
public:
		void SetPosition(int _position) { position = _position; }
		int GetPosition() { return position; }

private:
		int position;
};

#endif