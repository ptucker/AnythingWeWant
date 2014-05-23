#ifndef STUDENT_H_
#define STUDENT_H_

#include "Faculty.h"
#include <string>
using namespace std;

class Student {
private:
	static int IDPool;

	int id;
	string name;

public:
	static void SetIDPool(int id_seed);

	Student();

	Faculty advisor;

	int getID() { return id; }

	void study();
	void dohomework();
	bool registerclass(string name);
	bool changeadvisor(string name);
};

#endif