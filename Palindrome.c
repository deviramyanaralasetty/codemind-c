#include<stdio.h>
int main()
{
    int n,rev=0,r,l;
    scanf("%d",&n);
    l=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(l==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}