#include <cs50.h>
#include <stdio.h>
int main(void)
{
   printf("========================================\n");
printf("  CHALLENGE: Make (a + b) * (c + d) = 50\n");
printf("========================================\n\n");
    int a = get_int("What is a? ");
    int b = get_int("What is b? ");
    int c = get_int("What is c? ");
    int d = get_int("What is d? ");
    int ans = (a + b) * (c + d); 
    if (ans == 50)
    {
        printf("CORRECT!.ANSWER = %i\n",ans);
    }
    else
    {
        printf("WRONG!.ANSWER = %i\n",ans);
    }
}