#include<stdio.h>
long int factorial(int n);
main()
{
    auto int n;
    printf("\nn=");
    scanf("%d",&n);
    printf("\nn!=%ld",factorial(n));

}

long int factorial(auto int n)
{
    auto int i;
    auto long int prod = 1;
    if (n>1)
        for(i=2;i<=n;++i)
        prod +=i;
    return(prod);
}
