//q.4
#include<stdio.h>
int main()
{
  int x,y,z,gt,avg,a,b,c;
  printf("please enter your marks in three subjects respectively (between 1-10) :- ");
  scanf("%d%d%d",&a,&b,&c);
  if((a>=5)&&(b>=5)&&(c>=5))
  {
   if((a>b)&&(a>c))
   {
    if(b>c)
    {
      printf("marks in ascending order is :-%d %d %d",c,b,a);
    }
    else{
      printf("marks in ascending order is :-%d %d %d",b,c,a);
    }
   }
   else if((b>c)&&(b>a))
   {
     if(a>c)
    {
      printf("marks in ascending order is :-%d %d %d",c,a,b);
    }
    else{
      printf("marks in ascending order is :-%d %d %d",a,c,b);
    }
   }
   else
   {
     if(a>b)
    {
      printf("marks in ascending order is :-%d %d %d",b,a,c);
    }
    else{
      printf("marks in ascending order is :-%d %d %d",a,b,c);
    }
   }
  }
  else
  {
    avg=(a+b+c)/3;
    printf("average is = %d",avg);
  }
  return 0;
}