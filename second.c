OZUVE HORMET ELE!!!

//Q1
/*
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,n;
    int summ=0;
    scanf("%i",&n);
    a=abs(n);
    for (int i=0;i<=a;i++)
    {
        b=a%10;
        a=a/10;
        summ+=b;
    }
    printf("Sum is %i",summ);
    return 0;
}
*/
//Q1 (second solution)
/*
#include <stdio.h>
int main() {
    int b,n;
    int summ=0;
    scanf("%i",&n);
    if (n<0)
    {
        n=-n;
    }
    for (int i=0;i<=n;i++)
    {
        b=n%10;
        n=n/10;
        summ+=b;
    }
    printf("Sum is %i",summ);
    return 0;
}  
*/
//Q2
/*
#include <stdio.h>
int main() 
{
    int a,b,count=0;
    scanf("%i",&a);
    if (a<0)
    {
        a=-a;
    }
    int m=-1;
    int pro=1;
    for (int i=0;i<=a;i++)
    {
        b=a%10;
        a=a/10;
        if (b%2==0)
        {
            pro*=b;  
            count++;
        }
    }
    if (count==0)
    {
        printf("%i",m);
    }
    else
    {
        printf("The answer is %i\n",pro); 
    }
    return 0;
}
*/
//Q3
/*
#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%i",&a);
    if (a<0)
    {
        a=-a;
    }
    if (a<100)
    {
        c=a%10;
        printf("%i",c);
    }
    else
    {
    while (a>100)
    {
        a=a/10;
        b=a%10;
    }
    printf("%i",b);
    return 0;
    }
}
*/
//Q4
/*
#include <stdio.h>
int main() 
{
    int rabbits,cells;
    scanf("%i %i",&cells,&rabbits);
    if (rabbits%cells == 0)
    {
        printf("%i",rabbits/cells);
    }
    else
    {
        printf("%i",rabbits/cells +1);
    }
}
*/
//Q5
/*
#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
    
     scanf("%i %i",&x1,&y1);
     scanf("%i %i",&x2,&y2);
     scanf("%i %i",&x3,&y3);

     float l12,l23,l13;
     l12 = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
     l23 = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
     l13 = sqrt(pow((x1-x3),2) + pow((y1-y3),2));

     float angle;
     if (l12>l23 && l12>l13){
     angle = ((l12*l12)-(l23*l23)-(l13*l13))/(-l23*l13);
    }
    if (l13>l23 && l13>l12){
    angle = ((l13*l13)-(l23*l23)-(l12*l12))/(-l23*l12);
    }
    if (l23>l12 && l23>l13){
        angle = ((l23*l23)-(l12*l12)-(l13*l13))/(-l12*l13);
    }
    printf("%f", 180*acos(angle)/M_PI);
}
*/			
//Q6
/*
#include<stdio.h>
int main()
{
    int num,ans;
    scanf("%i",&num);
    if (num>0)
    {
        ans=(1+num)*num/2;
    }
    else 
    {
        ans=1+(-1*(num-1)*num/2);
    }
    printf("%i",ans);
    return 0;
}
*/
//Q7
/*
#include<stdio.h>
int main()
{
    int num;
    scanf("%i",&num);
    for (int i=1;i<=num;i++)
    {
        printf("%i ",i);
    }
}
/*			
//Q8
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    int i=0;
    while (n>i)
    {
        i++;
        printf("%i OK\n",i);
    }
}
*/
//Q9
/*
#include<stdio.h>
int main()
{
    int num,count,min=106;
    printf("How many number do you want to add?\n");
    scanf("%i",&count);
    printf("Enter the numbers: \n");
    for(int i = 1; i <= count; i++)
    {
        printf("Number %i = ", i);
        scanf("%i", &num);
        if (num<min)
        {
            min=num;
        }
    }
    printf("The answer is: %i", min); 
}
*/
//Q10
/*
#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%i",&n);
    if (n<=1)
    {
        printf("We can't say prime number to negative numbers, 0 and 1");
    }
    else
    {
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    }
}   
*/
//Q11
/*
#include<stdio.h>
int main()
{
    int summ=0,num;
	printf("Enter the numbers:\n");
    scanf("%i", &num);
    while (num >= 0) 
    {
        summ += num;
        scanf ("%i", &num);
    }
    printf ("The sum of the numbers which you added is: %i", summ);
}
*/
//Q12
/*		
#include <stdio.h>
int main()
{   
    int num,count,summ = 0;
    printf("How many number do you want to add?\n");
    scanf("%i",&count);
    printf("Enter the numbers: \n");
    for(int i = 1; i <= count; i++)
    {
        printf("Number %i = ", i);
        scanf("%i", &num);
        if(num < 0)
        {
            continue;
        }
        summ+=num;
    }
    printf("The sum of these numbers: %i", summ); 
}
*/
//Q13
/*
#include<stdio.h>
int main()
{
    int n;
    float ans;
    scanf("%i",&n);
    ans = 1-(1.0/(n+1));
    printf("%f",ans);
}
*/
//Q13 (second solution)
/*
#include <stdio.h>
int main() 
{
    int n;
    scanf("%i",&n);
    float a=0;
    for (int i =1; i<=n; i++){
    a+=1.0/((double)i*((double)i+1));
    }
    printf("%f",a);
}
*/
//Q14
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%i",i);
    }
    for (int i=(n-1);i>=1;i--)
    {
        printf("%i",i);
    }
}
*/			
//Q15 and Q16 together
/*
#include<stdio.h>
int main()
{
    int num,num1,b,count;
    scanf("%i %i",&num,&num1);
    while(num>0)
    {
        b=num%10;
        if(b==num1)
        {
            count++;
            if (count==2)
            {
                printf("Yes");
            }
        }
        num=num/10;
    }
    return 0;
}
*/
//Q17
/*
#include <stdio.h>
int main() 
{
    int rev = 0, a, b, ori;
    printf("Enter the number to check whether it is palindrome or not?\n");
    scanf("%i", &a);
    ori = a;
    while (a != 0) {
        b = a % 10;
        rev = rev * 10 + b;
        a /= 10;
    }
    if (ori == rev)
        printf("Yes");
    else
        printf("No");
    return 0;
}
*/
//Q18
/*
#include<stdio.h>
int main()
{
    int num,count;
    scanf("%i",&num);
    for (int i=1;i<num;i++)
    {
        if (num%i==num/i)
        {
            count++;
        }
    }
    printf("%i",count);
}					  
*/
//Q19
/*
#include <stdio.h>
#include <math.h>
int main() {
    int n = 10; 
    double e = 1.0; 
    int i;
    for (i = 1; i <= n; i++) {
        e += 1.0/factorial(i);
    }
    printf("The estimated value of e is: %.10lf\n", e);
    return 0;
}

int factorial(int x) {
    int result = 1;
    int i;
    for (i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}
*/
		  
		  
