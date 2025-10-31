#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,l,k;
    scanf("%d%d%d",&m,&l,&n);
    for(i=1;i<=m;i++)
        for(j=1;j<=l;j++)
        scanf("%d",&a[i][j]);
    for(i=1;i<=l;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&b[i][j]);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            c[i][j]=0;
            for(k=1;k<=l;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

        }
    }
    for(i=1;i<=m;i++)
    {
        printf("\n\n");
        for(j=1;j<=n;j++)
            printf("%4d",c[i][j]);
    }
    printf("Changes made by Ayush.");
}

