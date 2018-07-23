//sums a range of numbers iteratively
#include <cs50.h>
#include <stdio.h>

int sigma(int m);

int main(void)
{
    int n;
    //prompt user for a positive integer
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n < 1);
    //call function
    int answer = sigma(n);
    printf("%i\n", answer);
}

//Return sum of 1 through m
int sigma(int m)
{
    int sum = 0;
    for(int i = 1; i <= m; i++)
    {
        sum += i;
    }
    return sum;
}
