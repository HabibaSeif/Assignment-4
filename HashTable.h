#pragma once
#include <iostream>
#include <list>
#include "Employee.h"
using namespace std;


class HashTable
{
private:
	static const int size = 9; // why does it have to be static?
	list<Employee> emp[size];
	int collide = 0;

public:
	//HashTable();
	bool empty();
	int hash(int);
	void insert1(int, Employee);
	void remove(int, string);
	void print();
	//bool operator ==(const Employee&, const string);
	//void remove(int);
};


bool operator ==(const Employee& person, const string& name) {
	return (person.getname() == name);
}


void HashTable::remove(int i, string x)
{
	int key = hash(i);
	list<Employee>::iterator p;
	p = find(emp[key].begin(), emp[key].end(), x);
	if (p == emp[key].end())
	{
		cout << "Not found" << endl;
		return;
	}
	else
	{
		emp[key].erase(p);
	}
}

bool HashTable::empty()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += emp[i].size();
	}
	if (sum == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int HashTable::hash(int y)
{
	return (y % size);
}

void HashTable::insert1(int i, Employee x)
{
	int key = hash(i);
	emp[key].push_back(x);
}

void HashTable::print() {
	for (int i = 0; i < size; i++)
	{
		if (emp[i].size() == 0)
		{
			continue;
		}
		if (emp[i].size() > 0)
		{
			collide += (emp[i].size() - 1);
		}
		list<Employee>::iterator p = emp[i].begin();
		while (p != emp[i].end())
		{
			cout << (*p).getname() << " ";
			p++;
		}

		cout << endl;
	}

	cout << "Throught the whole linked list collision happend: " << collide << " times" << endl;
}