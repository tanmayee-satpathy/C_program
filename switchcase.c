#include<stdio.h>
int main()
{
    int age,marks;
    printf("Enter your age\n");
    scanf("%d",&age);

    printf("Enter your marks\n");
    scanf("%d",&marks);
    switch (age)            
    {
    case 3:
    printf("Your age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks are 45\n");
        break;
    
    default:
    printf("Your marks are not 45");
    }
        break;
    
        case 23:
    printf("Your age is 23");
        break;        
    
    default:
    printf("Your age is not 3,13 or 23");
    }
        
    return 0;
    }
