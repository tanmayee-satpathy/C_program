#include<stdio.h>
int main()
{
   int marks[2][4]= {{45,53,12,26},
                     {1,2,3,4}};
//2 rows and 4 columns

   for (int i = 0; i < 2; i++)  
   {
    for (int j = 0; j < 4; j++)
    {
        printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
    }
   }
   return 0;
}