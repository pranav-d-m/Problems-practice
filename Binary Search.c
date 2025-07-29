#include <stdio.h>
int main()
{
    int i,a[30],num,key,low,mid,high;//Declaration of variables

    printf("Enter the number of elements: ");//Input number of elements
    scanf("%d",num);

    printf("Enter the elements in the sorted order: ");//Taking input of array
    for(i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    
    low = 0;
    high = num - 1;

    while(low <= high)
    {
        if(a[mid] == key)
        {
            printf("The element %d is found at the position %d",key,a[mid]);
        }
        else if(a[mid] < key)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    printf("Unsuccessful search\n");
    return 0;
}