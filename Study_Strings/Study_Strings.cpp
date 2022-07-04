#include <iostream>

int main()
{
    char str[50] = "abcdefghijklmnopqrstuvwxyz";
    scanf_s("%s", str, 50);

    printf("printf:\n");
    printf("%s\n\n", str);

    printf("cycle:\n");
    for (int i = 0; i < 50; i++)
        printf("%c", str[i]);

    printf("\n\n");

    printf("codes:\n");
    for (int i = 0; i < 50; i++)
        printf("%d, ", (int)str[i]);

    printf("\n\n");
}
