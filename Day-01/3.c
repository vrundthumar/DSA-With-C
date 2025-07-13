// Write a program to demonstrate the use of arrays in C. The program should accept an array size n from the user, then take n integers as input and print them.

#include<stdio.h>

 void main() {
	 int n;
	 printf("Enter the size of the array: ");
	 scanf("%d",&n);
	 int arr[n];
	 printf("Enter %d integers: ",n);
	 for(int i = 0; i < n; i++){
		 scanf("%d",&arr[i]);
	 }
	 printf("You entered: ");
	 for (int i = 0; i < n; i++){
		 printf("%d ",arr[i]);
	 }
 }