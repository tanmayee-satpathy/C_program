#include<stdio.h>
int sum(int a,int b);
void printstar(int n)
{
    for(int i=0;i<n;i++)
    {
      printf("%c",'*');  
    }
}
int main()
    {
        int a,b,c;
        a=9;
        b=87;
        c=sum(a,b);
        printstar(8);
        return 0;
    
    }
    int sum(int a,int b)
    {
      return a+b;
    }
