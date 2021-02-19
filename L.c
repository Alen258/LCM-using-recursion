#include <stdio.h>
int L(int a, int b);
void main()
{
    int num1, num2, LCM;
printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)
        LCM = L(num2, num1);
    else
        LCM = L(num1, num2);
        printf("LCM of %d and %d = %d", num1, num2, LCM);
}
int L(int a, int b)
{
    static int multiple = 0;
        multiple =multiple+b;
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return L(a, b);
    }
}
