#include<stdio.h>

int binary_search(int arr[],int n,int k)
{
    int st = 0;
    int end = n - 1;
    int res = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(arr[mid] == k)
        {
            res = mid;
            end = mid - 1;
        }
        else if(arr[mid] < k)
         st = mid + 1;
        else
            end = mid - 1;
    }

    
}
int main()
{
    int arr[10]={3,5,7,7,8,9,10};
    int k;
    
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=binary_search(arr,n,k);
    if(x != -1)
        printf("Element found at index %d", x);
    else
        printf("Element not found");
}
