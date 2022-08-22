#include<iostream>

using std::cout;
using std::endl;

void print(char* str);
void print(char* str, int n);

int main()
{
	char s[3] = "Hi";
	int i = 0;

	print(s);
	i++;
	print(s);
	i++;
	print(s);
	i++;
	print(s, i);

	return 0;
}

void print(char* str)
{
	cout << str << endl;
}

void print(char* str, int n)
{
	if (n==0)
	{
		print(str);
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ":";
		print(str);
	}
}
