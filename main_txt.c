#include<stdio.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30


int main()
{
    char line[LINE]={'\0'};
    char word[WORD]={'\0'};
     int l=0;
     int w=0;
    if(fgets(line,LINE,stdin)!=NULL){
    while(line[l] == ' ' || line[l] == '\t' ){
           word[w]=line[l];
           l++;
           w++;
    }
    }
    word[w]='\0';
    l++;
    char qustion=line[l];
    if(qustion=='a'){
	    print_lines(word);
    }
	 if(qustion=='b'){
    	print_similar_words(word);
    }
    return 0;
}
