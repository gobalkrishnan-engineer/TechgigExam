/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define M_IN 100
int main(int argc, char *a[])
{
    char value[M_IN] = "";  // To read input
	double temp; // To store numeric value of input if number (float or integer)
	int n; // To store integer value of input
	char str[M_IN] = "" ; // To store string value of input
    double val = 1e-12; //Precision for integer checking
	fgets(value,100,stdin); // Read input

	if(sscanf(value,"%lf",&temp)==1){
		n = (int)temp; // typecast to int
		if(fabs(temp-n)/temp>val)
		   printf("This input is of type Float.\n");
		else
		   printf("This input is of type Integer.\n");   
	}
	else if(sscanf(value,"%s",str)==1)
	     printf("This input is of type string.");
	else 
	    printf("This is something else.");	 
   
	return 0;
}


/*
Exploring Data Types (100 Marks)
For this challenge, you need to read a line from stdin and check whether it is of type integer, float or string.
If input is-
    Integer print 'This input is of type Integer.' to the stdout
    Float print 'This input is of type Float.' to the stdout
    String print 'This input is of type string.' to the stdout
    else print 'This is something else.' to the stdout.

Input Format
A single line to be taken as input as save it to a variable(name of your choice). 

Constraints
1 < |s| < 10000

Output Format
Print the text according to the data type you get as an input. 
'''
Input  = -32767
Output = This input is of type Integer.
**/
