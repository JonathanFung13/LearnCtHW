#include "stdio.h"

int main(int argc, char *argv[])
{
    char full_name[] = {'J', 'o', 'n', ' ', 'G', '.', ' ', 'F', 'u', 'n', 'g', '\0'};
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Jon";
    areas[1] = name[1];

    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas: %ld\n", sizeof(areas));
    printf("The number of ints in areas %ld\n", sizeof(areas)/ sizeof(int));
    printf("The first area is %d, the second is %d\n", areas[0], areas[1]);

    printf("The size of a char is: %ld\n", sizeof(char));
    printf("The size of name is: %ld\n", sizeof(name));
    printf("The number of letters in name is: %ld\n", sizeof(name)/ sizeof(char));

    printf("The size of full name is: %ld\n", sizeof(full_name));
    printf("The number of letters in full_name is: %ld\n", sizeof(full_name)/ sizeof(char));

    printf("name=\"%s\" and full name=\"%s\"\n", name, full_name);

    return 0;
}