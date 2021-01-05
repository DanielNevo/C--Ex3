#include <stdio.h>
#include "isort.h"
#define SIZE 50


int main()
{
    int arr[SIZE];
    int i=0;
    while(i<SIZE){
    scanf("%d",arr+i);
        i++;
    }
  
  for(int i=0;i < SIZE;i++){
         printf("%d",*(arr+i));
        if(i!= 49) printf(",");
    } 
  
insertion_sort(arr ,SIZE);

    for(int i=0;i < SIZE;i++){
         printf("%d",*(arr+i));
        if(i!= 49) printf(",");
    } 
}

