#include "stdio.h"

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'a'};

    // print raw
    printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("names: %c %c %c %c \n", name[0], name[1], name[2], name[3]);
    printf("name: %s \n", name);

    //setup the name and numbers
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'n';
    name[3] = '\0';

    // print again
    printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("names: %c %c %c %c \n", name[0], name[1], name[2], name[3]);
    printf("name: %s \n", name);

    char *another = "Jonathan";
    printf("another %s\n", another);
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}