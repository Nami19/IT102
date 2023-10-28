/*
Create a program that will ask the a number input from the user. It should be between 30 through 40.
Afterwards, check if the number is odd or even.
*/

#include<stdio.h>

int main()
{

int number= 0;

printf("Enter a number (30-40): ");
scanf("%d", &number);

    if(number<30, number>40)
    {
        printf("The number should be beetween 30 and 40");
    }
else
{
    if(number % 2 == 0)
    {
        printf("Number is odd. \n");
    }
    else
    {
        printf("Number is even.");
    }
}
return 0;
}