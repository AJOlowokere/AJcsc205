#include <stdio.h>

int main()
{
	
	int amount, ordernum;

	
	printf("Welcome to AJ's Cafe for Fatima  \n ");
	printf("------------------------------- \n");
	printf("See the Menu Below \n");
	printf("Menu \t\t\t\t\t\t Price \n");
	printf("{1} Korean Twisted Doughnuts \t\t\t N850 \n");
	printf("{2} Chicken Pies \t\t\t\t N400 \n");
	printf("{3} Special Tima Jam Doughnuts \t\t\t N750 \n");
	printf("{4} Chicken & Sausage Sharwamas \t\t N1100 \n");
	printf("{5} Scrambled Eggs with Sweet and Spicy Noodles  N1000 \n");
	
	printf("What would you like to order? \n");
	printf("Input Menu Number :\n ");
	scanf("%d", &ordernum );

	
	switch (ordernum)
	{
	//Korean Twisted Doughnuts
	long Amount;
	case 1:
		printf("What amount of Korean Twisted Doughnuts would you like? \n");
		scanf("%d", &amount);
		Amount = 850 * amount;
	//Chicken Pies	
	case 2:
		printf("What amount of Chicken Pies would you like? \n");
		scanf("%d", &amount);
		Amount = 400 * amount;
	//Special Tima Jam Doughnuts	
	case 3:
		printf("What amount of Special Tima Jam Doughnuts would you like? \n");
		scanf("%d", &amount);
		Amount = 750 * amount;
	//Chicken & Sausage Sharwamas	
	case 4:
		printf("What amount of Chicken & Sausage Sharwamas would you like? \n");
		scanf("%d", &amount);
		Amount = 1100 * amount;
	//Scrambled Eggs with Sweet and Spicy Noodles	
	case 5:
		printf("What amount of Scrambled Eggs with Sweet and Spicy Noodles would you like? \n");
		scanf("%d", &amount);
		Amount = 1000 * amount;

		
	default:
		printf("Your bill is %ld ", Amount );
	}
	
	
	return 0;
}
	
		
	
