//String.h
#ifndef STRING_H_
#define STRING_H_
 
#include<iostream>
 
using std::ostream;
using std::istream;
 
class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String();
	String(const char* s);
	String(const String&);
	~String();
 
	int lenth()const { return len; }
	void Stringlow();
	void Stringup();
	int ncontains(char s);
 
	char& operator[](int i);
	const char& operator[](int i)const;
	String& operator=(const String&);
	String& operator=(const char* s);
	String operator+(const String& st);
	String operator+(const char* s);
 
	friend String operator+(const char* s, String& st);
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);
 
	static int HowMany();
};
 
#endif // !STRING_H_
