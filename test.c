#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LIMIT 20

char ** populate (char ** words, FILE *fptr, int *currentsize, int *maxsize) {

char line [100];
int i;
int line_count;
int line_length;

line_count = 0;
while (fgets(line, sizeof(line), fptr) != NULL) {
line_count ++;
}
