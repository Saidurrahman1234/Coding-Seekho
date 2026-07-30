#include <stdio.h>
#include <conio.h>

int isPrime(int a)
{
    int i;
	if (a <= 1)
        return 0;
	for (i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
            return 0;
    }
	return 1;
}

void main()
{
    int n, z;
	printf("Enter a number: ");
    scanf("%d", &n);
	z = isPrime(n);
	if (z == 1)
        printf("%d is Prime.", n);
    else
        printf("%d is Not Prime.", n);

    getch();
}
