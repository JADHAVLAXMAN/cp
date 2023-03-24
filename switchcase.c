#include <stdio.h>
int main()
{
   int sub;
   printf("Enter Passed Subject code\n [like : math=1, science=2, both subjects=3]\n: \n");
   scanf("%d", &sub);

   switch (sub)
   {
   case 1:
      printf("you have Passed in Maths, You get 20 rupees\n");
      break;

   case 2:
      printf("you have passed in science, you get 20 rupees\n");
      break;

   case 3:
      printf("you hav passed in Both , you get 50 rupees\n");
      break;

   default:
      printf("fail");
   }
}