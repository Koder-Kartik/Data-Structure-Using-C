#include<stdio.h>
int main()
{
    int n,r,a=1,b=1,c=1,ans,i;
    printf("Enter the value of n and r\n");
    scanf("%d%d",&n,&r);

    for (i=n;i>=1;i--)
    {
        a=a*i;
    }

    for (i=r;i>=1;i--)
    {
        b=b*i;
    }

    for (i=n-r;i>=1;i--)
    {
        c=c*i;
    }

    ans=a/(b*c);

    printf("%d",ans);

}
