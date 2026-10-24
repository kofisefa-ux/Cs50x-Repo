#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int a = get_int("Input your number ");
    if (a < 0)
    {
        printf("Your number is negative!\n");
    }
    else if (a > 0)
    {
        printf("Your number is positive!\n");
    }
    else
    {
        printf("Your number is neutral!\n");
    }
}
