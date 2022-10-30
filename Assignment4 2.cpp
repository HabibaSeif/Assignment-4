#include <iostream>
#include "Employee.h"
#include "HashTable1.h"
#include "HashTable.h"
using namespace std;

int main()
{
	Employee A("Mina", 30, 10000, 4);
	Employee B("Fawzy", 45, 5000, 8);
	Employee C("Yara", 19, 2000, 0);
	Employee D("Mariam", 32, 8000, 2);
	Employee E("Ayman", 33, 4000, 8);
	Employee F("Roshdy", 28, 9000, 3);
	Employee G("Aya", 26, 6000, 3);
	Employee H("Abdallah", 29, 7000, 4);
	Employee I("Fatma", 21, 3000, 1);
	HashTable1 h(9);
	h.insert(A.getexpr(), A);
	h.insert(B.getexpr(), B);
	h.insert(C.getexpr(), C);
	h.insert(D.getexpr(), D);
	h.insert(E.getexpr(), E);
	h.insert(F.getexpr(), F);
	h.insert(G.getexpr(), G);
	h.insert(H.getexpr(), H);
	h.insert(I.getexpr(), I);
	h.remove("Mina");
	h.print();
	cout << endl << endl << "==============================" << endl;
	cout << "Hash Table using chaining" << endl;
	cout << "============================" <<endl;
	HashTable T;
	T.insert1(A.getexpr(), A);
	T.insert1(B.getexpr(), B);
	T.insert1(C.getexpr(), C);
	T.insert1(D.getexpr(), D);
	T.insert1(E.getexpr(), E);
	T.insert1(F.getexpr(), F);
	T.insert1(G.getexpr(), G);
	T.insert1(H.getexpr(), H);
	T.insert1(I.getexpr(), I);
	T.remove(4, "Mina");
	T.print();

}