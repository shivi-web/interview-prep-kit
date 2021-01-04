/*
Program to reverse all vowels in a given string.
Input: hello india
Output: halli indoe
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],vowel[20],news[50];
    int k=0;
    fgets(s,50,stdin);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            vowel[k]=s[i];
            k++;
        }
    }
    int i,j;
    
    for( j=0;s[j]!='\0';j++)
    {
        
    }
    i=k-1;
    for(int x=0;x<j;x++)
    {
        if(s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u')
        {
            s[x]=vowel[i];
            i--;
        }
    }
    printf("%s",s);
    return 0;
}
