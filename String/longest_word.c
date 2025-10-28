#include <stdio.h>
#include <string.h>
int main()
{
  int globalmax = 0;
  int currentmax = 0;
  char temp[] = "Hello welcome back";
  int x = strlen(temp);
  int i;
  int start = 0, end = 0; 
  int word_start = 0;
  for(i=0;i<x;i++)
  {
    if (temp[i] == ' ' || temp[i] == '\0')
    {
        if(currentmax > globalmax) 
        {
            globalmax = currentmax;
            start = word_start;      
            end = i;    
            
        }
        currentmax = 0;
        word_start = i + 1;
    }
    else
        {
            currentmax++;                
        }
    }

    printf("Longest word: ");
    for (int i = start; i < end; i++)
        printf("%c", temp[i]);

    printf("\nLength: %d\n", globalmax);

    return 0;
}