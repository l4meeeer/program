#include <stdio.h>


int fib_recursia(int n)
{
    if (n == 0 || n == 1) {

        return 1;
    } else {
        return fib_recursia(n - 2) + fib_recursia(n - 1);
    }
}

int fib_iter(int n)
{
    int i, mass[n];
    mass[0] = mass[1] = 1;
    for (i = 2; i <= n; i++) {
        mass[i] = mass[i - 1] + mass[i - 2];
    }

    return mass[n];
}

int main()
{
    int n;

	printf("Enter n = ");
	scanf("%d", &n);

	printf("Recursive Fib = %d\n", fib_recursia(n));
	printf("Iterative Fib = %d\n", fib_iter(n));
	system("pause");
	return 0;
}