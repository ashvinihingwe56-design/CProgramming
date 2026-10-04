// #include <stdio.h>
// int main()
// {
//     double first, second, temp;
//     printf("Enter first number: ");
//     scanf("%lf", &first);
//     printf("Enter second number: ");
//     scanf("%lf", &second);

//     temp = first;

//     first = second;

//     second = temp;

//     printf("\nAfter swapping, first number = %.2lf\n", first);
//     printf("After swapping, second number = %.2lf", second);
//     return 0;
// }

// Swap Numbers Without Using Temporary Variables

#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    a = a - b;

    b = a + b;

    a = b - a;

    printf("After swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf", b);

    return 0;
}
