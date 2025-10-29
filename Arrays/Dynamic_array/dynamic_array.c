#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *pt;
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    pt=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("\nEnter element %d of the array: ", i+1);
        scanf("%d",&pt[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t",pt[i]);
    }
}