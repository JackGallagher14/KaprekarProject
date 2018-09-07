#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  double weeks, days, years1;
  double years2, intitialValue, finalValue, rateOfReturn;

  printf("Please enter in the initial value of your investment: \n");
  scanf("%lf", &intitialValue);

  printf("Please enter in the final value of your investment: \n");
  scanf("%lf", &finalValue);

  printf("How many years have you had this investment: \n");
  scanf("%lf", &years1);

  printf("How many weeks out of the current year have you had the investment: \n");
  scanf("%lf", &weeks);

  printf("How many days out of the current week have you had your investment: \n");
  scanf("%lf", &days);

  years2 = (double) years1 + (weeks/52) + (days/365);

  rateOfReturn = (pow((finalValue/intitialValue),(1/years2)) - 1) * 100;

  printf("Initial Value: %f \n", intitialValue);
  printf("Final Value: %f \n", finalValue);
  printf("Years: %f \n", years2);
  printf("Rate of Return: %f% \n", rateOfReturn);


}
