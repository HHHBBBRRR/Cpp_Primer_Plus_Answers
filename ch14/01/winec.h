#ifndef WINEC_H_
#define WINEC_H_

#include<string>
#include<valarray>
#include"Pair.h"

class Wine
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;

	std::string label;
	int years;
	PairArray information;
public:
	Wine() : label("Null Wine"), years(0), information() {}
	Wine(const char* l, int y)
		: label(l), years(y), information(ArrayInt(y), ArrayInt(y)) {}
	Wine(const char* l, int y, const int yr[], const int bot[])
		: label(l), years(y), information(ArrayInt(yr, y), ArrayInt(bot, y)) {}

	std::string& Label() { return label; }
	void GetBottles();
	void Show()const;
	int sum();
};

#endif // !WINEC_H_
