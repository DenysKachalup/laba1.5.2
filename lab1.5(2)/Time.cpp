/////////////////////////////////
////  Time.cpp
#include<sstream>
#include<string>
#include "Time.h"
#include<iostream>	
#include "Triad.h"

using namespace std;

void Time::setF(int value)
{
	triad.setF(value);
}

void Time::setS(int value)
{
	triad.setS(value);
}

void Time::setT(int value)
{
	triad.setT(value);
}

void Time::Init1(int value1, int value2, int value3)
{
	setF(value1);
	setS(value2);
	setT(value3);
}
void Time::Read()
{
	int value1, value2, value3;

	cout << "Hour: "; cin >> value1;
	cout << "Minute: "; cin >> value2;
	cout << "Seconds: "; cin >> value3;
	cout << endl;

	Init1(value1, value2, value3);
}
string Time::toString1() const
{
	stringstream sout;
	sout << getF() << "god " << getS() << "hv " << getT() << "s \t\t" << getF() << " : "
		<< getS() << " : " << getT() << endl;
	return sout.str();
}
void Time::Display() const
{
	cout << toString1() << endl;
}

bool Time::Equal()
{
	if ((triad.getF() >= 0 && triad.getF() <= 23) &&
		(triad.getS() >= 0 && triad.getS() <= 59) && (triad.getT() >= 0 && triad.getT() <= 59))
		return true;
	else
		return false;
}

