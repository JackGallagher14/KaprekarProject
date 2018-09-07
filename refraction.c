#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

double angle1, angle2, indexOfRefraction;

printf("Please enter the angle that the light enters in at: \n");
scanf("%lf", &angle1);

printf("Please enter in the index of refraction for the second material: \n" );
scanf("%lf", &indexOfRefraction);

angle2 = (angle1/indexOfRefraction);

printf("Angle of Incidence: %f degrees \n", angle1);
printf("Index of Refraction: %f \n", indexOfRefraction);
printf("Angle of Refraction: %f degrees \n", angle2);
}
