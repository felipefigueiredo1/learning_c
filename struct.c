#include <stdio.h>
#include <string.h>

struct Person{
	char sex;
	int  age;
	char name[60];
};

void main()
{
	struct Person person;
	int i;
    
	printf("Enter name: ");
	scanf("%s", person.name); // arg array => pointer to the first element, dont need &
	printf("Enter sex: ");
	scanf(" %c", &person.sex);
	printf("Enter age: ");
	scanf(" %d", &person.age);

	printf("Name: %s, Sex: %c\nAge: %d\n", person.name, person.sex, person.age);

	person.age = 32;

	printf("New age: %d", person.age);	
}
