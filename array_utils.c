/*
  Programmer's Name:William Turman, David Ho
  Date: 3/5/2020
  Description of the program: array.c
*/ 

#include<stdlib.h>
#include <stdio.h>
#include "array_utils.h"

int contains(const int *arr, int size, int x) {
	int i;
	
	for(i=0; i<size; i++) {
		if(x == arr[i]) {
			return 0;
		}
		if (x =! arr[i]) {
			return 1;
		}
	}
}

int containsWithin(const int *arr, int size, int x, int i, int j) {
	int k;
	
	if(i<=0 || j<=0 || size<=0) {
		return 1;
	for(k=i; k<j; k++) {
		if(x == arr[k]){
			return 0;
		}
		if (x =! arr[k]){ 
			return 1;
		}	
	}
	}
}

int * paddedCopy(const int *arr, int oldSize, int newSize) {
	
	int *newSizeArray = (int*)malloc(sizeof(int)*newSize);
	int i; 
	
	if(oldSize<newSize) {
		for(i=oldSize; i<newSize; i++) {
			newSizeArray[i] = 0;
			return 0;
		}
	}
	if(oldSize>newSize) {
		for(i=0; i<newSize; i++) {
			newSizeArray[i] = arr[i];
			return 0;
		}
	}
}

void reverse(int *arr, int size) {
	
	int *newArrayReverse = (int*)malloc(sizeof(int)*size);
	int i;
	
	for(i=0; i<size; i++) {
		newArrayReverse[size-1-i]=arr[i];
	}	
}

int * reverseCopy(const int *arr, int size) {
	
	int *newArrayReverseCopy = (int*)malloc(sizeof(int)*size);
	int i;
	
	for(i=0; i<size; i++) {
		newArrayReverseCopy[size-1-i]=arr[i];
	}
	return newArrayReverseCopy;
}









