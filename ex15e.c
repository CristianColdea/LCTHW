#include <stdio.h>

/*
Rewriting the program to use a function to print all the four ways bellow.
*/

//forward declaration
void print_arrays_pointers(int ages[], char *names[]);

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

    
    // write the printing function
    void print_arrays_pointers(int ags[], char *nmes[], 
                               int *c_ags, char **c_nmes) {
        int i = 0;
        int cnt = sizeof(ages) / sizeof(int);

        printf("count is %d.\n", cnt);
        
        // first way using indexing    
        for(i = 0; i < cnt; i++) {
            printf("%s has %d years alive in func.\n", nmes[i], ags[i]);
        }

            printf("---\n");

        // second way using pointers
        for(i = 0; i < cnt; i++) {

            printf("%s is %d years old in func.\n",
                *(c_nmes + i), *(c_ags + i));
        }
            
            printf("---\n");

        // third way, pointers are just arrays
        for(i = 0; i < cnt; i++) {                        
            printf("%s is %d years old again in func.\n", c_nmes[i], c_ags[i]);
        }
    
            printf("---\n");

        // fourth way with pointers in a stupid complex way
        for (c_nmes = nmes, c_ags = ags;
            (c_ags - ags) < cnt; c_nmes++, c_ags++) {
                printf("%s lived %d years so far.\n", *c_nmes, *c_ags);
        }

            
        printf("---\n");

    }

    
    print_arrays_pointers(ages, names, cur_age, cur_name);
    
    return 0;
}
