#include <iostream>
using namespace std;
class card {
private:
	int		card_number;
	char	face[7];
	char	color[7];

public:

	
	void	setcn(int);
	void	setf(char*);
	void	setc(char*);
	char*	getc();
	char*	getf();
	int		getcn();
	
};