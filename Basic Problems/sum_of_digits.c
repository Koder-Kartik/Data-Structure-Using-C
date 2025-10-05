// Program to find the sum of digits of a number

#include<stdio.h>
#include<conio.h>
int main()

{
    int x ,z=0,y;
    
    printf("enter a no");
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        z=z+y;
        x=x/10;
    }
    printf("sum %d",z);
}
