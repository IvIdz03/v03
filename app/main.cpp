#include "app.h"
#include <iostream>

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
using namespace std;
using namespace vsite::oop::v3;
int main()
{
	int n;
	cin >> n;
	results res(n);
	for (int i = 0; i < n; i++) {
		std::string name;
		int grade;
		cout << "name" << std::endl;
		cin >> name;
		cout << "grade" << std::endl;
		cin >> grade;
		res.add({ name, grade });
	};

	cout << "ocjena" << std::endl;
	unsigned int ocjena;
	cin >> ocjena;
	cout << res.has_grade(ocjena);
	cout << "slovo" << std::endl;
	char slovo;
	cin >> slovo;
	cout << res.starts_with_letter(slovo) << std::endl;
};