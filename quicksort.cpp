#include<stdio.h>
void quickSort(int a[],int first,int last);
int partition(int a[], int first, int last);
int main()
{
     
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void quickSort(int a[],int first,int last)
{
    
    if (first<last)
    {
        int p=partition(a,first,last);
        quickSort(a,first, p-1);
        quickSort(a, p+1,last);
    }
}
int partition(int a[], int first, int last)
{
    int temp,temp1;
    int pivot = a[last]; 
    int i = (first - 1);  
    for (int j =first; j <= last - 1; j++)
    {
          if (a[j] < pivot)
        {
            i++;   
            temp=a[j];
            a[j]=pivot;
            pivot=temp;
            
        }
    }
    temp1=a[i+1];
    a[i+1]=a[last];
    a[last]=temp1;
    return (i+1);
}
