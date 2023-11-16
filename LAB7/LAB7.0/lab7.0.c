#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define NSTUDENT 100

void randomlyFill(int [], int);
void displayGrades(int [], int);
int getMax(int [], int);
int getMin(int[], int);
float getAvg(int [], int);
float getStd(int[], int, float);
int main(void)

{
	int stdGrades [NSTUDENT];
	float avg;
	// after this function completes its execution
	// you should be asking yourself how changes made
	// in randomlyFill function become permenant on stdGrades
	// because i told you that when a variable passed to a function 
	// a copy is created and any change on the variable does not 
	// affect the original. but this is not the case with arrays.
	// we will talk about it more when we introduce pointers. for now,
	// know that arrays are passed by reference (address), which is call-by-reference,
	// and changes on them affect the original array.
	randomlyFill(stdGrades, NSTUDENT);
	displayGrades(stdGrades, NSTUDENT);
	printf("%d is the maximum grade\n", getMax(stdGrades, NSTUDENT ));
	printf("%d is the minimum grade\n", getMin(stdGrades, NSTUDENT ));
	printf("%f is the average: grade\n", avg=getAvg(stdGrades, NSTUDENT ));
	printf("%f is the standart deviation\n", getStd(stdGrades, NSTUDENT, avg ));
	return 0;
}

// since we will be dealing with 100 students
// it will be difficult for us to let the user enter 
// all those grades in the class (time consuming). 
// we are randomly assigning some values between 0 and 100

void randomlyFill(int stdGrades[], int nStudents)
{
	int i;
	// seed: value to intialize the rand function
	// we would like to get different values everytime
	// we run our program so the seed is time-dependent
	// we discuss what it means. if you weren't in the class
	// ask for help from your friends.
	srand(time(NULL));
	for(i = 0; i < nStudents; i++)
	{
		// rand functions generates a psuedo-random number
		// between 0 and RAND_MAX
		// pick a random number between 0 and 100
		stdGrades[i] = rand() % 101;
	}
}

void displayGrades(int stdGrades[], int nStudents)
{
	int i;
	for(i = 0; i < nStudents; i++)
	{
		// we are displaying i+1 for the user
		// the actual value we are dealing is indeed at i-th index
		printf("%d. student's grade is %d\n", i+1, stdGrades[i] );
	}
}

int getMax(int stdGrades[], int nStudents )
{
	// we haven't seen any values of array
	// therefore the value at 0th index (the first one)
	// is the current maximum for now
	int max = stdGrades[0];
	// loop variable
	int i;
	// we are starting from 1 because we have already assigned
	// stdGrades[0] to max so there is not need to check it
	for(i = 1; i < nStudents; i++)
	{
		// check if the maximum we have seen so far
		// is less than the i-th element of the array
		if(max < stdGrades[i])
		{
			// if so, it is the current maximum
			// we have seen so far
			max = stdGrades[i];
		}
	}
	// return the maximum number
	return max;
}



int getMin(int stdGrades[], int nStudents )
{
	
	int min = stdGrades[0];
	int i;
	
	for(i = 1; i < nStudents; i++)
	{
		
		if(min > stdGrades[i])
		{
			
			min = stdGrades[i];
		}
	}
	
	return min;
}



float getAvg(int stdGrades [], int nStudents )
{
int i;
float sum=0.0;
for ( i = 0; i < nStudents; i++)
{
	sum+=stdGrades[i];
}
float average = sum/nStudents;
return average;
}


float getStd(int stdGrades[], int nStudents, float average )
{
float sum=0.0;
int i;
for ( i = 0; i < nStudents; i++)
{
	float diff=stdGrades[i]-average;
	sum+=pow(diff,2);
}
float stdDeviation=sqrt(sum/nStudents);
return stdDeviation;
}


