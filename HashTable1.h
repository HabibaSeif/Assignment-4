#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;

class HashTable1 {
private:
	Employee** e;
	int size;
	int count;
	int collide;

public:
	HashTable1(int);
	int hash(int);
	void insert(int, Employee);
	void remove(string);
	void print();
};

HashTable1::HashTable1(int s)
{
	size = s;
	count = 0;
	collide = 0;
	e = new Employee * [size];
	
	for (int i = 0; i < size; i++)
	{
		*(e + i) = nullptr;
	}
}

int HashTable1::hash(int i)
{
	int key = i % size;
	return key;
}

void HashTable1::insert(int i, Employee x)
{
	if (count == size)
	{
		cout << "Cannot insert, Hash Table is Full" << endl;
		return;
	}
	int Key = hash(i);
	while ((*(e + Key)) != nullptr)
	{
		Key = (Key + 1) % size;
		collide++;
	}

	*(e + Key) = new Employee;
	(*(e + Key))->setname(x.getname());
	(*(e + Key))->setage(x.getage());
	(*(e + Key))->setsalary(x.getsalary());
	(*(e + Key))->setexpr(x.getexpr());

	count++;
}

void HashTable1::remove(string n)
{
	//cout << i << " TT " << endl;
	//cout << endl;
	int specifier = -1;
	if (count == 0)
	{
		cout << "Hash table is empty, there is nothing to remove " << endl;
		return;
	}
	for (int i = 0; i < size; i++)
	{
		//cout << e[i]->getexpr() << "TT" << endl;
		if ((e[i]->getname()) == n)
		{
			specifier++;
			delete(* (e + i));
			*(e + i) = nullptr;
			////size--;
			break;
		}
	}
	if (specifier == -1)
	{
		cout << "Not found" << endl;
		return;
	}
	
}

void HashTable1::print()
{
	for (int i = 0; i < size; i++)
	{
		if (*(e + i) == nullptr)
		{
			cout << "empty slot" << endl;
		}
		else
		{
			//cout << "Still" << endl;
			cout << (*(e + i))->getname() << endl;
		}
	}

	cout << "Colliding happened " << collide << " times";
}

