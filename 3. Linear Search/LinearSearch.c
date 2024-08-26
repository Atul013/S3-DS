#include<stdio.h>
void search(int arr[],int s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			break;
		}
	}
	if(i==n)
		printf("The Search element %d was not found in the array !",s);
	else
		printf("The Search element %d was found at position %d",s,i);
		
	
}
int main()
{
	int arr[100],s,n,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search element: ");
	scanf("%d",&s);
	search(arr,s,n);
	printf("\n");
	return 0;
}
	