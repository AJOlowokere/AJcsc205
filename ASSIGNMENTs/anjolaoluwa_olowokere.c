#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *Online_Fraud(void *OFid)
{
long *first_id = (long *) OFid;
printf("Online Fraud %ld \n", *first_id);
}

void *Charge_Back(void *CBid)
{
long *second_id = (long *) CBid;
printf("Chargeback %ld \n", *second_id);
}

void *PG_Challenges(void *PGCid)
{
long *third_id = (long *) PGCid;
printf("Payment Gateway Challenges %ld \n", *third_id);
}

void *Continuous_Update(void *CUid)
{
long *fourth_id = (long *) CUid;
printf("Continuous Update %ld \n", *fourth_id);
}

void *UE_Challenges(void *UECid)
{
long *fifth_id = (long *) UECid;
printf("User Experience Challenges %ld \n", *fifth_id);
}

void *MC_Payment(void *MCPid)
{
long *sixth_id = (long *) MCPid;
printf("Multi-Currency Payment %ld \n", *sixth_id);
}

int main ()

{
int noofops, opsno, c = 0, n = 0 ;
int counter = 0 ; 

pthread_t OFid;
pthread_t CBid;
pthread_t PGCid;
pthread_t CUid;
pthread_t UECid;
pthread_t MCPid;

printf("How many operations would you like to monitor? \n");
scanf("%d", &noofops);
printf("Here are some Operational Challenges \n");
printf(" [1] Online Fraud \n");
printf(" [2] Chargeback \n");
printf(" [3] Payment Gateway Challenges \n");
printf(" [4] Continuous Update \n");
printf(" [5] User Experience Challenges \n");
printf(" [6] Multi-Currency Payment \n");
printf(" --------------------------------------------- \n");



for ( counter; counter < noofops; counter++ )
 {
			printf("Which operations would you like to monitor? \n");
			scanf("%d", &opsno);
 	
			
	 		switch (opsno)
			{
			//Online Fraud
			case 1:
				
				for ( c ; c < n+2; c++)
				pthread_create(&OFid, NULL , Online_Fraud , (void *)&OFid);
				pthread_join(OFid, NULL);
				pthread_exit ( NULL );
				
				
			//Chargeback	
			case 2:
				
				for ( c; c < n+2; c++)
				pthread_create(&CBid, NULL , Charge_Back , (void *)&CBid);
				pthread_join(CBid, NULL);
				pthread_exit ( NULL );
				
				
			//Payment Gateway Challenges	
			case 3:
				
				for ( c; c < n+2 ; c++)
				
				pthread_create(&PGCid, NULL , PG_Challenges , (void *)&PGCid);
				pthread_join(PGCid, NULL);
				pthread_exit ( NULL );
				
				
			//Continuous Updates	
			case 4:
				
				for ( c ; c < n+2 ; c++)
				
				pthread_create(&CUid, NULL , Continuous_Update , (void *)&CUid);
				pthread_join(CUid, NULL);
				pthread_exit ( NULL );
				
				
			//User Experience Challenges	
			case 5:
				
				for ( c ; c < n+2 ; c++)
				
				pthread_create(&UECid, NULL , UE_Challenges , (void *)&UECid);
				pthread_join(UECid, NULL);
				pthread_exit ( NULL );
	
				
			//Multi-Currency Payments
			case 6:
				
				for ( c ; c < n+2 ; c++)
				
				pthread_create(&MCPid, NULL , MC_Payment , (void *)&MCPid);
				pthread_join(MCPid, NULL);
				pthread_exit ( NULL );
				
				
			break;
			default:
				printf("Invalid Choice. \n ");
			}
			

 
} 
return 0;
}		
		

