#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n],temp,j;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[j]==i+1)
                    break;
            }
            
            //printf("%d a",arr[j]);
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}
