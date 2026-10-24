#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float hours;
    float payrate = 15;
    float pay;

    do
    {
        hours = get_float("How many hours did you work this week? ");
    }
    while (hours < 0 || hours > 100);

    if (hours <= 40)
    {
        pay = hours * payrate;
    }
    else
    {
        float overtime = hours - 40;
        pay = (40 * payrate) + (overtime * payrate * 1.5);
    }

    printf("Good work this week! Your pay is $%.2f\n", pay);
}