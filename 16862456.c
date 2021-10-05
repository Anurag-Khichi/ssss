
#include<stdio.h>
int main()
{
    int i,m,t,s,a,b,j,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        y=0;
        s=0;
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        m=a;
        while(m>0)
        {
            m=m/10;
            i++;
        }
        for(j=0;j<i;j++)
        {
            z=(a%10+b%10)%10;
            s=s*10+z;
            a=a/10;
            b=b/10;
        }
        while(s>0)
        {
            y=(y*10)+(s%10);
            s=s/10;
        }
        while(s>0)
        {
            y=(y*10)+(s%10);
            s=s/10;
        }
        printf("%d\n",y);
    }
    return 0;
}

/* C++ implementation of QuickSort */
#include <bits/stdc++.h> 
using namespace std; 

// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high - 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i); 
} 

arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	printf("\n");//More efficient
} 

int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	quickSort(arr, 0, n - 1); 
	
	printArray(arr, n); 
	return 0; 
} 

