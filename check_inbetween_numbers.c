#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    if(b > a && b < c)
        printf("%d is between %d and %d", b, a, c);
    else
        printf("%d is not between %d and %d", b, a, c);

    return 0;
}
