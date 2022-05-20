#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
FILE* fp = fopen("input.txt", "r");
int higher = 0;
char t[256];
fscanf(fp, "%s\n", t);
t[strcspn(t, "\n")] = 0;
int prev = atoi(t);
char c[256];
while(fscanf(fp, "%s\n", c) == 1){
    c[strcspn(c, "\n")] = 0;
    int current = atoi(c);
    if(current>prev){
        higher++;
    }
    prev = current;
}

fclose(fp);
printf("%i\n", higher);
}