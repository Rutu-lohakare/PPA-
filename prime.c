// PROGRAM TO FIND ALTERNATIVE PRIME ELEMENTS IN ARRAY

#include<stdio.h>
void main()
{
        int n,arr1[10],k=0,arr2[10],i,j;
        int flag=0;
        printf("Enter Size of array");
        scanf("%d",&n);
        printf("Enter Array Elements");
        for (i=0;i<n;i++)
        {
                 scanf("%d",&arr1[i]);
        }
	// Find Prime elements in array
        for(i=0;i<n;i++)
        {
                flag=0;
                for(j=2;j<arr1[i];j++)
                {
                        if(arr1[i]%j==0)
                        {
                                flag=1;
                                break;
                        }
                }
                if(flag==0)
                {
                        arr2[k]=arr1[i];
                        k++;
                }
        }
        printf("Alternate Prime Numbers :");
        for(i=0;i<k;i+=2)
	{
		printf("%d\t",arr2[i]);
	}
	printf("\n");
}
                                                    
