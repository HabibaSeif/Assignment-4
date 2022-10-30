#pragma once
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age, salary, expr;

public:
	Employee(string, int, int, int);
	void setname(string);
	void setage(int);
	void setsalary(int);
	void setexpr(int);
	string getname() const;
	int getage();
	int getsalary();
	int getexpr();
};

Employee::Employee(string Name = "", int Age = 0, int Salary = 0, int Expr = 0)
{
	name = Name;
	age = Age;
	salary = Salary;
	expr = Expr;
}

void Employee::setname(string N)
{
	name = N;
}

void Employee::setage(int A)
{
	age = A;
}

void Employee::setsalary(int S)
{
	salary = S;
}

void Employee::setexpr(int E)
{
	expr = E;
}

string Employee::getname() const
{
	return name;
}

int Employee::getage()
{
	return age;
}

int Employee::getexpr()
{
	return expr;
}

int Employee::getsalary()
{
	return salary;
}


