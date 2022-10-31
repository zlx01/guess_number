#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand((unsigned)time(NULL));
    int secretNumber = rand() % 100 + 1;
    int number = -1;
    while (1)
    {
        printf("Guess a number: ");
        scanf("%d", &number);
        if (number == secretNumber)
        {
            printf("Congratulations!\n");
            break;
        }
        else if (number < secretNumber)
        {
            printf("Too small!\n");
        }
        else
        {
            printf("Too big!\n");
        }
    }
    return 0;
}