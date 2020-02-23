/*
 ============================================================================
 Name        : C3LE7.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : to find prime numbers in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,n;
	printf(" Enter nth term to find prime no. ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{

		if(i % 2 == 0)
			printf("Even no.s are :  %d \n",i);
		if(i % 2 != 0)
			printf("Odd no.s are :  %d ",i);
	}
	
	
return 0;
}
