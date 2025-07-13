// Write a C program that takes n integers as input into an array and finds the maximum element in the array.

#include<stdio.h>

	int main() {
	int i, n, max;
	int arr[1000];
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	printf("Enter %d integers: ",n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < n; i++){
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("Maximum element: %d\n", max);
	return 0;
	}