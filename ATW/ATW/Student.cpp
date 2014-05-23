#include "Student.h"

int Student::IDPool = 0;

void Student::SetIDPool(int id_seed) {
	IDPool = id_seed;
}

Student::Student() {
	id = IDPool++;
}

void Student::study() {}

void Student::dohomework() {}

bool Student::registerclass(string name) { return true; }

bool Student::changeadvisor(string name) { return true; }