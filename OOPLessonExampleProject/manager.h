#include "group.h"


class Manager {
public:
	static float calculate_avg_age(Group group);
	static Student find_best_student(Group group);
	static Student find_worst_student(Group group);

	static Group find_best_students(Group group);
	static Group find_worst_students(Group group);

	static float calculate_avg_mark(Group group);
};