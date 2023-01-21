# include <stdio.h>

int main()
{
    int a=1, sum=0;

    while (a<=10){
        sum+=a;
        a++;        
    }

    printf("Sum of first 10 natural numbers :\n%d", sum);
    return 0;
}