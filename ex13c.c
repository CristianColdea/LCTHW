#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // assigning an element from states to the argv array
    // let's make our own array of strings
    char *states[] = {
         "California", "Oregon",
         "Washington", "Texas"
    };

    argv[1] = states[0];

    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    // assigning the first cmdline arg, not the script, to first element
    // of the states array

    states[0] = argv[1];
    int num_states = 4;

    for (i = 0; i < num_states; i++) {
         printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
