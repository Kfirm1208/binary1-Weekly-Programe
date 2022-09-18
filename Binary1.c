#include <stdio.h>
int binary = 0, k = 1;
int binary1(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The binary of %d is %d", num, binary1(num));
    return 0;
}

int binary1(int num)
{
    while (num > 0)
    {
        binary += (num % 2) * k;
        num /= 2;
        k *= 10;
    }

    return binary;
}