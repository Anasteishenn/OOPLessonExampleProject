#pragma once
#include "main.h"

class Doctor {

	int experience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, int experience, string skill);
	Doctor(string n, string sname);

	~Doctor();

	void get_experience();
	void set_experience(int exp);

	string get_skill();
	void set_skill(string sk);

	string convert_to_string();
};

