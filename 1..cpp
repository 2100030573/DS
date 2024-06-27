#include<stdio.h>
void quicksort(int a[100],int ,int );
int partition(int a[100],int ,int );
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
void quicksort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(a,low,high);
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int partition(int a[100],int low,int high)
{
    int pivot,i,j,temp;
    if(low<high)
    {
        pivot=high;
        i=low;
        j=high;
        while(i<j)
        {
            while(a[i]<=a[pivot] && (i<high))
            {
                i++;
            }
            while(a[i]<=a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=a[i];
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
    }
    return 0;
}
