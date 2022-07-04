#include <iostream>

int main()
{
    char str[100];
    bool isNumber;
    do
    {
        printf("Input integer number:\n");

        scanf_s("%s", str, 100);
        isNumber = true;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] < '0' || str[i] > '9')
            {
                isNumber = false;
                break;
            }
        }
    } while (!isNumber);

    int num = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + str[i] - '0';
    }

    printf("%d\n", num);

    system("pause");
    return 0;
}


