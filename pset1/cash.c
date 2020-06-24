#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    float dollars;
    do
    {
        dollars = get_float("Change owed in dollars: "); // asks user for input, only accepts positive number
    }
    while (dollars <= 0);

    int coins = 0;

    int cents = round(dollars * 100); // converts input into int

    // loop continius untill money becomes 0
    while (cents > 0)
    {
        // conditionals check for every type of coin, subtract that coin from the total change and add 1 to the total number of coins
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }

    printf("you are owed %i coins\n", coins);
}
