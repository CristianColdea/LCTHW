#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 25;
    while (i >= 0) {
        if (i < 6){
            printf("%d ", i * 2);
        } else{    
            printf("%d ", i);
        }
        i--;
    }

    // need this to add a final newline
    printf("\n");

    return 0;
}
