#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("Value at position 3 0f the array is %d\n",arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of second element of the array is %d\n",&arr[1]);
    printf("The address of second element of the array is %d\n",arr+1);

    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of second element of the array is %d\n",*(&arr[1]));
    printf("The value at address of second element of the array is %d\n",*(arr+1));

     printf("%d",arr[0]);
    return 0;
}