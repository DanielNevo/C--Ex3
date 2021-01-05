#define LINE 256
#define WORD 30

//The function gets a string (character by character) which is the input standard and keeps it in a string. The function returns
//The amount of characters actually absorbed
int getLine(char s[]);

//The function gets a string (character by character) which is the input standard and keeps it in the string w. The function
//Returns the amount of characters actually absorbed.
int getword(char w[]);

//The function takes two str1 and str2 strings and checks if str2 is contained in str1). Sub-string
int substring( char * str1, char * str2);

//The function will get two strings t s and a number n. The function will check if it is possible to get from the string S to the string t
//By omitting n characters.
int similar (char *s, char *t, int n);

//The function gets the desired string for the search, picks up the lines of text, and prints the lines in them
//Appears
void print_lines(char * str);

//The function gets the desired string for the search, picks up the text words and prints the words
//Similar to a string
//The search to the point of omitting one letter from the words that appear in the text) includes the same words as the string
//The search 
void print_similar_words(char * str);
