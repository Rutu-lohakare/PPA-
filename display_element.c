//Find all elements in array which have at least two greater elements

#include<stdio.h>

int n,i,j,arr[30],cnt,k;

void main()
{
	printf("enter how many elements in array");
	scanf("%d",&n);

	for(i=0;i<n;i++)
        {
		printf("enter element");
		scanf("%d",&arr[i]);
	}

	printf("\nThe original array is");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(arr[j]==arr[i])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
			}
			else
			{
				j++;
			}
		}
	}


        printf("\n");
        printf("ELEMENTS IN ARRAY WHICH HAVE ATLEAST TWO GREATER ELEMENTS");
	printf("\n");

	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				cnt=cnt+1;
			}
		}
		
		if(cnt>=2)
	        {  
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
}



