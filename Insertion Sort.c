#include<stdio.h>
int main()
{
    int n,A[100],i,j,k;
    printf("Enter the number of characters : ");
    scanf("%d",&n);
    printf("Enter the characters in the Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while((A[j-1]>A[j])&&(j>0))
        {
            k=A[j];
            A[j]=A[j-1];
            A[j-1]=k;
            j--;
        }
    }
    printf("Sorted Array : ");
    for(i=0;i<n;i++)
    {
            printf("%d",A[i]);
    }

    return 0;
}
