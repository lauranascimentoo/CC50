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
        printf("What do you want to encrypt?\n");
        char* text = GetString();
        printf("Here is your text:\n");

        //ERRADO
        for(int letter = 0, textsize = strlen(text) ; letter < textsize ; lett>
        {
            if(text[letter] >= 'A' && text[letter] <= 'Z')
            {
                printf("%c\n", (text[letter] = (text[letter] + key) % 26);
            }
            else if(text[letter] >= 'a' && text[letter] <= 'z')
            {
                printf("%c\n", (text[letter] = (text[letter] + key) % 26);
            }
            else
            {
                printf("%c\n", text[letter]);
            }
        }
    }
    
    else
    {
        printf("Something is wrong. Try again.\n");
    }
    return 0;
}




