#include <stdio.h>
#include <ctype.h>

// forward declarations
//int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    // adding 1 to argc so the counter goes past the end of argv array
    // and is resulting in a 'segmentation fault' error
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

// reworking 'print_letters' function so we don't need 'can_print_it' anymore
void print_letters(char arg[])
{
    int i = 0;

    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if (isalpha((int)ch) || isblank((int)ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

/*
int can_print_it(char ch)
{
    return isalpha((int)ch) || isblank((int)ch);
}
*/

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
