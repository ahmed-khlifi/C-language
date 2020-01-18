#include <stdio.h>
#include <cs50.h>
#include <math.h>
// this program created during sloving problems in CS50 from harvard university
// this program take an amont and give the minimal number of change for it 50 10 5 1
int main(void)
{
    int coins = 0; // number of coins counter
    // get the cash
    float cashn = get_float("Change owed: ");
    int cash = round(cashn * 100);
    // check quarters
    while (cash > 0)
    {
        cash -= 25;
        coins++;
    }
    if (cash < 0)
    {
        cash += 25;
        coins--;
    }
    // check dimes
    while (cash > 0)
    {
        cash -= 10;
        coins++;
    }
    if (cash < 0)
    {
        cash += 10;
        coins--;
    }
    // check nickels
    while (cash > 0)
    {
        cash -= 5;
        coins++;
    }
    if (cash < 0)
    {
        cash += 5;
        coins--;
    }
    // check pennies
    while (cash > 0)
    {
        cash -= 1;
        coins++;
    }
    if (cash < 0)
    {
        cash += 1;
        coins--;
    }
    
    printf("%d\n", coins);
}
