#ifndef FACULTY_H_
#define FACULTY_H_

#include <string>
using namespace std;


class Faculty {
public:
	string name;
	int id;

	void teach();
	void advise();
};

#endif