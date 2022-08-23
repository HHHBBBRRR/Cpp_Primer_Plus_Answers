#ifndef ABSTR_EMP_H_
#define ABSTR_EMP_H_

#include<iostream>
#include<string>

class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;
protected:
	virtual void Get();
	virtual void Data()const;
public:
	abstr_emp() : fname("Nully"), lname("Nully"), job("Nully") {}
	abstr_emp(const std::string& fn, const std::string& ln = "Nully", const std::string j = "Nully");
	abstr_emp(const abstr_emp& e);
	virtual ~abstr_emp(){}

	virtual void SetAll() = 0;
	virtual void ShowAll()const = 0;

	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
};

#endif // !ABSTR_EMP_H_
