/////////////////////////////////
////  Triad.cpp
#include "Triad.h"
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

void Triad::setF(int value)
{
	first = value;
}

void Triad::setS(int value)
{
	second = value;
}

void Triad::setT(int value)
{
	third = value;
}

void Triad::Init(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}

void Triad::Read()
{
	int value1, value2, value3;

	cout << "first: "; cin >> value1;
	cout << "second: "; cin >> value2;
	cout << "third: "; cin >> value3;
	cout << endl;

	Init(value1, value2, value3);
	cout << endl;
}

string Triad::toString() const
{
	stringstream sout;
	sout << "toStringTriad\nfirst = " << getF() << "\tsecond = " << getS() << "\tthird = " << getT()<<endl;
	return sout.str();
}

void Triad::Display(Triad g,Triad f) const
{
	cout << g.toString() << endl;
	cout << f.toString() << endl;
}
bool Triad::Equals(Triad t1, Triad t2)
{
	if ((t1.first > t2.first || t1.first == t2.first) &&
		(t1.second > t2.second || t1.first == t2.first) &&
		t1.second == t2.second && t1.third > t2.third)
	{
		cout << "triad t1 > triad t2" << endl << endl;
		return true;
	}
	else
	{
		cout << "triad t1 < triad t2" << endl<<endl;
		return false;
	}
}
