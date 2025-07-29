#include<stdio.h>
int main()
{
    int a[10],num,i,j,temp;

    printf("Enter the number of elements: ");
    scanf("%d",&num);

    printf("Enter the elements: ");
    for(i = 0; i < num; i++)
        scanf("%d",&a[10]);
    printf("The original array is: ");
    for(i = 0; i < num; i++)
    {
        printf("%d\t",a[i]);
    }

    for(i = 0; i < num-1; i++)
    {
        for(j = 0; j < num-i-1; j++)
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    printf("The sorted array is: ");
    for(i = 0; i < num; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}