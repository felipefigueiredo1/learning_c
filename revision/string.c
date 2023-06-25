#include <stdio.h>

int stringlen(char str[]);
void stringcopy(char str[], char str_2[]);

int main(void) {
	char str[100];
	str[0] = 'B';
	str[1] = 'C';
	str[2] = 'D';
	
	char str_2[100];

	printf("char: %c, address: %p\nsizeof: %lu\n", str[0], &str[0], sizeof(str[0]));	

	printf("Tamanho da string: %d\n", stringlen(str));

	stringcopy(str, str_2);

	printf("%s", str_2);

	return 0;
}

int stringlen(char str[]) {
	int length = 0;
	while(str[length] != '\0') // the end of char array is always \0
		length++;
	
	return length;
}

void stringcopy(char str[], char str_2[]) {
	int i = 0;
	while(str[i] != '\0') {
		str_2[i] = str[i]; // pass values in the same index of both arrays
		i++;
	}
}
