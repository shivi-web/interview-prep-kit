/*
There are N interns numbered from 1 to N. Each intern is assigned a unique ID
for each day. Rules being 1<=N<=24. The ith intern has an ID of (5000*i) on day1
and for rest of days; day[j]=day[j-1]+5000+(j-1). Input to the problem id ID of
the intern. Output is number of intern on particular day.
Test Case-1:
Input: 15000
Output: Third Intern [Day 1]
Test Case-2:
Input: 25003
Output: Third Intern [Day 3]
*/
#include <stdio.h>
#include<math.h>
int main()
{
    int id;
    scanf("%d",&id);
    if(id%5000==0)
    {
        if(id/5000==1)
        {
            printf("First Intern [Day %d]\n",id%5000);
        }
        if(id/5000==2)
        {
            printf("Second Intern [Day %d]\n",id%5000);
        }
        if(id/5000==3)
        {
            printf("Third Intern [Day %d]\n",id%5000);
        }
    }
    else
    {
        int x=id%100,root;
        root=(-1+sqrt(1+8*x))/2;
        int idn=id-root*5000;
        idn=idn-root;
        if(idn/5000==1)
        {
            printf("First Intern [Day %d]\n",root+1);
        }
        if(idn/5000==2)
        {
            printf("Second Intern [Day %d]\n",root+1);
        }
        if(idn/5000==3)
        {
            printf("Third Intern [Day %d]\n",root+1);
        }
    }
    return 0;
}
