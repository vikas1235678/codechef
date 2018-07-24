#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<N;i++)
    {
        int flag=0;
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    for(i=0;i<N;i++)
    printf("%d\n",a[i]);

    return 0;

}
