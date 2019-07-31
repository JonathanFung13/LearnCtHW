#include "stdio.h"

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You have no arguments, add at least one.\n");
    } else if (argc == 2) {
        printf("You only have one argument, you suck.\n");
    } else if (argc > 2 && argc < 5) {
        printf("You have %d arguments. They are:\n", argc-1);
        for (i=1; i<argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have %d too many arguments.\n", argc-4);
    }
    return 0;
}