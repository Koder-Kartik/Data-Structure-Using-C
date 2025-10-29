#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *pt;
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    pt = (int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the marks of %d th: ", i+1);
        scanf("%d",&pt[i]);
    }
    int max = pt[0];
    int min = pt[0];
    for(int i=1; i<n; i++)
    {
        if(pt[i] > max)
            max = pt[i];
        if(pt[i] < min)
            min = pt[i];
    }
    printf("\nMaximum element is: %d", max);
    printf("\nMinimum element is: %d", min);
    free(pt);
    return 0;
}