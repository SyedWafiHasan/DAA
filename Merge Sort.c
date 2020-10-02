//This code is to merge two sorted Arrays
#include<stdio.h>
int main()
{
    int a[100],b[100],c[100];
    int i,j,k,l,m,n;
    printf("Enter the size of the first Array: ");
    scanf("%d",&m);
    printf("Enter the elements of the first Array: ");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of the second Array: ");
    scanf("%d",&n);
    printf("Enter the elements of the second Array: ");
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);
    i=0;
    j=0;
    k=0;
    while((i<m) && (j<n))
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i];
            i++;
        }
        else
        {
            c[k++]=b[j];
            j++;
        }
    }
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    printf("The merged Array: ");
    for(k=0;k<(m+n);k++)
        printf("%d",c[k]);
    return 0;
}
