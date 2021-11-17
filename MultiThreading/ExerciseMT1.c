#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// A normal C function executed as a thread when its name is specified in thread 

void *myFirstThread()
{
	sleep(1);
	printf("I am the Thread\n");
	return NULL;
}

int main()
{
	pthread_t thread_id;
	printf("Before Thread Excecution\n");
	pthread_create(&thread_id, NULL, myFirstThread, NULL);
	pthread_join( thread_id, NULL);
	printf("After Thread Execution\n");
	exit(0);
}
