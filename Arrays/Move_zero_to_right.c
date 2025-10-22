#include<stdio.h>

void move_zero_to_right(int arr[],int n)
{
    int j=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] !=0)
        {
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;

        }

    }
}

int main()
{
    int arr[10]={0,3,5,0,0,0,15,4,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    move_zero_to_right(arr,n);
    for (int i=0;i<=n-1;i++)
    {
        printf("\t%d",arr[i]);
    }
}
