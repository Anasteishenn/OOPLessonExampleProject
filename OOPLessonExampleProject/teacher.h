#pragma once
#include "main.h"

class Teacher {

	int power;

public:
	Teacher();
	Teacher(string n, string sname, int a, int power);
	Teacher(string n, string sname);

	~Teacher();

	void set_avg_mark(float mark);

	string convert_to_string();
};
