#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asking name to the user
    string name = get_string("Give your name:");
    printf("hello, %s", name);
}