#pragma once
#include "human.h"

class Student:public Human {
private:
	float avg_mark;

public:
	static const int MIN_AGE = 0;
	static const int MAX_AGE = 160;
	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;

	Student();
	Student(string n, string sname, int a, float mark);
	Student(string n, string sname);

	~Student();

	float get_avg_mark();
	void set_avg_mark(float mark);

	string convert_to_string();
};