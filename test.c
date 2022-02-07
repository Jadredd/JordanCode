#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIMIT 20






char ** doubleIt(char **arr, int *maxsize) {

	char ** temp = NULL; // Create a temp, array of pointers
	int i;
	temp = (char **) malloc(*maxsize * 2 * sizeof(char)); //assign double the allocated memory to the temp array of pointers

	for (i = 0; i < *maxsize; i++) {// copy the contents of the passed array of pointers to the temp array of pointers
		temp[i] = arr[i];
	}

	*maxsize *=2; //Double value in maxsize pointer

	free(arr);//free the passed array
	return temp;//return the larger array
}