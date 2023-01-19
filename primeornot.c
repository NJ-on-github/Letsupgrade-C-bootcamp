# include <stdio.h>

int main()
{
    int n, t = 2, p = 1;
    printf("Enter a number to chck if its prime or not -> ");
    scanf("%d", &n);
    while (t<n)
    {
        if(n%t==0)
            p=0;
        t++;
    }

    if (n==1)
    {
        printf("1 is neither prime nor composite number");
    }

    else
    {
        if(p==1)
            printf("Given no. is a prime number.");
        else
            printf("Given number is not a prime number");
    }
    return 0;
}