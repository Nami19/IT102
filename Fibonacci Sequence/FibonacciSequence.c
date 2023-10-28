#include <stdio.h>

int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm;
    char choice;

    do
    {
        printf("Enter the number of terms: ");
        scanf("%d", &n);

       
        printf("Fibonacci Series: ");

        for (i = 1; i <= n; ++i)
        {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }

       
       
        printf("\nDo you want to retry? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    printf("Program Ended.");

    return 0;
}