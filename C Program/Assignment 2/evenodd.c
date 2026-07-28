void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
}

void main()
{
    int a;
	printf("Enter a number: ");
    scanf("%d", &a);
	checkEvenOdd(a);

    getch();
}
