#include <stdio.h>

int main()
{
    int number, temp, digit;
    int sum = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == number)
        printf("Result: Armstrong Number");
    else
        printf("Result: Not an Armstrong Number");

    return 0;
}