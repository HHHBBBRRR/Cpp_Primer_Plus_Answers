#ifndef WINEC_H_
#define WINEC_H_

#include<string>
#include<valarray>
#include"Pair.h"

class Wine :
    private std::string,private Pair<std::valarray<int>, std::valarray<int>>
{
private:
	typedef std::valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;

	int years;
public:
	Wine() : std::string("Null Wine"), years(0), PairArray() {}
	Wine(const char* l, int y)
		: std::string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}
	Wine(const char* l, int y, const int yr[], const int bot[])
		: std::string(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

	std::string& Label() { return (std::string&)*this; }
	void GetBottles();
	void Show()const;
	int sum();
};

#endif // !WINEC_H_
