#include <stdio.h>
#include <string.h>

void main()
{	// Initilization of data types
    char first[20], second[20];
    int i, j, pos;

    // Reading the First and Lst name
    printf("\n\tEnter your First name : ");
    scanf("%s", first);
    printf("\tEnter your Last name :  ");
    scanf("%s", second);
    printf("\n\n\tYour First Name is %s", first);
    printf("\n\tYour Last name is %s", second);
    /*  Concate the First name and Last name */
    for (i = 0; first[i] != '\0'; i++)
    {
         /* null statement: simply traversing the string1 */
        ;
    }
    pos = i;
    for (j = 0; second[j] != '\0'; i++)
    {
        first[i] = second[j++];
    }
    // Displaying the Full name
    first[i] = '\0';
    printf("\n\n\t\t Your Full name is %s\n", first);
}
