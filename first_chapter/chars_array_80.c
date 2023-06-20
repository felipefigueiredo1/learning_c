#include <stdio.h>
#define MAXLINE 1000 /*max input line length*/
#define LIMIT 80

int getline_(char line[], int maxline);

/*print the longest input line*/
int main() {
    int len; /*current line length*/
    char line[MAXLINE]; /*current input line*/

    while((len = getline_(line,MAXLINE)) > 0) // char array line is passed to the function, but arrays is passed by address not by value
        if(len > LIMIT) 
            printf("%s", line);
        
    return 0;
}

/*getline: read a line into s, return length*/
int getline_(char line[], int maxline) { 
    int c, i;

    for(i = 0; i < maxline-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        if(c != '\t' && c != ' ')
            line[i] = c;

    if(c == '\n') { 
        line[i] = c;
        ++i;
    }

    line[i] = '\0'; 

    return i; 
}