/*
Name: Jyotishka Bhattacharjee
Scholar ID: 2012025
*/

#include <stdio.h>

int main()
{
    char number[1000];
    printf("Enter the value\n");
    scanf("%s", number);
    int i = 0;
    int condition1 = 0, condition2 = 0;
    while (number[i] != '\0')
    {
        if (number[i] == '.')
        {
            condition1++;
            if (number[i + 1] != '\0')
                condition2 = 1;
        }
        i++;
    }
    if (condition1 == 1 && condition2 == 1)
        printf("Valid floating point number\n");
    else
        printf("Invalid floating point number\n");

    return 0;
}