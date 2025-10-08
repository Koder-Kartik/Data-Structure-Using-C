#include<stdio.h>

int main()
{
    int arr[10]={3,5,6,7,10,12,15,17,22,28};
    //target sum is 19
    int n = sizeof(arr)/sizeof(arr[0]);
    int st=0;
    int sum =20;
    int val;
    int end=n-1;
    int found=0;
    while(st<end)
    {
        val = arr[st]+arr[end];
        if (val>sum)
        {
            end--;
        }
        else if(val<sum)
        {
              st++;  
        }
    
        else 
        {
            printf("%d,%d\n",st,end);
        
          found++;
          st++;
          end--;
        
        }
        
    }
    if(found>0)
    {
        printf("yes\n");
    }
    else
     printf("no\n");
    printf("the numbers of pairs is %d",found);

}
