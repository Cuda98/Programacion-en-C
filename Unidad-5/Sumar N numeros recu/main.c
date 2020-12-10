#include <stdio.h>
#include <stdlib.h>
int suma (int n);

int main()
{
    int x = 0;
    printf("ingrese n: ");
    scanf("%d",&x);
    printf("%d",suma(x));
    return 0;
}


int suma (int n)
{
if(n==1)
return 1;
else
return (suma(n-1)+n);
}
