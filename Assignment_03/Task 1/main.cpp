#include"Player.h"


int main()
{
	Bowler b("Minal", 5, 3);
	Batsman p("Ayesha", 2);

	b.display();
	p.calculateAverage();
	p.display();
}