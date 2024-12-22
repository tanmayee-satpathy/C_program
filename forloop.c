#include<stdio.h>
int main()
{
    int i,j;
    for(i=0,j =0 ; i<5,j<3; i++,j++)
    //In exp2 only the last one is used as termination condition
    {
        printf("%d %d\n" , i,j);
    }
    return 0;
}