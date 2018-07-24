#include<stdio.h>
int buggy_sum(int n, int m);
int buggy_sum(int n, int m)
{
    int multiplier=1,res=0,bit_sum;
    while(n || m)
    {

        bit_sum = n%10 + m%10;
        bit_sum = bit_sum%10;

        res = (bit_sum*multiplier) + res;

        multiplier = multiplier*10;
        n=n/10;
        m=m/10;
    }
    printf("%d\n",res);
}
int main()
{
    int T,n,m;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&m);
        buggy_sum(n,m);
    }
    return 0;
}
