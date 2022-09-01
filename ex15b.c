#include <stdio.h>

/*
Rewriting the loops of ex15 so they start at the end of the arrays
and go to the beginning.
*/

int main(int argc, char *argv[])
{
    //create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = count; i > 0; i--) {
        printf("%s has %d years alive.\n", names[i - 1], ages[i - 1]);
    }

    printf("---\n");

    // setup pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    //printf("The last name is %s:\n\n", *(cur_name + count - 1));  //Lisa

    // second way using pointers
    for (i = count; i > 0; i--) {
        printf("%s is %d years old.\n",
                *(cur_name +  i - 1), *(cur_age + i - 1));
    }

    printf("---\n");

    // third way, pointers are just arrays
    for (i = (count - 1); i >= 0; --i) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");
   
    //*cur_age = ages[count - 1];
    //*cur_name = names[count - 1];
 
    // fourth way with pointers in a stupid complex way
    for (cur_name = &names[count - 1], cur_age = &ages[count - 1];
        (cur_age - ages) >= 0; --cur_name, --cur_age) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    return 0;
}
