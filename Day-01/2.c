// Write a C program to calculate the sum of the first n natural numbers using a loop.

#include<stdio.h>

int main() {
	int n,i;
	int sum = 0;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	for (i = 0; i <= n;i++){
		sum += i;
	}
		printf("%d\n", sum);
	return 0;
}