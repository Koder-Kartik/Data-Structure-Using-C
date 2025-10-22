#include<stdio.h>

void targetsubaaray_sum(int arr[],int n, int k, int target)
{
    int curr_sum=0;
     for(int i=0;i<k;i++)
     {
        curr_sum+=arr[i];
     }
     if(curr_sum==target)
     {
        printf("Yes subarray sum exists");
        return;
     }
     for(int i=k;i<=n;i++)
     {
        curr_sum+=arr[i] - arr[i-k];
        
        if(curr_sum==target)
        {
            printf("Yes subarray sum exists");
            return;
        }
     }
     printf("No subarray sum exist equal to target");
     return;
     
}

int main()
{
    int a[10]={10,3,5,12,10,11,15,4,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    targetsubaaray_sum(a,n,3,18);
   
}
