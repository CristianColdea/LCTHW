#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    // the name of the script is at first position in argv
    // for (i = 1; i < argc; i++)
    // use the comma operator within the for loop header
    for (i = 0; i<(i++, argc);) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    // let's make our own array of strings
    char *states[] = {
         "California", "Oregon",
         "Washington", "Texas"
    };

    int num_states = 4;
    // use the commma operator again
    for (i = -1; i < (i++, num_states);) {
         printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
