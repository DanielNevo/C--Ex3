#include <stdio.h>
#define SIZE 50
#include "isort.h"
void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}


  void shift_element(int* arr, int i)
{
    int temp=*(arr+i);
   // printf("%d",a );
   while(i>0){
          *(arr+i)=*(arr+i-1);
          i--;
   }
   *(arr)=temp;
}

void insertion_sort(int* arr , int len){
    for(int i=1;i<len;i++){
       int j=i;
        while(j>0 &&*(arr+j-1)>*(arr+j)){
            swap(arr+j-1,arr+j);
            j--;
        }
    }
}




