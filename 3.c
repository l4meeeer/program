#include <stdio.h>
#include <stdlib.h>

char *convert(char *wd, int number, int n)
{
    if (n < 0) {
    
        return 0;
    }
    wd[n - 1] = number % 10 + '0'; // ласт эл-т =остаток от дел + ascii
    
    return convert(wd, number / 10, n - 1); // слово,, удал-е, на 1 эл-м --
}


int rank(int number) // ск-ко симв
{
    int n = 0;
    while ( number > 0) {
        n++;
        number = number / 10;
    }

    return n;
}


char *str(int number)
{
    char *wd;
    int n = rank(number); 
    wd = malloc(n * sizeof(char));
    convert(wd, number, n);
    
    return wd;
}

int main(void)
{
    int number;
    printf("Enter number = ");
    scanf("%d", &number);
    printf("Decision = %s\n", str(number));
    
    system("pause");
    return 0;
}