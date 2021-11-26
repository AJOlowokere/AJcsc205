/*else if (opsno == 2)
	{
	for ( c; c < 4 ; c++)
	pthread_create(&CBid, NULL , Charge_Back , (void *)&CBid);
	pthread_join(CBid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	else if (opsno == 3)
	{
	for ( c; c < 6 ; c++)
	pthread_create(&PGCid, NULL , PG_Challenges , (void *)&PGCid);
	pthread_join(PGCid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	else if (opsno == 4)
	{
	for ( c ; c < c+2 ; c++)
	pthread_create(&CUid, NULL , Continuous_Update , (void *)&CUid);
	pthread_join(CUid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	else if (opsno == 5)
	{
	for ( c ; c < c+2 ; c++)
	pthread_create(&UECid, NULL , UE_Challenges , (void *)&UECid);
	pthread_join(UECid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	else if (opsno == 6)
	{
	for ( c ; c < c+2 ; c++)
	pthread_create(&MCPid, NULL , MC_Payment , (void *)&MCPid);
	pthread_join(MCPid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	else if (opsno > 6)
	{
	printf("Input INVALID \n");
	return 0;
	}
	else 
	return 0;*/
	
	for(counter; counter<= noofops; counter++)
{
 printf("Which operations would you like to monitor? \n");
 scanf("%d", &opsno);
	if (opsno == 1)
	{
	for ( c ; c < 2 ; c++)
	{
	pthread_create(&OFid, NULL , Online_Fraud , (void *)&OFid);
	pthread_join(OFid, NULL);
	pthread_exit ( NULL );
	return 0;
	}
	}
}
return 0;
