#include <cs50.h>
#include <stdio.h>
int main(void)
    {
        float celsius,fahrenheit;
        
        do 
        {
            celsius = get_float("Celcius = ");
        }
        while (celsius < -273.15);
        fahrenheit = (celsius * 9.0 / 5.0)+ 32.0;
        printf("Fahrenheit: %.1f\n", fahrenheit);
    }