#include<iostream>
using namespace std;
class Player
{
	char* name;
	int matches;
public:
	Player(const char*, int);
	int getMatches(void);
	void display(void);
	~Player();
};
class Bowler :public Player
{
	int noOfWickets;
public:
	Bowler(const char*, int, int);
	void display(void);
};
class Batsman :public Player
{
	int totalScore;
	double average;
	int* perMatchScore;
public:
	Batsman(const char*, int);
	~Batsman();
	void calculateAverage(void);
	void display(void);                       
};
