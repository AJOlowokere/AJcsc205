#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <pthread.h>

void *childThread(void* args)
{
	int mypid, myppid;
	mypid = getpid();
	myppid = getppid();
	printf("The process ID is %d\n", mypid);
	printf("The parent process ID is %d\n" , myppid);
	return NULL;
}

int main()
{
	int noofprocesses, mypid, myppid;
	pthread_t pid;
	
	printf("Input number of processes: \n");
	scanf("%d", &noofprocesses);
	
	for(int counter = 0; counter < noofprocesses ; counter++)
	{
		fork();
		if(fork() == 0)
		{
			pthread_create(&pid, NULL, &childThread, NULL);
		}
	return 0;
	}
}
