#include<cstring>
#include "VintagePort.h"
 
using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strncpy; 
 
VintagePort::VintagePort()
{
	nickname = new char[5];
	strcpy(nickname, "none");
	year = 0;
}
 
VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y)
	: Port(br, st, b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}
 
VintagePort::VintagePort(const VintagePort& vp)
	: Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}
 
VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
	{
		return *this;
	}
 
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}
 
void VintagePort::Show()const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}
 
std::ostream& operator<<(std::ostream& os, const VintagePort& vp)
{
	os << (const Port&)vp;
	os << vp.nickname << ", " << vp.year << endl;
	return os;
}
