#include <stdio.h>
#include <string.h>

/*
Using NULL in states array elements
*/

int main(int argc, char *argv[])
{
    int len;
    
    char *states[] = {
        "California\0", "Oregon\0",
        "Washington\0", "Texas\0"
    };
    
    len = strlen(states[0]);
    printf("the lenght of %s is: %d\n", states[0], len);
    // the NULL character is not counted by the strlen function
    
    int l;
    l = sizeof(states) / sizeof(states[0]);

    int i = 0;
    int j = 0;

    for (i = 0; i < l; i++) {
        printf("current string %s: \n", states[i]);
        len = strlen(states[i]);
        // setting the limits beyond lenght on purpose
        for (j = 0; j < (len + 1);j++) {
            if (states[i][j] != 0) {
                printf("current letter %c: \n", states[i][j]);
            } else {
                printf("The NULL has been hit!\n");
            }
        }
    }

    return 0;
}
