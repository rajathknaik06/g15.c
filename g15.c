/*Problem Statement



Ramu and Somu are going on a picnic. Ramu packs m apples, n oranges. Somu packs m1 more apples than Ramu and n1 more oranges than Ramu. If Somu eats x of his apples and Ramu eats y of Somu's oranges, how many apples and oranges are left in total?



Example



Input

4 3 2 8 3 2



Output

7 12



Explanation: 

m=4: Ramu packs 4 apples.

n=3: Ramu packs 3 oranges.

m1=2: Somu packs 2 more apples than Ramu, so Somu has a total of 4+2=6 apples.

n1=8: Somu packs 8 more oranges than Ramu, so Somu has a total of 3+8=11 oranges.

x=3: Somu eats 3 apples.

y=2: Ramu eats 2 oranges.



Total apples left: m+(m+m1)−x=4+(4+2)−3=7

Total oranges left: n+(n+n1)−y=3+(3+8)−2=12

Input format :
Input consists of six space-separated integers: m, n, m1, n1, x, and y.

m - corresponds to the apples brought by Ramu.
n - corresponds to the oranges brought by Ramu.
m1 – Apples brought by Somu.
n1 – Oranges brought by Somu.
x - apples were eaten by Somu.
y – oranges were eaten by Ramu.
Output format :
The output displays two integers representing the remaining apples and oranges respectively.*/
#include<stdio.h>
int main(){
     int m, n,m1,n1,x,y;
     scanf("%d%d%d%d%d%d",&m,&n,&m1,&n1,&x,&y);
     
     int remainingapples =m+(m+m1)-x;
     int remainingoranges =n+(n+n1)-y;                       //   4 3 2 8 3 2   - ans  7 12
     
     printf("%d\n%d",remainingapples,remainingoranges);
     
     return 0;
}

// or 
/*#include<stdio.h>

int main()
{
   int m,n,m1,n1,x,y,total_apples,total_oranges;     //432832   ans 7 12
   scanf("%d",&m);
   scanf("%d",&n);
   scanf("%d",&m1);
   scanf("%d",&n1);
   scanf("%d",&x);
   scanf("%d",&y);
   total_apples=m+(m+m1);
   total_oranges=n+(n+n1);
   printf("%d %d",(total_apples-x),(total_oranges-y));
   return 0;
   }*/
