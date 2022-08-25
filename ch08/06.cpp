#include<iostream>
#include<cstring>

using std::cout;
using std::endl;
using std::strlen;

template<typename T>
T maxn(T* a, int n);

template<>
const char* maxn(const char** str, int n);

int main()
{
	double a[4] = { 1.0,2.5,4.8,2.3 };
	int b[6] = { 1,4,7,9,2,10 };
	const char* s[5] = { "H","Hi","Hello","Yes","Hello" };
	cout << maxn(a, 4) << endl;
	cout << maxn(b, 6) << endl;
	cout << maxn(s, 5);

}

template<typename T>
T maxn(T* a, int n)
{
	T temp = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > temp)
		{
			temp = a[i];
		}
	}
	return temp;
}

template<>
const char* maxn(const char** str, int n)
{
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (strlen(str[i]) > strlen(str[temp]))
		{
			temp = i;
		}
	}
	return str[temp];
}
