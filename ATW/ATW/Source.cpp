#include <iostream>
#include <string>
#include "Faculty.h"
#include "Student.h"
using namespace std;

int main() {
	Student mary;
	Faculty beck;

	mary.name = "Mary";
	mary.id = 12345;
	cout << mary.name << endl;
}