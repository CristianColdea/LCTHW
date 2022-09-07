#include <stdio.h>

/*
Changing the for-loops to while-loops
*/

int main(int argc, char *argv[])
{
    //create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // setup pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;


    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    while (i < count) {
        // first way using indexing
        printf("%s has %d years alive.\n", names[i], ages[i]);
        i++;
    }
    
    // reset counter
    i = 0;

    printf("---\n");

    while (i < count) {
        // second way using pointers
        printf("%s is %d years old.\n",
                *(cur_name + i), *(cur_age + i));
        i++;
    }

    // reset counter
    i = 0;

    printf("---\n");

    while(i < count) {
        // third way, pointers are just arrays
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
        i++;
    }

    printf("---\n");

    cur_name = names;
    cur_age = ages;
    while((cur_age - ages) < count) {
        // fourth way with pointers in a stupid complex way
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
        cur_name++;
        cur_age++;
    }

    return 0;
}
