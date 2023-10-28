#include<stdio.h>
int main()
{
	float x,y;
	char ch;
	printf("Enter first number\");
	scanf("%f",&x);
	printf("Enter second number\");
	scanf("%f",&y);	
	printf("Enter\+ for add\- for sub\* for multiply\/ for div\");
	scanf("\%c",&ch);
	switch(ch)
	{		
		case '+':
			printf("Add=%f",(x+y));
			break;
		case '-':
			printf("Sub=%f",(x-y));
			break;
		case '*':
			printf("Multiply=%f",(x*y));
			break;
		case '/':
			printf("Div=%f",(x/y));
			break;
		default:
			printf("Invalid input!!");
	}
}