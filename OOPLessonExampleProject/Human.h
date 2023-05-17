#pragma once
#include "main.h"

class Human
{
private:
	string name;
	string surname;
	int age;

public:

	Human();
	Human(string n, string sname, int a) : name(n), surname(sname), age(a) {

	}
	Human(string n, string sname);

	~Human();

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

