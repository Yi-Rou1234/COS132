#ifndef TEST_DOG_H
#define TEST_DOG_H

#include <string>
using namespace std;

class Dog {

    private:
        string Name;
        int Age;
	public:
		Dog();
		~Dog();
		const string &getName() const;
		void setName(const string &name);
		int getAge() const;
		void setAge(int age);
};

#endif //TEST_DOG_H
