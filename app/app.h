#pragma once
#include <string>

namespace vsite::oop::v3
{
	struct student {
		std::string name;
		int grade;
	};

	class results {
	public:
		unsigned int cap = 0;
		unsigned int size = 0;
		student* students = nullptr;
		results(unsigned int c);
		void add(student s);
		unsigned int has_grade(unsigned int g);
		unsigned int starts_with_letter(char i);
		~results();
	};

	class array {
	private:
		unsigned int cap;
		double* arr = nullptr;


	public:
		array() = default;
		array(const unsigned int size, const double value);
		unsigned int size();
		double at(const unsigned int i = 0);
		void push_back(double v);
		array(array&& other);
		array(const array& other);
		~array();
	};
};