#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(smallest > nums[i])
            smallest  = nums[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(largest < nums[i])
            largest  = nums[i];
    }
    cout<<"Smallest = "<< smallest << endl;
    cout<<"Largest = "<< largest << endl;
    return 0;
}