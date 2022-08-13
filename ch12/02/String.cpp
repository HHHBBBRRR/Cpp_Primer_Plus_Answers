//String.cpp
#include<cstring>
#include<cctype>
#include"String.h"
 
using std::cin;
using std::cout;
 
int String::num_strings = 0;
 
int String::HowMany()
{
	return num_strings;
}
 
String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
 
String::String(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}
 
String::String(const String& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}
 
String::~String()
{
	num_strings--;
	delete[] str;
}
 
void String::Stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
}
 
void String::Stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
}
 
int String::ncontains(char s)
{
	int cnt = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == s)
		{
			cnt++;
		}
	}
	return cnt;
}
 
char& String::operator[](int i)
{
	return str[i];
}
 
const char& String::operator[](int i)const
{
	return str[i];
}
 
String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return*this;
	}
 
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}
 
String& String::operator=(const char* s)
{
	delete[]str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}
 
String String::operator+(const String& st)
{
	String sum;
	sum.len = len + st.len;
	sum.str = new char[sum.len + 1];
	std::strcpy(sum.str, str);
	std::strcat(sum.str, st.str);
	return sum;
}
 
String String::operator+(const char* s)
{
	String sum;
	sum.len = len + strlen(s);
	sum.str = new char[sum.len + 1];
	std::strcpy(sum.str, str);
	std::strcat(sum.str, s);
	return sum;
}
 
String operator+(const char* s, String& st)
{
	String sum;
	sum.len = st.len + strlen(s);
	sum.str = new char[sum.len + 1];
	std::strcpy(sum.str, s);
	std::strcat(sum.str, st.str);
	return sum;
}
 
bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}
 
bool operator>(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) > 0);
}
 
bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}
 
ostream& operator<<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}
 
istream& operator>>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
	{
		st = temp;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}
