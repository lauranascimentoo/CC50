#include <stdio.h>
#include <cc50.h>
#include <stdlib.h>
#include <math.h>

int main(int agrc, char* agrv[])
{
    //Main variables//
    int coin50 = 50;
    int coin25 = 25;
    int coin10 = 10;
    int coin05 = 05;
    int coin01 = 01;
    int change = 0;

    for(;;)
    {
        float count;
        printf("Hello visitor, how mutch change do you need?\n");
        float floatmoney = GetFloat();
        int integermoney = round(floatmoney * 100);

        for(count = integermoney; count >= coin50; count = (count - coin50))
        {
            integermoney = integermoney - coin50;
            change ++;
        }
        for(count = integermoney; count >= coin25; count = (count - coin25))
        {
            integermoney = integermoney - coin25;
            change ++;
        }
        for(count = integermoney; count >= coin10; count = (count - coin10))
        {
            integermoney = integermoney - coin10;
            change ++;
        }
 for(count = integermoney; count >= coin05; count = (count - coin05))
        {
            integermoney = integermoney - coin05;
            change ++;
        }
        for(count = integermoney; count >= coin01; count = (count - coin01))
        {
            integermoney = integermoney - coin01;
            change ++;
        }

         printf("I'll give you %i coin(s)!\n", change);

        return 0;
    }
}
