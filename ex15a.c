#include <stdio.h>
#include <stdlib.h>

/*
Rewriting all of the arrays as pointers
and all the pointers as arrays
*/

int main(int argc, char *argv[])
{
    /*
    first arrays rewritten as pointers
    */
    //create two pointers we care about
    int *ages = malloc(sizeof(ages[0]) * 5);
    ages[0] = 23;
    ages[1] = 43;
    ages[2] = 12;
    ages[3] = 89;
    ages[4] = 2;

    char **names = malloc(sizeof(names[1]) * 5);
    names[0] = "Alan";
    names[1] = "Frank";
    names[2] = "Mary";
    names[3] = "John";
    names[4] = "Lisa";

    int i = 0;

    for(i = 0; i < 5; i++) {
        printf("%s is %d years old.\n", *(names + i), *(ages + i));
    }

    printf("---\n");
    for(i = 0; i < 5; i++) {
        printf("%s is still %d years old.\n", names[i], ages[i]);
    }

    printf("---\n");
    /*
    create two arrays from the above pointers (pointers rewritten as arrays)
    */

    int a_ages[5];
    char *a_names[5];

    for(i = 0; i < 5; i++) {
        a_ages[i] = *(ages + i);
        a_names[i] = *(names + i);
        printf("%d \n", a_ages[i]);
        printf("%s \n", a_names[i]);
    }

    for(i = 0; i < 5; i++) {
        printf("%s is %d years old so far.\n", a_names[i], a_ages[i]);
    }

    free(ages);
    free(names);
       
    return 0;
}
