/////////////////////////////////
////  Time.h
#pragma once
#include<sstream>
#include<string> 

using namespace std;

#include "Triad.h"
class Time
{
private:
	Triad triad;
public:
	int getF() const { return triad.getF(); }
	int getS() const { return triad.getS(); }
	int getT() const { return triad.getT(); }
	void setF(int value);
	void setS(int value);
	void setT(int value);

	string toString1() const;
	bool Equal();
	void Init1(int value1, int value2, int value3);
	void Read();
	void Display() const;
};
