#include <stdio.h>

int main( void )
{
   float weight, height;

   puts( "Please enter your weight in pounds" );
   scanf( "%f", &weight);

   puts( "Please enter your weight in inches" );
   scanf ("%f", &height);

   float body_mass;
   body_mass = (weight * 703) / (height * height);

   printf( "Your body mass index in %f\n", body_mass );

   if (body_mass < 18.5) {
   	puts("Your BMI is Underweight");
   	puts("Eat a cheeseburger");
   }
   else if (body_mass < 24.9) {
   	puts("Your BMI is Normal");
   	puts("Good job");
   }
   else if (body_mass < 29.9) {
   	puts("Your BMI is Overweight");
   	puts("Maybe eat a salad once in awhile");
   }
   else {
   	puts("Your BMI is Obese");
   	puts("Please put down the fork you fat ass");
   }
}
