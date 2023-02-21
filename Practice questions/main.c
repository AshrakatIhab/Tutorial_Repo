#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Toggle case function declaration */
void toggleCase(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s\n", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}


/**
 * Toggle case of each character in given string
 */
void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
            str[i] = str[i] - 32;
        i++;
    }
}
