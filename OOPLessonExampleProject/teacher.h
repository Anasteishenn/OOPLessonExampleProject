#pragma once
#include "human.h"

class Teacher : public Human
{
private:
	int power;

public:
	Teacher();
	Teacher(string n, string sname, int a, int power);
	Teacher(string n, string sname);

	~Teacher();

	int get_power();
	void set_power(int pow);

	string convert_to_string();
};
