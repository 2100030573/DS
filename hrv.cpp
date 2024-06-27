#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int n);
int main() 
{
   
   int n;
   scanf("%d", &n);
   insertionSort(n);
   return 0;
}
void insertionSort(int n) 
{
	int a[n],i;
    for(i=0;i<n;i++) 
    { 
      scanf("%d", &a[i]); 
    }
    int j = n-1;
    int temp= a[j];
    while(temp < a[j-1]) 
	{
        a[j] = a[j-1];
        j--;
        int i;
        for(i=0;i<n;i++)
	    {
        printf("%d ",a[i]);
        }
        printf("\n");
    }
    a[j] = temp;
    for(i=0; i<n; i++)
	{
    printf("%d ", a[i]);
    }
    printf("\n");
}

