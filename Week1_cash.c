#include <stdio.h>
#include <cs50.h>
#include <math.h>

int number_of_coins(int money_owed);
int dollars_to_cents(float cents);

int main(void)
{
    int coins = 0;

    float money_owed = get_float("Change owed: ");

    while (money_owed < 0)
    {
        //If the user fails to provide a non-negative value,
        //re-prompt the user for a valid amount again and again until the user complies.
        money_owed = get_float("Change owed: ");
    }

    //Convert dollars to cents and round
    int cents = dollars_to_cents(money_owed);

    //Get minimum number of coins
    coins = number_of_coins(cents);

    //Print number of coins
    printf("%i\n", coins);
}

int number_of_coins(int money_owed)
{
    int nr_of_coins = 0;
    int number_of_coins = 0;
    // Coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)
    // Calculate minimum amount of coins

    for (nr_of_coins = 0; money_owed >= 25; nr_of_coins++)
    {
        money_owed = money_owed - 25;
        number_of_coins++;
    }

    for (nr_of_coins = 0; money_owed >= 10; nr_of_coins++)
    {
        money_owed = money_owed - 10;
        number_of_coins++;
    }
    for (nr_of_coins = 0; money_owed >= 5; nr_of_coins++)
    {
        money_owed = money_owed - 5;
        number_of_coins++;
    }
    for (nr_of_coins = 0; money_owed >= 1; nr_of_coins++)
    {
        money_owed = money_owed - 1;
        number_of_coins++;
    }

    return number_of_coins;
}

int dollars_to_cents(float dollars)
{
    //Convert dollars to cents
    int cents = round(dollars * 100);

    return cents;
}