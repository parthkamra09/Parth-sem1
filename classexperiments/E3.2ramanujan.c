#include<stdio.h>
int main()
{
int i,num,x,y,count;

num=20;

for(i=1;i<=num;i++)
{
count=0;
for(x=1;x*x*x<i;x++)
{

for(y=x;x*x*x+y*y*y<=i;y++)
{
//list all the numbers
if(x*x*x+y*y*y==i)
{
count++;
 
}
}
}
if(count==2)
{
printf("%d\n",i);
}
}
return 0;
}