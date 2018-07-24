#include<stdio.h>

int main()
{
    int L,B,A,P;
    scanf("%d %d",&L,&B);
    A=L*B;
    P=2*(L+B);
    if(A>P)
        printf("Area");
    else
        printf("Peri");

    printf("\n");
    if(A>P)
        printf("%d",A);
    else
        printf("%d",P);

    return 0;

}
