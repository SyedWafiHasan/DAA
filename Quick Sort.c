#include<stdio.h>
int n,A[100],b,s,piv,temp;
void split(int a[100],int l, int u)
{
	b=l+1;
	s=u;
	piv=a[l];
	while(s>b)
	{
		while(a[b]<piv)
			b++;
		while(a[s]>piv)
			s--;
		if(s>b)
		{
			temp=a[b];
			a[b]=a[s];
			a[s]=temp;
		}
	}
	temp=a[l];
	a[l]=a[s];
	a[s]=temp;
}
void quicksort(int a[100],int l, int u)
{
	if(l<u)
	{
		split(a,l,u);
		quicksort(a,l,s-1);
		quicksort(a,s+1,u);
	}
}
void main()
{
	int i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	quicksort(A,0,n-1);
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
		printf("%d	",A[i]);
    return 0;
}
