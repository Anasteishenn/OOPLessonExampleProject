#pragma once
#include "main.h"

class Human
{
private:

public:
	string name;
	string surname;
	int age;

	Human();
	Human(string nm, string surnm, int a);
	~Human();

	static void test() {

	}

	string getName();
	void setName(string n);
	string getSurname();
	void setSurname(string n);
	int getAge();
	void setAge(int a);

	string convert();
};
