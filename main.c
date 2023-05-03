#include<stdio.h>

void main() {
	int x = 10, d = 30;
	int numbers[5] = {10, 20, 30, 40, 50};
	int dnumbers[5];
	int i;
	x = 20;
	d = x;
	printf("Heyyy, %d, %d", x, d);
	for(i =0 ; i < 5; i++) {
		dnumbers[i] = numbers[i];
	}
	printf("\n");
	for(i = 0;i < 5; i++) {
		numbers[i] = i * 2;
		if(i > 1){
			printf(", %d", numbers[i]);
		} else {
			printf(" %d", numbers[i]);
		}
	
	}
	printf("\n");
	for(i = 0;i < 5; i++) {
		if(i > 1){
			printf(", %d", dnumbers[i]);
		} else {
			printf(" %d", dnumbers[i]);
		}
	}
		
}
