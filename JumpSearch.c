 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h> 
 int Min(int a, int b);
 
 int JumpSearch(int* arr, int num, int n)
 {
    int f=0,l, jump = sqrt(n);
    l=f+jump;
    while(l<n && arr[l]<=num)
    {
        f=l;
		l=l+jump;
    }
    for(int i = Min(l-1,n-1);i >= f;i--)
        
		if(arr[i] == num) return i;
		
    return -1;
 }
 
 int main()
 {
	 int arr[] = {10,12,23,34,45,56,67,78,89,90}; //Sorted Array (Ascending for this program)
     int n, num, index;//n = length of array, num = number to be searched, index = index at which num resides in the array(to be calculated)
     n = sizeof(arr) / sizeof(arr[0]);
	 printf("Enter the Number to be searched : ");
     scanf("%d",&num);
     index = JumpSearch (arr, num, n);
     if ( index != -1) printf("%d found at index %d",num,index);
     else printf("%d not found",num);
     return 0;
 }
 
 int Min(int a, int b)
 {
     if(a<b) return a; else return b;
 }