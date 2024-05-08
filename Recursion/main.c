#include <stdio.h>
#include <stdlib.h>

int print0(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    printf("%d", nb + print0(nb - 1));
    nb --;
    return (nb);
}

void print1(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0)
    {
        print1(nb);
    }
}

void print2(int nb)
{
    if (nb < 0)
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print2(nb);
}

void print3(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10)
    {
        print3(nb);
    }
}

void print4(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0)
    {
        print4(nb);
    }
}

int main(void)
{
    print0(4);
    printf("\n");
    print1(4);
    printf("\n");
    print2(4);
    printf("\n");
    print3(4);
    printf("\n");
    print4(2);
    printf("\n");
    return (0);
}
