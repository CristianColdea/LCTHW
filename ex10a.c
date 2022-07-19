#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how to abort a program
        return 1;
    }

/*
Using math on the letter to convert all letters to lowercase.
*/

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        //char letter = ',';  initialize letter with commma
        char letter = argv[1][i];
        
        if ((letter >= 65) && (letter <= 90)) {
            letter = letter + 32;
            printf("%c is lowercased\n", letter);
        }
        
        switch (letter) {
            case 'a':
            //case 'A':
                printf("%d: 'a'\n", i);
                break;
            
            case 'e':
            //case 'E':
                printf("%d: 'e'\n", i);
                break;

            case 'i':
            //case 'I':
                printf("%d: 'i'\n", i);
                break;

            case 'o':
            //case 'O':
                printf("%d: 'o'\n", i);
                break;

            case 'u':
            //case 'U':
                printf("%d: 'u'\n", i);
                break;

            case 'y':
            //case 'Y':
                // why i > 2? is this a bug?
                if (i > 2) {
                    // it's only sometimes Y
                printf("%d: 'y'\n", i);
                //break;
                }
               break;

            default:
                printf("%d: %c is  not a vowel\n", i, letter);
                //printf("%d is ascii\n", letter);
        }
    }

    return 0;
}
