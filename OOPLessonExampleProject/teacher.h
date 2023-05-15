#pragma once
#include "main.h"

class Teacher {

	string name;
	string surname;
	int age;
	int power;

public:
	Teacher();
	Teacher(string n, string sname, int a, int power);
	Teacher(string n, string sname);

	~Teacher();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_avg_mark();
	void set_avg_mark(float mark);

	void init(string n, string sname, int a, float mark);
	void init_default();
	string convert_to_string();
};
