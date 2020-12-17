import java.util.*;
class Solution
{
    public static void main(String args[])
    {
        Scanner in = new Scanner (System.in);
        int n,d;
        n=in.nextInt();
        d=in.nextInt();
        int a[]=new int[n];
        int i;
        int temp[]=new int[n];
        int t[]=new int[n];
        for(i=0;i<n;i++)
        {
            a[i]=in.nextInt();
        }
        for(i=0;i<d;i++)
        {
            temp[i]=a[i];
        }
        int k=0;
        for(i=d;i<n;i++)
        {
            t[k]=a[i];
            k++;
        }
        k=0;
        for(i=n-d;i<n;i++)
        {
            
            t[i]=temp[k];
            k++;
        }
        for(i=0;i<n;i++)
        {
            System.out.print(t[i]+" ");
        }
        
    }
}
