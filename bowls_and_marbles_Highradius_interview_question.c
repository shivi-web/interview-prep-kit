/*
There are N bowls numbered from 1 to N and each bowl can contain maximum 9
marbles. A user has to add a marble to the last bowl i.e. Nth Bowl. If Nth bowl is
full i.e. it already has 9 marbles, you need to check in (N-1)th. If (N-1)th bowl has
space to accommodate one more marble, then you need to add marble in it and
remove all the marbles from Nth bowl. You need to identify the bowl will be
modified when you add a marble. If all bowls are full, print output as 0.
Input : First line contains number of bowls.
Second line will denotes number of marbles in each bowl from 1 to N.
Output : index of last modified bowl.
Test Case-1:
Input: 2
2 3
Here first line denotes that there are 2 bowls. Second line denotes that there are 2
marbles in first bowl and 3 marbles in second bowl.
Output: 2
First we will check in the last bowl. It has less than 9 marbles, so we can add marble
to last bowl and now status of the bowls will 2 4. As we have added marble to the
second bowl, output will be 2.
Test Case-2:
Input: 2
2 9
Since if we add 1 to the last bowl, it becomes 2 10, not allowed, so the one marble
gets carry forwarded to the next bowl making it 3 0, so 1st bowl is the last modified.
Test Case-3:
Input: 2
9 9
Since if we add 1 to the last bowl, it becomes 9 10, carry forward it becomes 10 0,
again a problem, so 0 0 making nothing getting modified at the end.
*/

#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,marble;
    scanf("%d",&n);
    i=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(arr[n-1]<9)
    {
        printf("%d",n);
    }
    if(arr[n-1]==9)
    {
        while(1)
        {
            marble=arr[i];
            arr[i]=0;
            if(marble<9)
                break;
            i--;
        }
        if(arr[i]!=9)
        printf("%d",i+1);
        else
        printf("0");
    }
    return 0;
}
