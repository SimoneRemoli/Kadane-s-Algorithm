#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>

/*
	Kadane's Algorithm is a dynamic programming algorithm used to solve the maximum subarray problem. 
	The maximum subarray problem is the task of finding the contiguous subarray within a one-dimensional
	array of numbers that has the largest sum. The subarray can be of any length, including the entire array.

	Author: Simone Remoli
	Programming: Kadane's Algorithm
*/

#define N 13
void kadane(int*,int*,int*);
int main(int argc, char **argv)
{
	int ptr[N] = {1,3,4,-8,2,3,-1,3,4,-3,10,-3,2};
	for(int i=0;i<N;i++) printf(" %d ", ptr[i]);
	int start=0, end=0;
	int **pointer = malloc(2*sizeof(int*));
	pointer[0] = &start;
	pointer[1] = &end;
	void (*ptrf)(int*,int*,int*);
	ptrf = kadane;
	(*ptrf)(ptr,&start,&end);
	puts(" ");
	printf("Start Index = %d \n", *(pointer[0]));
	printf("Last Index = %d \n", *(pointer[1]));
	printf("\t Maximum subarray : \n ");
	for(int i=*(pointer[0]);i<*(pointer[1])+1;i++) printf(" %d ", ptr[i]);
	printf("\n");
	return 0;
}
void kadane(int *ptr, int *start, int *end)
{
	int maxsofar = 0;
	int maxhere = 0;
	int last = 0;
	for(int i=0;i<N;i++)
	{
		maxhere = maxhere + *(ptr + i);
		if(maxhere<=0)
		{
			maxhere = 0;
			last = i + 1;
		}
		if(maxhere>maxsofar)
		{
			maxsofar = maxhere;
			*start = last;
			*end = i;
		}
	}
}