#include<stdio.h>

int xyz(int m,int n,int arr[][n]);
int xyz(int m,int n,int arr[][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}
int main()
{

    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    xyz(m,n,arr);
    return 0;
}
