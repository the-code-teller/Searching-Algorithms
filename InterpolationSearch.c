 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int InterpolationSearch(int* arr, int num, int l, int h)
 {
    int index;
    while(l<=h && num>=arr[l] && num<=arr[h])
    {
        index = l+((num-arr[l])*(h-l))/(arr[h]-arr[l]);
       
        if(arr[index]==num) return index;
        else if(num<arr[index])
            return InterpolationSearch(arr, num, l, index-1);
        else
            return InterpolationSearch(arr, num, index+1, h);
    }
    return -1;
 }
 
 int main()
 {
     int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47}; //A Sorted and Uniformly Distributed Array
	 int n, num, index;//n = length of array, num = number to be searched, index = index at which num resides in the array(to be calculated)
     n = (sizeof(arr)) / (sizeof(arr[0]));
     printf("Enter the Number to be searched : ");
     scanf("%d",&num);
     index = InterpolationSearch (arr, num, 0, n-1);
     if ( index != -1) printf("%d found at index %d",num,index);
     else printf("%d not found",num);
     return 0;
 }
    