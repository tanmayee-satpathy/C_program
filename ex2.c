//convert meter to cm,kg to gram
#include<stdio.h>
int main()
{
    char  input;
    float meterTocm =  100;
    float kgTogram = 1000;
    float first,second;
    while (1)
    {
        printf("Enter the input character. q to quit \n 1.meter to cm\n 2.kg to gram\n");

        scanf("%c",&input);
        switch (input)
        {
        case 'q': 
            printf("Quitting the program...");
            goto end;
            break;

            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
        
        default:
            break;
        }
    }
    end:
    return 0;
}
