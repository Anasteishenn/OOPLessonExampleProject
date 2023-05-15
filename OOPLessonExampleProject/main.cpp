#include "manager.h"

int main() {
	Student st1("Ivan", "Ivanov", 14, 10);
	Student st2("Sidor", "Sidorov", 12, 5);
	Student st3("Garry", "Potter", 14, 9);
	Student st4("Leo", "Messi", 24, 8);

	Group group("P33022");
	group.add(st1);
	group.add(st2);
	group.add(st3);
	group.add(st4);

	cout << Manager::calculate_avg_mark(group) << endl;

	return 0;
}