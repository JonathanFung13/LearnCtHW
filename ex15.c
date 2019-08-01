#include "stdio.h"

int main(int argc, char *argv[])
{
    int ages[] = {12, 23, 42, 55, 67};
    char *names[] = {"Billy", "Cathy", "Donald", "Eric", "Frank"};

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way of printing, same way as before
    for (i = 0; i < count; i++) {
        printf("%s is %d years young.\n", names[i], ages[i]);
    }
    printf("---\n");

    // use pointers
    int *cur_age = ages;
    char **cur_name = names;
    for (i = 0; i < count; i++) {
        printf("%s is %d years young.\n", *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");

    // another way to use pointers, array-like syntax
    for (i = 0; i < count; i++) {
        printf("%s is %d years young.\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");

    // complex way to use pointers
    for (cur_age=ages, cur_name=names; (cur_age-ages)<count; cur_age++, cur_name++) {
        printf("%s is %d years young.\n", *cur_name, *cur_age);
    }
    return 0;
}