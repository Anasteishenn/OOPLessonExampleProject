#pragma once
#include "main.h"

class Human
{
private:
	string name;
	string surname;
	int age;

public:
	static const int MIN_AGE = 0;
	static const int MAX_AGE = 160;

	Human() :name("no name"), surname("no surname"), age(16) {}

	Human(string name, string surname, int age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	Human(string name, string surname)
		: name(name), surname(surname) {}

	~Human();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
};
