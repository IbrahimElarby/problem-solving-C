(1)
#include <stdio.h>
#include <stdlib.h>

int main()
{
 float radius;
while(1)
{
    scanf("%f",&radius);
    printf("area is %f and circumference is %f \n ",radius*radius*22/7.0,2*radius*22/7.0);
}
}
(2)
#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch ;
int num;
while(1)
{
scanf(" %d %c",&num,&ch);
if(num & 1)
{
   printf(" %c\n",ch);
}
else
{
    if(ch > 'A' && ch < 'Z')
    {
          ch = 'a'-'A' + ch;
    }
    else
    {
        ch = 'A'-'a' + ch;
    }
printf(" %c\n",ch);
}
}
}
(3)
#include <stdio.h>
#include <stdlib.h>

int main()
{

int num;
while(1)
{
   scanf("%d",&num);
   while(num != 0)
   {
       printf("%d",num%10);
       num=num/10;
   }
   printf("\n");
}
}
(4)
#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned int num,c;

while(1)
{
    c=0;
   scanf("%u",&num);
   while(num != 0)
   {
       c = c +(num&1);
       num=num>>1;
   }
   printf("%u\n",c);
}
}
(5)
#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned int num,c,temp;

while(1)
{
    c=0;
   scanf("%u",&num);
   temp = num;
   while(num != 0)
   {
        c++;
       num=num>>1;
   }
   for(unsigned int i = c ; c > 0;c--)
   {
      num = ((temp>>c-1) & 1 );
      printf("%u",num);
   }
     printf("\n");
}
}
(6)
#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned char num,temp;

while(1)
{

   scanf("%u",&num);
   temp = num;
   num = 0;
   for(unsigned int i = 0 , j = 7 ; i < 8;i++,j--)
   {
      num = (((temp>>j) & 1 ) << i) | num  ;

   }
     printf("%u\n",num);
}
}
(7)
#include <stdio.h>
#include <stdlib.h>

int main()
{

float sum = ((100+1)/2.0)*100;
printf("%f",sum);
}
(8)
#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned int num,temp,bit;
int choice;

while(1)
{
   printf(" 1- set bit\n 2- clear bit\n 3- toggle bit\n 4- read bit\n");
   scanf("%i",&choice);
   printf("enter number and bit number \n");
   scanf("%u%u",&num,&bit);
   switch(choice)
   {
   case 1 : num = (1<<bit)| num ;
   printf("%u\n",num) ;
   break;
   case 2 : num = (~(1<<bit))& num ;
   printf("%u\n",num) ;
   break;
   case 3 : num = (1<<bit)^ num ;
   printf("%u\n",num) ;
   break;
   case 4 : printf("%u\n",bit) ;
   break;
   }
}
}
(9.1,2)
#include <stdio.h>
#include <stdlib.h>
int incpatt(int r )
{
    if (r < 1)
        return 1;
    printf("*");
    return incpatt(r-1);
}

int main()
{
    int row;
    while(1)
    {


    printf("enter the number of row ");
    scanf("%d",&row);
   for(int i = row ; i > 0 ; i--)
   {
       incpatt(i);
       printf("\n");
   }
    for(int i = 1 ; i <= row ; i++)
   {
       incpatt(i);
       printf("\n");
   }
    }
}
(9.3)

(10)
#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned int num,c,temp;

while(1)
{
    c=0;
   scanf("%u",&num);
   temp = num;
   while(num != 0)
   {
        c++;
       num=num>>1;
   }
   int sum = 0, max =0;
   for(unsigned int i = c ; c > 0;c--)
   {
      num = ((temp>>c-1) & 1 );
      if(num == 0)
      {
          sum++;
      }
      else
      {
          if(sum > max)
          {
              max = sum;
              sum = 0;
          }
      }


   }
     printf("%d\n",max);
}
}
(11)
#include <stdio.h>
#include <stdlib.h>



int main()
{
   int l,r, a,b,max;
   scanf("%d",&l);
   scanf("%d",&r);
   max = (l ^ r);
   //printf("%d\n",max);
   for(int j = r ; j > l ; j--)
   {
         for(int i = l ; i<=r ;i++)
   {
       if((i^j) >= max)
       {
           max = (i^j);
       }
   }
   }
   printf("max is %d\n" , max);
    for(int j = r ; j > l ; j--)
   {
         for(int i = l ; i<=r ;i++)
   {
       if((i^j) == max)
       {
           a =i ;
           b = j;
           printf("a is %d    b is %d\n",a,b);
       }
   }
   }




}











