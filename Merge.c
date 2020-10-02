#include<stdio.h>
void mergeSort(int arr[],int l,int u)
{
    int m;
    if(l<u)
    {
        m=(u+l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,(m+1),u);
        merge(arr,l,u);
    }
}
void merge(int a[],int l,int m,int u)
{
    int c[20],i,j,k;
    i=l;
    j=(m+1);
    k=0;
    while((i<=m) && (j<=u))
    {
        if(a[i]<a[j])
            c[k++]=a[i++];
        else
            c[k++]=a[j++];
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<=u)
    {
        c[k++]=a[j++];
    }
}
int main()
{
    int a[100],i,n;
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    printf("Enter the elements of the Array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergeSort(a[n],0,(n-1));
    printf("The sorted Array: ");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
