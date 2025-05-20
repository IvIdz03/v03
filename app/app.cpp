#include "app.h"
#include <algorithm>
#include <string>

namespace vsite::oop::v3
{
	results::results(unsigned int c) {
		students = new student[c];
		cap = c;
	}

	results::~results() {
		delete[] students;
		students = nullptr;
	}

	void results::add(student s) {
		if (size < cap) {
			students[size++] = s;
		}
	}

	unsigned int results::has_grade(unsigned int g) {
		unsigned int count = 0;
		for (unsigned int i = 0; i < size; ++i) {
			if (students[i].grade == g) {
				++count;
			}
		}
		return count;
	}

	unsigned int results::starts_with_letter(char l) {
		unsigned int count = 0;
		for (unsigned int i = 0; i < size; ++i) {
			if (tolower(students[i].name[0]) == tolower(l)) {
				++count;
			}
		}
		return count;
	}

	array::array(unsigned int size, double value) : cap(size) {
		arr = new double[cap];
		for (unsigned int i = 0; i < cap; ++i) {
			arr[i] = value;
		}
	}

	unsigned int array::size() {
		return cap;
	}

	double array::at(unsigned int i) {
		if (i < cap) {
			return arr[i];
		}
		return 0;
	}

	void array::push_back(double v) {
		unsigned int new_cap = cap + 1;
		double* new_arr = new double[new_cap];
		for (unsigned int i = 0; i < cap; ++i) {
			new_arr[i] = arr[i];
		}
		new_arr[cap] = v;
		delete[] arr;
		arr = new_arr;
		cap = new_cap;
	}

	array::array(array&& other) : arr(other.arr), cap(other.cap) {
		other.arr = nullptr;
		other.cap = 0;
	}

	array::array(const array& other) : cap(other.cap) {
		arr = new double[cap];
		for (unsigned int i = 0; i < cap; ++i) {
			arr[i] = other.arr[i];
		}
	}

	array::~array() {
		delete[] arr;
	}
}
