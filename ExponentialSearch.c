 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 int BinarySearch(int*, int, int, int);
 int Min(int, int);
 
 int ExponentialSearch(int* arr, int num, int n)
 {
    if(arr[0] == num) return 0;
    int i=1;
    while(i<n && arr[i] <= num)
        i*=2;
    return BinarySearch(arr, num, i/2, Min(i, n-1));
    return -1;
 }
 int main()
 {
	 int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
	 int n, num, index;//n = length of array, num = number to be searched, index = index at which num resides in the array(to be calculated)
     n = (sizeof(arr)) / (sizeof(arr[0]));
     printf("Enter the Number to be searched : ");
     scanf("%d",&num);
     index = ExponentialSearch (arr, num, n);
     if ( index != -1) printf("%d found at index %d",num,index);
     else printf("%d not found",num);
     return 0;
 }
 int BinarySearch(int* arr, int num, int f, int l)
{
	if(f > l) return -1;
	
	int m = (f+l) / 2;
		
	if(num == arr[m]) return m;
	else if(num < arr[m]) BinarySearch(arr, num, f, m-1);
	else BinarySearch(arr, num, m+1, l);
}
 int Min(int a, int b)
 {
     if(a<b) return a; else return b;
 }
    