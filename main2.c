#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

<<<<<<< HEAD
    askname(first, last);

=======
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

>>>>>>> 3cf9b1c... Use proper grammar.
    printf("Hello, %s %s!\n", first, last);
    return 0;
}
