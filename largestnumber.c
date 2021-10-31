
//simple c program to print largest number
#include<stdio.h>

int main()
{
    float a, b, c;

    printf("Enter 3 numbers:\n\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a >= b && a >= c)
    {
        // %.3f prints the floating number 
            //upto 3 decimal places
        
        printf("\nLargest number = %.3f ", a);
    }
    else if(b >= a && b >= c)
    {
        printf("\nLargest number is = %.3f", b);
    }
    else
    {
        printf("\nLargest number is = %.3f", c);
    }

    return 0;
}