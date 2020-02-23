/*
 ============================================================================
 Name        : Recurive_factorial.c
 Author      : Dhirendra Tiwari
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial program by recurssion in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact();

int main()
{
    int result,n;
    printf("Enter no. to find its factorial : ");
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial of %d is : %d",n,result);
    return 0;
}

int fact(int n)
{
   int r;
   if(n<=0)
    return 1;
   r = n * fact(n-1);
   return r;

   return EXIT_SUCCESS;
}

