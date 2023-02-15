//Lab 3
//Q1
/*
#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%i %i %i", &n,&a,&b);
	if (n % a == 0 && n % b == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
*/
//Q2
/*
#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%i",&a);
    if (a<0)
    {
        a=-a;
    }
    b=a%10;
    c=a/10%10;
    d=a/100%10;
    printf("%i\n%i\n%i\n",d,c,b);
}
*/
//Q3
/*
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%i %i",&m,&n);
    int a=1;
    int b=0;
    if (m%2==0 && n%2==0 || m%2==1 && n%2==1)
    {
        printf("%i",a);
    }    
    else
    {
        printf("%i",b);
    }
}
*/
//Q4
/*
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%i %i",&m,&n);
    if (m>n)
    {
        printf("%i %i",n,m);
    }    
    else
    {
        printf("%i %i",m,n);
    }
}
*/
//Q5
/*
#include<stdio.h>
int main()
{
    int t1,t2,t3;
    scanf("%i %i %i",&t1,&t2,&t3);
    if (t1<t2 && t1<t3)
    {
        printf("%i",t1);
    }    
    else if (t2<t1 && t2<t3)
    {
        printf("%i",t2);
    }
    else 
    {
        printf("%i",t3);
    }
}
*/
//Q6
/*
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if (a>=b && a>=c && a>=d)
    {
        printf("%i",a);
    }    
    else if (b>=a && b>=c && b>=d)
    {
        printf("%i",b);
    }
    else if (c>=a && c>=b && c>=d)
    {
        printf("%i",c);
    }
    else 
    {
        printf("%i",d);
    }
}
*/
//Q7
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i %i %i %i",&a,&b,&c);
    if ((a%2==0 || b%2==0 || c%2==0) && (a%2==1 || b%2==1 || c%2==1))
    {
        printf("YES");
    }    
    else 
    {
        printf("NO");
    }
}
*/
//Q8
/*
#include<stdio.h>
int main()
{
    long long int h,w,l,k;
    scanf("%li %li %li %li",&h,&w,&l,&k);
    long long int area=h*w*l;
    if (area%k==0)
    {
        printf("%li",area/k);
    }    
    else 
    {
        printf("%li",area/k+1);
    }
}
*/
//Q10
/*
#include <stdio.h>
int main() 
{ 
    int b,g,k;
    scanf("%i %i %i",&b,&g,&k);
    int summ=0;
    if (b%k==0)
    {
        summ+=(b/k);
    }
    else if (b%k!=0)
    {
        summ+=(b/k+1);
    }
    if (g%k==0)
    {
        summ+=(g/k);
    }
    else if (g%k!=0)
    {
        summ+=(g/k+1);
    }
    printf("%i",summ);
}
*/
//Q11
/*
#include <stdio.h>
int main() 
{
int a, b, c, mid;
scanf("%d %d %d", &a, &b, &c);
mid = (a + b + c) / 2;
int m = 0;
if (a + b == mid || a + c == mid || b + c == mid) 
{
    printf("%i",m);
}
else
{
if (mid < a) 
{
    printf("1\n%d %d\n", mid, a - mid);
}
else
{
if (mid < a + b) 
{
    printf("2\n%d %d\n", mid - a, a + b - mid);
}
else 
{
    printf("3\n%d %d\n", mid - a - b, mid);
}
}
}
}
*/
//Q12
/*
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i %i",&a,&b);
    if (a%b==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("%i %i",a/b,a%b);       
    }
}
*/
//Q13
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int r,a,b;
    scanf("%i %i %i",&r,&a,&b);
    float area1=sqrt(a*a+b*b);
    int area2=2*r;
    if (area2>=area1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");       
    }
}
*/
//Q14
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    int m=1;
    int n=2;
    int z=3;
    if (a==b && b==c)
    {
        printf("%i",m);
    }
    else if (a==b || b==c || a==c)
    {
        printf("%i",n);
    }
    else
    {
        printf("%i",z);
    }
}
//Q15
/*
#include <stdio.h>
int main() 
{
    int a,b,c,x,y;  
    scanf("%i %i %i %i %i",&a,&b,&c,&x,&y);
    if (a<=x && b<=y)
    {
        printf("YES");
    }
    else if (b<=x && c<=y)
    {
        printf("YES");
    }
    else if (c<=x && a<=y)
    {
        printf("YES");
    }
    else if (a<=y && b<=x)
    {
        printf("YES");
    }
    else if (b<=y && c<=x)
    {
        printf("YES");
    }
    else if (c<=y && a<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
*/
//Q16
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    if (a < b + c && b < a + c && c < a + b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
*/
//Q17
/*
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%i",&x);
    if (x<-4)
    {
        y=x+5;
        printf("%i",y);
    }
    else if (x>=-4 && x<=7)
    {
        y=x*x-3*x;
        printf("%i",y);
    }
    else if (x>7)
    {
        y=x*x*x+2*x;
        printf("%i",y);
    }
}
*/
//Q18
/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    if (n%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
*/
//Q19
/*
#include <stdio.h>
int main() 
{
    int k,w,a1,b1,a2,b2,a3,b3;
    scanf("%i %i",&k,&w);
    scanf("%i %i %i %i %i %i",&a1,&b1,&a2,&b2,&a3,&b3);
    if((a1<=w && b1>=k) || (a2<=w && b2>=k) || (a3<=w && b3>=k) || ((a1+a2)<=w && (b1+b2)>=k) || ((a1+a3)<=w && (b1+b3)>=k) || ((a3+a2)<=w && (b3+b2)>=k) || ((a1+a2+a3)<=w && (b1+b2+b3)>=k))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
*/
//Q20
/*
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%i",&x);
    if (x<5)
    {
        y=x*x-3*x+4;
        printf("%i",y);
    }
    else
    {
        y=x+7;
        printf("%i",y);
    }
}
*/
//Q21
/*
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%i",&x);
    if (x>=10)
    {
        y=x*x*x+5*x;
        printf("%i",y);
    }
    else
    {
        y=x*x-2*x+4;
        printf("%i",y);
    }
}
*/
//Q22
/*
#include<stdio.h>
int main()
{
    long long int n;
    scanf("%li",&n);
    if (n>0)
    {
        printf("Positive");
    }
    else if (n<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}
*/
//Q23
/*
#include <stdio.h>
int main() 
{
    int a;
    scanf("%i",&a);
    if (a>=1 && a<=3)
    {
        printf("Initial");
    }
    else if (a>=4 && a<=6)
    {
        printf("Average");
    }
    else if (a>=7 && a<=9)
    {
        printf("Sufficient");
    }
    else if (a>=10 && a<=12)
    {
        printf("High");
    }
}
*/
//Q24
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i",&a);
    b=a%10;
    c=a/100;
    if (b>c)
    {
        printf("%i",b);
    }
    else if (b<c)
    {
        printf("%i",c);
    }
    else
    {
        printf("=");
    }
}
*/
//Q25
/*
#include <stdio.h>
int main() 
{
    int a;
    scanf("%i",&a);
    if (a==1 || a==2 || a==12)
    {
        printf("Winter");
    }
    else if (a==3 || a==4 || a==5)
    {
        printf("Spring");
    }
    else if (a==6 || a==7 || a==8)
    {
        printf("Summer");
    }
    else if (a==9 || a==10 || a==11)
    {
        printf("Autumn");
    }
}
*/
//Q25 (Second Solution)
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    switch (a)
    {
        case 1:
        printf("Winter");
        break;
        case 2:
        printf("Winter");
        break;
        case 3:
        printf("Spring");
        break;
        case 4:
        printf("Spring");
        break;
        case 5:
        printf("Spring");
        break;
        case 6:
        printf("Autumn");
        break;
        case 7:
        printf("Autumn");
        break;
        case 8:
        printf("Autumn");
        break;
        case 9:
        printf("Summer");
        break;
        case 10:
        printf("Summer");
        break;
        case 11:
        printf("Summer");
        break;
        case 12:
        printf("Winter");
        break;
    }
}
*/