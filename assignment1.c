#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[100];
	int i,*p;
	p = &arr[0];
	for(i=0;i<100;i++)
	{
		arr[i]= rand();
	}
	for(i=0;i<100;i++)
	{
                printf("Array index [%3d].Array content using index [%08d] using pointer is [%08d] \n",i,arr[i],*p);
	p++;
        }
	p=&arr[0];	
	for(i=0;i<100;i++)
	{
		*p+=5;
                printf("Array index [%3d].Array content using index [%08d] using pointer is [%08d] \n",i,arr[i],*p);
		p++;
        }
	return 0;
}
