(1)
#include <stdio.h>
#include <stdlib.h>

int lastindex(int* arr, int size , int num)
{
    if(size < 1)
        return -1;
    if(num == arr[size-1])
        return size-1;
    return lastindex(arr, size-1,num);
}

int main()
{
    int num;
    while(1)
    {
    int nums[10] = {3,5,4,7,4,4,2,1,6,4};
    printf("enter a number");
    scanf("%d",&num);
    int index = lastindex(nums , 10 , num);
    printf("%d\n",index);
    }
}
(2)
#include <stdio.h>
#include <stdlib.h>

void arrminmax(int arr[] , int size , int *max , int *min, int *minindex, int *maxindex )
{
    *min = arr[0];
    *max = arr[0];
    *minindex = 0;
    *maxindex= 0;
    for(int i = 1 ; i < size ;i++)
    {
        if(*min > arr[i])
        {
            *min = arr[i];
            *minindex = i;
        }
        if(*max < arr[i])
        {
            *max = arr[i];
            *maxindex = i;
        }
    }
}
int main()
{
    int max    , min  , maxindex , minindex ;
    int nums[10] = {3,5,4,7,4,4,2,1,6,4};
    arrminmax(nums,10,&max,&min,&maxindex,&minindex);
    printf(" the max is %d and its index is %d  \n the min is %d and its index is %d",max,maxindex,min,minindex);
}
(3)
#include <stdio.h>
#include <stdlib.h>

int powerof3(int num)
{
     if(num == 1)
        return 0 ;
    if(num % 3 != 0 || num == 0)
        return 1;

    return powerof3(num/3);
}

int main()
{
    int num;
    while(1)
    {
        printf("enter number");
        scanf("%d",&num);
          int ret = powerof3(num);
        printf("%d\n",ret);
    }

}
(4)
#include <stdio.h>
#include <stdlib.h>

int * between2num(int num1,int num2)
{
   int size = num2-num1-1;
   int* arr = calloc(size,sizeof(int));
   for(int i = num1+1, j = 0 ; i < num2 ; i++, j++)
   {
       arr[j] = i;
   }
   return arr;
}
int main()
{
    int num1,num2;
    while(1)
    {
        printf("enter two numbers");
        scanf("%d%d",&num1,&num2);
          int size = num2-num1-1;
         int *arr = calloc(size,sizeof(int));
         arr = between2num(num1,num2);
         for(int i =0 ; i < size ; i++)
         {
            printf("%d\n",arr[i]);
         }
         free(arr);
    }
}
(5)
#include <stdio.h>
#include <stdlib.h>

void sort(int * arr , int size)
{
   int temp, smallest  ;
    for(int i = 0 ; i < size  ;i ++)
    {
        smallest = arr[i];
        for(int j = i+1 ; j < size ;j++)
        {
            if(arr[j] < smallest)
            {
                temp = smallest;
                smallest = arr[j];
                arr[j] = temp;
            }
        }

        arr[i] = smallest;
    }
}

int longoccurance (int * arr , int size  )
{
    int max = 0;
    int count = 1;
    int num;
    for(int i = 1 ; i < 11 ; i++ )
    {
         if(arr[i] == arr[i-1])
         {
             count++;
         }
         else
         {
             if(max < count)
             {
                 max = count;
                 count = 1;
                 num = arr[i-1];
             }
         }
    }
    if(count > max )
    {
        max = count;
        num = arr[size-1];
    }

    return num;
}
int mostrepeted(int *arr , int size)
{
    sort(arr,size);
    longoccurance(arr,size);

}

int main()
{
     int arr[10] = {4,5,2,4,1,5,1,4,5,4};
   int max =  mostrepeted(arr,10);
     for(int i = 0 ; i < 10 ; i++)
     {
         printf("%d ", arr[i]);
     }
     printf("\n%d ", max);

}

(6)
#include <stdio.h>
#include <stdlib.h>

