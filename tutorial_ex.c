 #include<stdio.h>
int main()
{
   int age;
   printf("Enter Your age\n");
   scanf("%d", &age);
   printf("You Have Entered %d as your age\n", age);
   if (age>=18)
   {
       printf("you can vote!");

   }
   else if (age>10)
   {
       printf("You are between 10 to 18 and you can vote for kids");
   }
   
   else
   {
       printf("you cannot vote!");
   }
   
   
}