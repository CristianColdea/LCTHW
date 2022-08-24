#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go through each string in argv
    // why am I skipping argv[0]?
    // the name of the script is at first position in argv
    // cheking argc value
    printf("%i\n", argc); 
    // initializing i to 0
    for (i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    // let's make our own array of strings
    char *states[] = {
         "California", "Oregon",
         "Washington", "Texas"
    };

    //int num_states = 7;
    // print the states len
    int l = 0;
    l = sizeof(states) / sizeof(states[0]);
    printf("%i\n", l);

    for (i = 0; i < l; i++) {
         printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
