#include<stdio.h>
int temp=0;
int main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    int m=digit(n);
    printf("no of digit=%d\n",m);
    int arr[200];
    int digit1;
    for(i=0;i<m;i++)
    {
        digit1=n%10;
        arr[i]=digit1;
        n=n/10;
    }
    mult(m,arr);

    display(m,arr);
     temp1(temp,arr,m);
   /* for(i=0;i<m;i++)
    {
        arr1[i]=mult(m,arr);
    }*/
    return 0;
}
int mult(int m,int arr[])
{
    int x,i;
    for(i=0;i<m;i++)
    {
        x=arr[i]*37+temp;
        arr[i]=x%10;
        temp=x/10;
    }



}
int temp1(int temp,int arr[],int m)
{
    if(temp>0)
    {
        arr[m+1]=temp%10;
        m++;
        printf("test\n");
    }
}
int display(int m,int arr[])
{

    for(int i=0;i<m;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
int digit(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}
//calculation of lenght and put into this to array is wworking properly
