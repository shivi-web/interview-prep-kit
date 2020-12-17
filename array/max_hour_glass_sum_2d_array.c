int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum[4][4];
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
        sum[i][j]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1];
        }
        int max=sum[0][0];
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(sum[i][j]>max)
                {
                    max=sum[i][j];
                }
            }
        }
        printf("%d",max);
    return 0;
}
