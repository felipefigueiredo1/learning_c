#include <stdio.h>
#define MAXLINE 1000 /*max input line length*/

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

/*print the longest input line*/
int main() {
    int len; /*current line length*/
    int max; /*maximum length seen so far*/
    char line[MAXLINE]; /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    max = 0;
    while((len = getline_(line,MAXLINE)) > 0) // char array line is passed to the function, but arrays is passed by address not by value
        if(len > max) {
            max = len; // receive length of  string/chararray
            copy(longest, line); // get the line string/array char and put in longest string/array char
        }

    if(max > 0)
        printf("%s", longest);
    
    return 0;
}

/*getline: read a line into s, return length*/
int getline_(char line[], int lim) { 
    int c, i;

    /*and the for bellow will insert string to line array*/
    for(i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        line[i] = c;
    if(c == '\n') { // if is '\n' , c will receive last char '\n' and increment the var i for the las time
        line[i] = c;
        ++i;
    }

    line[i] = '\0'; // and the last incremented i above will receive '\0'

    return i; // return string/char array size
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0') // iterate all chars in to[] and pass to from[] until is different from '\0'
        i++;
}