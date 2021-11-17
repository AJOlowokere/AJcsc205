#include <stdio.h>
int main()
{
int UserAge ;
printf("Input User Age : \n");
scanf("%d", &UserAge);


if (UserAge >= 18){
printf("You can VOTE! \n");
}
else 
printf("You CANNOT vote! \n");	



{
int CSC201, CSC205, STA205, Total, Average, Percentage;
printf ("Input scores for CSC 201 \n");
scanf("%d", &CSC201);
printf ("Input scores for CSC 205 \n");
scanf("%d", &CSC205);
printf ("Input scores for STA 205 \n");
scanf("%d", &STA205);
Total = CSC201 + CSC205 + STA205;
printf ("Total scores = %d ", Total);
Average = Total/3 ; 
printf ("Average score = %d ", Average);
Percentage = (Average/Total) * 100;
printf ("Percentage = %d% ", Percentage);
}
}

