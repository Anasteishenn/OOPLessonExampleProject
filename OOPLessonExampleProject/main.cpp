#include "manager.h"
#include "doctor.h"

int main() {
	Human* h = new Human();
	Human* h1 = new Human();
	Human* h2 = new Human();

	h->name = "Alex";
	h->get_surname("");
	h->set_age(15);

	delete h;

	return 0;
}
