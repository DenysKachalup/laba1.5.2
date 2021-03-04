/////////////////////////////////
////  Triad.h
#include<sstream>
#include<string>
#pragma once

using namespace std;

class Triad
{
private:
	int first, second, third;
public:
	void setF(int value);
	void setS(int value);
	void setT(int value);
	int getF() const { return first; }
	int getS() const { return second; }
	int getT() const { return third; }

	string toString() const;
	bool Equals(Triad t1, Triad t2);
	void Init(int value1, int value2, int value3);
	void Read();
	void Display(Triad g, Triad f) const;

};


