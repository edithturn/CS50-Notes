#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;

    do
    {
        start_size = get_int("Write start size:");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("Write end size:");
    }
    while (end_size < start_size);

    int years = 0;
    int population = start_size;

    for (years = 0; population < end_size; years++)
    {
        population = population + population / 3 - population / 4;
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}