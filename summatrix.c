#include<stdio.h>
int main()
{
    int i,j,n,m,a[10][10],sum,gsum;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(i=1;i<=m;i++)
    {
        sum=0;
        printf("\n\n");
        for(j=1;j<=n;j++)
        {
            printf("%4d",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("%10d",sum);
    }
    printf("\n\n");
    gsum=0;
    for(j=1;j<=n;j++)
    {
      sum=0;
    for(i=1;i<=m;i++)
    {
        sum=sum+sum+a[i][j];
    }
    printf("%4d",sum);
    gsum=gsum+sum;
}
printf("%10d",gsum);
    printf("Another change made by Ayush.")
}

