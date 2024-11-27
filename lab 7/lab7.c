#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "../include/myheader.h"
#include "../utils/utils.h"

#define MY_ARRAY_SIZE 10
void set_random_values( int val[], const int n, const int low, const int high);
void print_values_tag( const char *tag, const int m[], const int high);
/*
* Programmer Name:Colden Jeanmnonod
*Lab Name: METADATA
* Date: OCT 17: 2023
* DUE DATE NOV 1 2023
* Assingment: lab7
* Class and Semester: CIS:1057 section: 004
*/
void main  ()
{

program_identification(7, "metadata", "This Lab will print out the random values: ");
int main_array[MY_ARRAY_SIZE];

		srandom( time(NULL) );

 set_random_values( main_array, MY_ARRAY_SIZE, -5, 15);
print_values_tag( "Main Array:", main_array, 15); 

}


void set_random_values( int val[], const int n, const int low, const int high){
	int range = high - low;

	for(int i = 0; i < n; i++){
		

	  	val[i] = (( random()% range)  + low);

	}	
}

void print_values_tag( const char *tag, const int m[], const int high){

		for (int i = 0;  i < MY_ARRAY_SIZE; i ++){
			printf( "%s %d \n",tag,  m[i]);
		}

}
