#pragma once
#include "human.h"

class Doctor : public Human
{
private:
	int experience;
	string skill;

public:
	Doctor() :experience(0), skill("no skills") {}

	Doctor(string name, string surname, int age, int experience, string skill)
		: Human(name, surname, age), experience(experience), skill(skill) {}

	Doctor(string name, string surname) : Human(name, surname) {}

	~Doctor();

	int get_experience();
	void set_experience(int exp);

	string get_skill();
	void set_skill(string sk);

	string convert_to_string();
};

