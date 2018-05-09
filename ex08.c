#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("You have no arguments!\n");
	} else if (argc == 2) {
		printf("You only have one argument.  You suck.\n");
		printf("%s %s \n", argv[0], argv[1]);
	} else if (argc > 2 && argc < 5) {
		printf("Here's your arguments:\n");

		for (i = 0; i < argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments. You suck.\n");
	}

	return 0;
}
