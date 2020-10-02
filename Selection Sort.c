#include<stdio.h>
int main()
{
    int arr[100],n,i,j,min,temp;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the Array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=(i+1);j<n;j++)
            if(arr[min]>arr[j])
                min=j;
            if(i!=min)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
    }
    printf("\nThe sorted Array : ");
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}
