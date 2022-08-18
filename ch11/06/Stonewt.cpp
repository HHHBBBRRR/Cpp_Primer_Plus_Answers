#include<iostream>
#include "Stonewt.h"

using std::cout;

Stonewt::Stonewt()
{
	stone = pds_left = pounds = 0;
}

Stonewt::Stonewt(double lbs)
{
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn;
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

bool Stonewt::operator>(const Stonewt& s)
{
	if (pounds > s.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator>=(const Stonewt& s)
{
	if (pounds > s.pounds || pounds == s.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Stonewt::operator==(const Stonewt& s)
{
	if (pounds == s.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<(const Stonewt& s1, const Stonewt& s2)
{
	if (s1.pounds < s2.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<=(const Stonewt& s1, const Stonewt& s2)
{
	if (s1.pounds < s2.pounds || s1.pounds == s2.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator!=(const Stonewt& s1, const Stonewt& s2)
{
	if (s1.pounds == s2.pounds)
	{
		return true;
	}
	else
	{
		return false;
	}
}
