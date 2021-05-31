#include <stdio.h>
#include <cc50.h>
#include <stdlib.h>

//to use strlen
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
   if(argc == 2 && isdigit(*argv[1]))
   {
        int key = atoi (argv[1]);

        printf("What do you want to encrypt?(Write something with less than 200>
        string text = GetString();
        printf("Here is your text:\n");

        for(int letter = 0, textsize = strlen(text); letter < textsize; letter++)
        {
            if(isupper(text[letter]))
            {
                //the 65 it's because of the chart ascii//
                printf("%c", (((text[letter] + key) - 65) % 26)+ 65);
            }
            else if(islower(text[letter]))
            {
                //the 97 it's because of the chart ascii//
                printf("%c", (((text[letter] + key) - 97) % 26) + 97);
            }
            else
            {
                printf("%c", text[letter]);
            }
        }
        printf("\n\n");
        return 0;
     }
     else
     {
        printf("Something is wrong. Try digiting ./caesar and a natural number\n");
        return 1;
     }
}





