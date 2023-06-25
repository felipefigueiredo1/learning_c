#include <stdio.h>

void stringcat(char str[], char str_2[], char str_concat[]);
void insertchar(char str[], char str_concat[], int *j);

int main(void) {
	char str[100], str_2[100], str_concat[100];

	str[0] = 'F';
	str[1] = 'E';
	str_2[0] = 'L';
	str_2[1] = 'I';
	
	stringcat(str, str_2, str_concat);

	printf("%s", str_concat);

	return 0;
}


void stringcat(char str[], char str_2[], char str_concat[]) {
	int j = 0;
	insertchar(str, str_concat, &j);
	insertchar(str_2, str_concat, &j);
}


void insertchar(char str[], char str_concat[], int *j) {
	int i = 0;
	while(str[i] != '\0'){
		str_concat[*j] = str[i];
		i++;
		(*j)++; // parentheses becaus ++ have precedence in pointer, which will increment pointer position than pointer value, so (*j)++ will increment the value
	}
}
