#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int tip;
    int bill;
    do
    {
        bill = get_int("What is the bill? ");
        tip = get_int("Insert tip: ");

    }
    while (bill < 0 && tip < 0);
    int total = bill + bill * tip/100;
    printf("%i\n",total);

}
