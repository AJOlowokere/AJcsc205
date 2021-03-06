#include <stdio.h>
#include <stdlib.h>

int main()

{
	int* ptr;
	int n,i;
	
	n = 5;
	printf("Entered number of elements: %d\n",n);
	
	//dynamically allocate memory using malloc()
	ptr = (int*)calloc(n, sizeof(int));
	
	//check if the memory has been successfully allocated by calloc or not
	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	else 
	{
		printf("Memory successfully allocated using calloc.\n");
		
		for ( i = 0; i <n; ++i)
		{
			ptr[i] = i + 1;
		}
		
		printf("The elements of the array are: \n");
		
		for (i = 0; i < n; ++i)
		{
			printf("%d, ", ptr[i]);
		}
	}
	return 0;
}
