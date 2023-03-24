#include<stdio.h>
#include<conio.h>
main()
{
	int number[25],n,data,i,flag=0,low,high,mid;
	
	printf("Enter the Number of Elements:");
	scanf("%d",&n);
	printf("Enteer the Elements in ascending order:");
	for(i=0;i<n;i++)
	 scanf("%d",&number[i]);
	printf("Enter the Element to be Searched:");
	scanf("%d",&data);
	low=0;high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(number[mid]==data)
		{
			flag=1;
			break;
		}
		else
		{
			if(data<number[mid])
			 high=mid-1;
			else
			 low=mid+1;
			
		}
	}
	if(flag==1)
	 printf("Data Found at Location:%d",&mid);
	 else
	  printf("Data Not Found");
	  
}
