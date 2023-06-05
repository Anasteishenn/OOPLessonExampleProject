#pragma once
#include "group.h"

class Manager {
public:
	static float calcStudentsAvgAge(Human** humans,int size);
	static float calcStudentsAvgMark(Group group);
	static Student findBestStudent(Group group);
	static Student findWorstStudent(Group group);
};