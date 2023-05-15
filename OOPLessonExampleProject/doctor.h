#pragma once
#include "main.h"

class Doctor {

	string name;
	string surname;
	int age;
	int experience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, int experience, string skill);
	Doctor(string n, string sname);

	~Doctor();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_avg_mark();
	void set_experience(int exp);

	string get_skill();
	void set_skill(string sk);

	string convert_to_string();
};

