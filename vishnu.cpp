#include <stdio.h>
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
    int a[n];
    for(int i=0;i<n;i++)
    { 
     scanf("%d ",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=a[i];
        while (temp<a[j] && j>= 0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        printf("%d",a[0]);        
        for(int k=1;k<n;k++)
        {
            printf(" %d ",a[k]);
        }
        printf("\n");
    }
}

    
