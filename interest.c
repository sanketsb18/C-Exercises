/* Simple Interest */

#include <stdio.h>
 
int main()
{ 
 float principle, rate, sinterest;
 int time;
 
 printf("Enter Principle Amount:");
 scanf ("%f", &principle);

 printf("Enter rate %% per annum:");
 scanf ("%f", &rate);

 printf("Enter time:");
 scanf ("%d", &time);
 
 sinterest = (principle * rate * time)/ 100.0;
 
 printf ("Principle Amount = %5.2f\n", principle);
 printf ("Rate %% per Annum   = %5.2f\n", rate);
 printf ("Time   = %d years\n", time);
 printf ("Simple Interest  = %5.2f\n", sinterest);

 return 0;

}