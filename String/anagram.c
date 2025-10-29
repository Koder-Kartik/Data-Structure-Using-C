#include <stdio.h>
#include <string.h>
int main()
{
    char temp[100]="xyzbb";
    char temp1[100]="bzyxb";
    int arr[26] = {0};
    if(strlen(temp) != strlen(temp1))
    {
        printf("Not anagram\n");
        
    }
    else
    {
        for(int i=0;i<=strlen(temp); i++)
        {
            arr[temp[i]-'a']++;
            arr[temp1[i]-'a']--;
        }
        
        for(int i=0; i<26; i++)
        {
            if(arr[i] != 0)
            {
            
                printf("Not anagram\n");
                break;
            }
            else
            {
            printf("Anagram\n");
             }
        
        {
            
        
    }
}
    }