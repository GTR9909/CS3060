//Heber Allred
//CS3060-001 Spring 2015
//Assignment #1
/*Promise of Originality
I promise that this source code file has, in it;s entirety, been
written by myself and by no other person or persons. If at any time an
copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted the copy will receive a zero on this assignment.
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{	
	int lineamount = 0;
	printf("Assignment 1 by Heber Allred\n");
	printf("This program prints lines and tells the amount\n");
	while(argc--)
	{
		printf("Argument #%i: %s\n", lineamount, *argv++);
		lineamount++;
	}
	printf("Number of Arguments: %i\n", lineamount);
	exit(EXIT_SUCCESS);
}
