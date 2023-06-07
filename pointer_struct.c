#include <stdio.h>

struct Person {
	char name[64];
	int age;
};

void updateStruct(struct Person *p, int age)
{
	p->age = age; // access struct property by pointer
}

void main(int argc, char **argv)
{
	struct Person lowlevellearning; // instanceof Person
	updateStruct(&lowlevellearning, 100); // pass varaible address
	printf("%d", lowlevellearning.age); // access struct property by value
}
