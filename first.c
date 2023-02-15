//Q1
/*
#include <stdio.h>
int main()
{
   char a;
   printf("Enter a single character: ");
   scanf("%c",&a);
   printf("%c is beautiful!\n",a);
   printf("\"How are you, %c?\"",a);
   return 0;
}
*/
//Q2
/*
#include <stdio.h>
int main()
{
   int m,hours,minutes;
   printf("Enter the value of the minutes: ");
   scanf("%i",&m);
   if (m>=1440)
   {
      printf("Invalid input");
   }
   else
   {
      hours = m/60;
      minutes = m%60;
      printf("It means %i hours %i minutes",hours,minutes);
   }
   return 0;
}
*/
//Q3
/*
#include <stdio.h>
#include <math.h>
int main ()
{
   float difference,S,h;
   printf("Enter the difference between height and base: ");
   scanf("%f",&difference);
   printf("Enter the area: ");
   scanf("%f",&S);
   h=(-difference+sqrt(difference*difference+8*S))/2;
   printf("The height is %.3f",h);
   return 0;
}
*/
//Q4
/*
#include <stdio.h>
int main ()
{
   int n,a;
   printf("Enter the number: ");
   scanf("%i",&n);
   int summ=0;
   while (n>0)
   {
      a=n%10;
      summ=summ+a;
      n=n/10;
   }
   printf("The answer is %i",summ);
   return 0;
}
*/
//Q5
/*
#include <stdio.h>
int main()
{
   int N;
   printf("Enter the value of the seconds: ");
   scanf("%i",&N);
   int day,hour,minute,second;
   day=N/(24*60*60);
   hour=N/(60*60)%24;
   minute=(N/60)%60;
   second = N%60;
   printf("%i %i %i %i",day,hour,minute,second);
   return 0;
}
*/
//Q6
/*
#include<stdio.h>
int main()
{
   int a,n,b;
   printf("Enter the number: ");
   scanf("%i",&a);
   while (a>0)
   {
      n=a%10;
      b=b*10+n;
      a=a/10;
   }
   printf("The answer is %i",b);
   return 0;
}
*/
//Q7
/*
#include <stdio.h>
int main() 
{
    int a,b,answer;
    printf("Enter two number: ");
    scanf("%i %i",&a,&b);
    answer=a-b;
    printf("The substraction result is: %i",answer);
    return 0;
}
*/
//Q8
/*
#include <stdio.h>
int main() {
    int a,b,perimeter,area;
    printf("Enter the sides of rectungular: ");
    scanf("%i %i",&a,&b);
    perimeter=2*(a+b);
    area=a*b;
    printf("The perimeter of the rectangular: %i\n",perimeter);
    printf("The area of the rectangular: %i",area);
    return 0;
}
*/
//Q9
/*
#include<stdio.h>
int main()
{
    printf("C:/aydinnasirzade/docs/desktop\n");
    printf("\\\\\\\\\\ I am so excited for today's lab session\\\\\\\\\\\n");
    printf("You can see three quotation marks right here: \"\"\"...\"\"\"\n");
    printf("I can now code \"Hello, world!\"\n");
    return 0;
}
*/
//Q10
/*
#include<stdio.h>
int main()
{
   int a = 5, b = 2;
   float c = (float) a / b;
   printf("%.3f\n", c);
   return 0;
}
*/
//Q11
/*#include <stdio.h>
int main(void)
{
    char charVal;
    printf("Enter a single character: ");
    scanf("%c", &charVal);
    printf("Memory address of '%c' is %p\n", charVal, &charVal);   
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int i;
    while (i <= a && i <= b)
    {
         if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("%i", gcd);
    return 0;
}
*/

