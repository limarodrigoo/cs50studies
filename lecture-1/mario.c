#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);
int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i >= size - (j + 1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}