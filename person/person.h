#ifndef _PERSON_H_
#define _PERSON_H_

class Person{
	public :
		Person();
		Person(int myage, char *myname);
		Person(const Person &a);
		Person& operator=(const Person& other);
		~Person(void);

		void set_age(int myage);
		int get_age(void) const;
		void set_other_age(Person &a, int b);
		void print() const;

	private:
		int age;
		char *name;
};

#endif
