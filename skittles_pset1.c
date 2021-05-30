#include <stdio.h>
#include <stdlib.h>
#include <cc50.h>
#include <time.h>

int main(int argc, char* argv[])
{
    //pseudo-random number generator//
    srand(time(NULL));

    //to set the maximum value//
    int skittles = rand() % 1024;

    printf("Hi visitor, I'm the talking skittles machine. Can you guees how man>
    int skittlesmachine = GetInt();

    do
    {
        if(skittlesmachine > 1023 || skittlesmachine < 0)
        {
        printf("You are not even trying!! Go again:\n");
            skittlesmachine = GetInt();
        }
        else if ( skittlesmachine > 900 && skittlesmachine < 1000)
        {
            printf("You are really close! Try a higher number:\n");
            skittlesmachine = GetInt();
        }
        else
        {
            printf("Don't give up. Try again:\n");
            skittlesmachine = GetInt();
        }
    }
    while (skittlesmachine !=1000);

    printf("You guess it right! Congrats!\n");

    return 0;
}
