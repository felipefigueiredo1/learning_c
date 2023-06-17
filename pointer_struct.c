#include <stdio.h>

struct Person { // works like a class, instanced like object
	char name[64];
	int age;
};

void updatePerson(struct Person *p, int age, char name[])
{
	int i;
	p->age  = age; // access struct property by pointer
	for(i = 0; i < 64; i++) p->name[i] = name[i];
}

void main(int argc, char **argv)
{
	int i;
	int j;

	for(j = 1; j < argc; j++) 
		printf("%s", argv[j]);

	struct Person lowlevellearning; 							// instanceof Person
	updatePerson(&lowlevellearning, 100, "Felip"); 	// pass varaible address
	printf("%d\n", lowlevellearning.age); 						// access struct property by value
	for(i = 0; i < 64; i++) printf("%c", lowlevellearning.name[i]);
	printf("\n");
}
