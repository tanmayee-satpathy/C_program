#include<stdio.h>
int main()
{
    label:
    printf("We are inside label\n");
    goto end;
    printf("Hello World\n");
    goto label;
    end:
    printf("We are at end");
    return 0;
}