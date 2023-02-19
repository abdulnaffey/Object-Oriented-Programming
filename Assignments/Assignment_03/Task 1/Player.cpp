#include "Player.h"

Player::Player(const char* x, int y)
{
	int l;
	for ( l = 0; x[l] != '\0'; l++);
	
	name = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		name[i] = x[i];
	}
	name[l] = '\0';
	matches = y;
}
Player::~Player()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}
void Player::display()
{
	cout << "Name of Player : " << name << endl;
	cout << "Number of matches played : " << matches << endl;
}

int Player::getMatches()
{
	return matches;
}

Bowler::Bowler(const char* n, int m, int w):Player(n,m)
{
	noOfWickets = w;
}
void Bowler::display(void)
{
	Player::display();
	cout << "Number of wickets : " << noOfWickets << endl;
}

Batsman::Batsman(const char* n, int m):Player(n,m)
{
	
	perMatchScore = new int[getMatches() + 1];
	for (int i = 0; i < getMatches(); i++)
	{
		cout << "Enter score for match " << i + 1 << " : ";
		cin >> perMatchScore[i];
	}
}
void Batsman::calculateAverage(void)
{
	double sum = 0;
	for (int i = 0; i < getMatches(); i++)
		sum += perMatchScore[i];
	totalScore = sum;
	average = sum / getMatches();
}

void Batsman::display(void)
{
	Player::display();
	cout << "Total score is : " << totalScore << endl;
	cout << "Average is : " << average << endl;
}
Batsman::~Batsman()
{
	if (perMatchScore != nullptr)
	{
		delete[] perMatchScore;
		perMatchScore = nullptr;
	}
}