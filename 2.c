#include <stdio.h>


int fib_recursia(int n)
{
    if (n == 0 || n == 1) {

        return 1;
    } else {

        return fib_recursia(n - 2) + fib_recursia(n - 1);
    }
}

int fib_iter(int n) //цикл
{
    int i, mas[n];
    mas[0] = mas[1] = 1;
    for (i = 2; i <= n; i++) {
        mas[i] = mas[i - 1] + mas[i - 2];
    }

    return mas[n];
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


/*
  fib(6)
  	fib(5)+fib(4)
 		fib(4)+fib(3)
  			fib(3)+fib(2)
  				fib(2)+fib(1)
  					fib(1)+fib(0)
  					1 + 0
  				1 + fib(1)
  					1
  				1+1
  			2 + fib(2)
  				fib(1)+fib(0)
  				1
				1 + 0
			2 + 1
  		3 + fib(3)
  			fib(2) + fib(1)
  				fib(1)+fib(0)
  				1 + 0
  			1 + fib(1)
  				1
  			1+1
  		3+2
  	5 + fib(4)
  			fib(3)+fib(2)
  				fib(2)+fib(1)
  					fib(1)+fib(0)
  					1 + 0
  				1 + fib(1)
  					1
  				1+1
  			2 + fib(2)
  				fib(1)+fib(0)
  				1
				1 + 0
			2 + 1
		3
	5+3
	8
*/



/*
fib_it(6)
fib_iter(0,1,0,6)
fib_iter(1,0,1,6)
fib_iter(1,1,2,6)
fib_iter(2,1,3,6)
fib_iter(3,2,4,6)
fib_iter(5,3,5,6)
fib_iter(8,5,6,6)
8
*/
