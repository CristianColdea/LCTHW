#include <stdio.h>

/*
access argv through pointer
*/
int main(int argc, char *argv[])
{
    // setup a pointer to the argv
    char **argv_p = argv;

    // output argv elements to the console, except the script name

    int i;
    for (i = 1; i < argc; i++) {
        printf("%s is %d argument.\n",
                *(argv_p+ i), i);
    }

    return 0;
}
