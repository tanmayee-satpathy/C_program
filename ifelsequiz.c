/*
if one passed
math-15
science-15
math and science-45
printf the type gifts you are giving
*/
#include<stdio.h>
int main()
{
    int exam ;
    printf("The exam passed is\n");
    printf("1 for math and 2 for science and 3 for both\n");
    scanf("%d",&exam );
    if(exam == 1){
        printf("You will get 15 rs");
    }
    else if(exam == 2){
        printf("You will get 15 rs");
    }
    else if(exam == 3){
        printf("You will get 45 rs");
    }

    return 0;
}
