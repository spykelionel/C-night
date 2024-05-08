#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum names
    {
        Foluke = 10
    };
    //names F = 10
    int userGuess;
    scanf("%d", &userGuess);

    switch(userGuess)
    {
    case Foluke:
    {
        printf("Good");
        break;
    }
    default:
        printf("Wrong");

    }
    return 0;
}