void revarr (int * arr , int size)
{
    int temp;
    for(int i = 0 , j = size-1 ; i < (size/2) ;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{

     int arr[11] =  {1,2,3,5,2,5,6,7,8,1,2};
     revarr(arr,11);
     for(int i = 0 ; i < 11 ;i++)
     {
         printf("%d ",arr[i]);
     }

}
(7)
#include <stdio.h>
#include <stdlib.h>

void swaparr (int * arr1 , int size1 , int* arr2 , int size2)
{
    int size;
    size = size2;
    int temp;
    if(size1 < size2)
    {
        size = size1;
    }
    for(int i = 0  ; i < size ;i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
int main()
{

     int arr[11] =  {1,2,3,5,2,5,6,7,8,1,2};
     int zarr[5] = {2,5,6,8,4};
    swaparr(arr , 11 , zarr, 5 );
     for(int i = 0 ; i < 11 ;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\n");
     for(int i = 0 ; i < 5 ;i++)
     {
         printf("%d ",zarr[i]);
     }

}
(8,9)
#include <stdio.h>
#include <stdlib.h>

int longoccurance (int * arr , int size , int* num )
{
    int max = 0;
    int count = 1;
    for(int i = 1 ; i < 11 ; i++ )
    {
         if(arr[i] == arr[i-1])
         {
             count++;
         }
         else
         {
             if(max < count)
             {
                 max = count;
                 count = 1;
                 *num = arr[i-1];
             }
         }
    }
    if(count > max )
    {
        max = count;
        *num = arr[size-1];
    }

    return max;
}

int main()
{
     int arr[11] =  {5,5,5,5,5,5,7,7,7,7,7};
     int num;
    int max = longoccurance(arr,11,&num);
     printf("longest accurance is %d\n the number is %d", max, num);
}
(10)
#include <stdio.h>
#include <stdlib.h>

int * mergearr (int * arr1 , int size1 , int* arr2 , int size2)
{
    int temp;
    int size = size1+size2;
    int *arr  = calloc(size , sizeof(int));
    for(int i = 0  ; i < size1 ;i++)
    {
        arr[i] = arr1[i];

    }
     for(int i = 0  ; i < size1 ;i++)
    {
        arr[i] = arr1[i];

    }
     for(int i = size1 , j = 0  ; i < size1+size2 ;i++,j++)
    {
        arr[i] = arr2[j];
    }
    return arr;
}
int main()
{

     int arr[11] =  {1,2,3,5,2,5,6,7,8,1,2};
     int zarr[5] = {2,5,6,8,4};
     int size = 11 + 5;
     int *arrs  = calloc(size , sizeof(int));
   arrs =  mergearr(arr , 11 , zarr, 5 );
     for(int i = 0 ; i < 16 ;i++)
     {
         printf("%d ",arrs[i]);
     }
free(arrs);

}
(11)
#include <stdio.h>
#include <stdlib.h>

void sort(int * arr , int size)
{
   int temp, smallest  ;
    for(int i = 0 ; i < size  ;i ++)
    {
        smallest = arr[i];
        for(int j = i+1 ; j < size ;j++)
        {
            if(arr[j] < smallest)
            {
                temp = smallest;
                smallest = arr[j];
                arr[j] = temp;
            }
        }

        arr[i] = smallest;
    }
}
int distncitarray(int * arr , int size, int *arrn)
{
    sort(arr,size);
    int c = 0;
    for(int i = 1 ; i < size ; i++)
    {

        if(!(arr[i]==arr[i-1]))
        {
            arrn[c] = arr[i-1];
            c++;
        }

    }
    arrn[c] = arr[size-1];

return c+1;
}
int main()
{
     int arr[10] = {4,5,2,4,1,5,1,4,5,4};
     int arrn[10];
   int size =  distncitarray(arr,10,arrn);

     for(int i = 0 ; i < size ; i++)
     {
         printf("%d ", arrn[i]);
     }
}
(12)
#include <stdio.h>
#include <stdlib.h>

void swapafterzero(int* arr ,int size)
{
    int arr1[3];
    int c1,c2;
    for(int i = 0, c=0 ; i < size ; i++ )
    {
        if(c == 1 && arr[i] == 0)
        {   c2 = i+1;
            break;
        }
        if(arr[i] == 0)
        {
            c1 = i+1;
            c++;

        }
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        arr1[i] = arr[i+c1];
        arr[i+c1]  = arr[i+c2];
        arr[i+c2] = arr1[i];
    }
}

int main()
{
     int arr[16] = {4,5,0,4,1,5,1,4,5,4,7,3,0,9,4,3};

  swapafterzero(arr,16);

     for(int i = 0 ; i < 16 ; i++)
     {
         printf("%d ", arr[i]);
     }
}
(13)
#include <stdio.h>
#include <stdlib.h>

int bigestdiffrence (int *arr , int size)
{
    int smallest = 0;
    for(int i = 1 ; i < size ; i++)
    {
        if(arr[i] - arr[i-1] > smallest)
        {
            smallest = arr[i] - arr[i-1];
        }
    }
    return smallest;
}
int main()
{
     int arr[16] = {4,5,0,4,1,5,1,4,5,4,7,3,0,9,4,3};
     int big = bigestdiffrence(arr,16);
     printf("%d ", big);
}
(14)
#include <stdio.h>
#include <stdlib.h>

int mostrepeted(char *arr , int size)
{
    int maxarr[255]={0};
    int max = 0;
    int num ;
    for(int i = 0 ; i < size ;i++)
    {
       maxarr[arr[i]]++;
    }
    for(int i = 0 ; i < 255 ; i++)
    {

        if(maxarr[i]> max)
        {
            max = maxarr[i];
            num = i;
        }
    }
    return num;
}
int main()
{
    char arr[40] = {1,2,1,4,2,4,3,6,8,4,8,6,4,6,4,5,8,5,4,8,6,4,7,200,8,5,48,6,4,45,6,2,25,45,2,55,82};
     int num = mostrepeted(arr,38);
     printf("%d  \n", num);
}

(15)
#include <stdio.h>
#include <stdlib.h>

void swappointers(int **p1 , int **p2)
{
    int * temp ;
    temp = *p1 ;
    *p1 = *p2 ;
    *p2 = temp;
}
int main()
{
     int * p1 , *p2 ;
     int x= 5, z= 2;
     p1 = &x;
     p2 = &z;
     printf("%d   %d \n", p1 , p2);
     swappointers(&p1,&p2);
     printf("%d   %d \n", p1 , p2);
}
(16)
#include <stdio.h>
#include <stdlib.h>

int fibseries(int num)
{
     if(num == 0 ) return 0;
     if(num == 1 ) return 1;
     return fibseries(num-1) + fibseries(num-2) ;
}
int main()
{
      int num ;
      for(int i = 0 ; i < 20 ; i++)
      {
        num = fibseries(i);
        printf("%d ", num);
      }

}








