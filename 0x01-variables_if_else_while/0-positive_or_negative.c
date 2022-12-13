#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/* more headers goes there */

/**
 * main - print random number and state whether the number stored in the variable n is positiv,  negative or zero.
 *
 * Return: always 0
*/
/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

     				if(n >o){
				        printf("%d is positive\n", n)
				}
				else if(n < 0){
					{       printf("%D is negative\n", n)
					}
		           	 else()
				 {	         printf("%d is zero\n",n)
				}
			 	 return (0);

}
