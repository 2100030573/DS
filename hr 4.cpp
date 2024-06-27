#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int n);
int main()
 {
   int n;
   scanf("%d",&n);
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
    for(i=1;i<n;i++)
	{
        int j=i-1;
        int temp=a[i];
        while (temp<a[j]  && j>= 0)
		{
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        for(int k=0;k<n;k++)
		{
            printf(" %d",a[k]);
        }
        printf("\n");
    }
}
