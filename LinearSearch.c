#include <stdio.h>
#include<stdlib.h>

int LinearSearch(int* arr, int num, int n)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
	int arr[] = {10,12,23,34,45,56,67,78,89,90};
    int n, num, index; //n = length of array, num = number to be searched, index = index at which num resides in the array(to be calculated)
	n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the Number to be searched : ");
    scanf("%d",&num);
    index = LinearSearch (arr, num, n);
    if ( index != -1) printf("%d found at index %d",num,index);
    else printf("%d not found",num);
    return 0;
 }
 
 /*
 
 */