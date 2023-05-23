#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Quarters: %i\n Dimes: %i\n Nickels: %i\n Pennies: %i\n", quarters, dimes, nickels, pennies);
}

int get_cents(void)
{
 int cents;
    do
    {
      cents = get_int("Number of cents using: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
   int quarters = 0;
for(int i = cents; i > 24; i -= 25)
   {
     quarters = quarters + 1;

   }
    return quarters;
}

int calculate_dimes(int cents)
{
int dimes = 0;
   for( int i = cents; i > 9; i -= 10)
   {
     dimes = dimes + 1;
   }
    return dimes;
}

int calculate_nickels(int cents)
{
  int nickels = 0;
   for( int i = cents; i > 4; i -= 5)
   {
     nickels = nickels + 1;
   }
    return nickels;
}

int calculate_pennies(int cents)
{
  int pennies = 0;
   for( int i = c./ents; i > 0; i -= 1)
   {
     pennies = pennies + 1;
   }
    return pennies;
}