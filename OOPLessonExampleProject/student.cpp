#include "student.h"

float Student::get_avg_mark() {
	return avg_mark;
}

void Student::set_avg_mark(float mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		avg_mark = mark;
	}
}

// default-constructor (with no-args)
Student::Student() {
	//cout << "default-constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 16;
	avg_mark = 4;
}

// constructor with params (with args)
Student::Student(string n, string sname, int a, float mark) {
	cout << "constructor with params" << endl;
	set_name(n)
	set_surname(sname);
	set_age(a);
	avg_mark = mark;
}

Student::Student(string n, string sname) {
	//cout << "constructor with params" << endl;
	name = n;
	surname = sname;
}

Student::~Student() {
	//cout << "called Student destructor" << endl;
}

void Student::init(string n, string sname, int a, float mark) {
	name = n;
	surname = sname;
	age = a;
	avg_mark = mark;
}

void Student::init_default() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_mark = 0;
}

string Student::convert_to_string() {
	return get_name() + " " + get_surname() + " (age = " + to_string(get_age())
		+ ", average mark = " + to_string(avg_mark) + ")";
}