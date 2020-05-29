#include <stdio.h>
#include <cs50.h>

void create_bricks(int height);

int main(void)
{
    //Promp the user for a positive integer
    int height = get_int("Height: ");

    //Integer must be positive, and between 1 and 8
    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }

    create_bricks(height);
}

void create_bricks(int height)
{
    for (int i = 1; i <= height; i++)
    {
        //loop to print spaces
        for (int j = height - 1; j >= i; j--)
        {
            printf(" ");
        }

        //loop to print hashes
        for (int e = 1; e <= i; e++)
        {
            printf("#");
        }

        printf("  ");

        //loop to print second half
        for (int f = 1; f <= i; f++)
        {
            printf("#");
        }
        printf("\n");

    }
}
