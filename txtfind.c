
#include <string.h>
#include <stdio.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30
//EOF end of file 
int get_line(char s[]){
    int counter = 0;
    char ch = getc(stdin);
    while ((ch != '\n') && (ch != EOF) && (counter< LINE))
    {
        s[counter] = ch;
        ch = getc(stdin);
        counter++;
    }
    s[counter] = '\0';
    
    if (ch!=EOF){
        return ++counter;
}

    return counter;
}
int get_word(char w[]){
int counter = 0;

    char ch = getc(stdin);
    while ((ch != '\n') &&(ch != '\t')&&(ch != ' ') &&(ch!= EOF) && (counter<WORD))
    {
        w[counter] = ch;
        ch = getc(stdin);
        counter++;
    }
    w[counter] = '\0';

    if (ch!=EOF){
        return ++counter;
}
return counter;
}
int substring( char* str1, char* str2){
  int i=0;
  int j=0;
  int counter=0;
  int sum=strlen(str2);

     while(*(str1+j)!='\0'){
         
         if(*(str2+i)==*(str1+j)){
         
             i++;
             j++;
             counter++;
              if(counter==sum){
           return 1;
         }
         }
         else{
             j++;
             counter=0;
             i=0;
         }
         }
    
     return 0;
  }
int similar (char *s, char *t, int n){
    if(strcmp(s,t)==0&&n==0){//if are the same check accki 
        return 1;
    }
int i=0;//s
int j=0;//t
int counter=0;
int sum_t=strlen(t);
int sum_s=strlen(s);
while(*(t+j)!='\0'&&*(s+i)!='\0'){
 if(*(t+j)==*(s+i)){
     i++;
     j++;
     counter++;
 } 
 else{
     i++;
 }
}
if(counter==sum_t&&sum_s-n==sum_t){
    return 1;
}
return 0;
}
void print_lines(char * str){
    char line[LINE]={'\0'};
    while(get_line(line)!=0){
        if(substring(line,str)==1){
            printf("%s\n",line);
        }
    }
}
void print_similar_words(char * str){
    char word[WORD]={'\0'};
    while(get_word(word)!=0){
       if (similar(word,str, 0)==1 || similar(word, str,1)==1){
            printf("%s\n", word);
       }
    } 
}


