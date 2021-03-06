#include<stdio.h>

int BinarySearch(int* arr, int num, int n)
{
	int f=0, l=n-1, m;
	while(f <= l)
	{
		m = (f+l) / 2;
		
		if(num == arr[m]) return m;
		else if (num < arr[m]) l=m-1;
		else f=m+1;
	}
	return -1;
}

int main()
{
	int arr[] = {10,12,23,34,45,56,67,78,89,90}; //Sorted Array (Ascending for this program)
	int n, num, index; //n = length of array, num = number to be searched, index = index at which num resides in the array(to be calculated)
	n = sizeof(arr) / sizeof(arr[0]);
	printf("Enter the number you want to search : ");
	scanf("%d",&num);
	index = BinarySearch(arr, num, n);
	if ( index != -1) printf("%d found at index %d",num,index);
    else printf("%d not found",num);
	return 0;
}