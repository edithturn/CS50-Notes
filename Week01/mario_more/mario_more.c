#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int count;
    // Ask to the use for a height
    do
    {
        height = get_int("Type height : ");
    }
    while (height > 8 || height <= 0);
    // Printing the rows
    for (int row = 0; row < height; row++)
    {
        count = row + 1;
        // Printing the spaces
        while (height - count > 0)
        {
            printf("%c", ' ');
            count++;
        }
        count = row + 1;
        // Printing the hash, this is coming down to print the hashes from one to the maximum (max)
        while (count > 0)
        {
            printf("%c", '#');
            count--;
        }
        // Print the end line at the end of the row
        printf("%s", "  ");
        count = row + 1;
        // Printing the hash, this increase to print the hashes from one to the maximum (max)
        while (count > 0)
        {
            printf("%c", '#');
            count--;
        }
        printf("%c", '\n');
    }

}
