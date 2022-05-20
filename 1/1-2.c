#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sum(int list[]){
    int s = 0;
    for(int i = 0; i < 3; i++){
        s += list[i];
    }
    return s;
}

void main(){
FILE* fp = fopen("input.txt", "r");
int prev = 0;
char t[256];
int vals[3];
for(int i = 0; i < 3; i++){
    fscanf(fp, "%s\n", t);
    t[strcspn(t, "\n")] = 0;
    prev += atoi(t);
    vals[i] = atoi(t);
}
int higher = 0;

int i = 0;
char c[256];
while(fscanf(fp, "%s\n", c) == 1){
    c[strcspn(c, "\n")] = 0;
    vals[i%3] = atoi(c);
    int current = sum(vals);
    if(current>prev){
        higher++;
    }
    prev = current;
    i += 1;
}

fclose(fp);
printf("%i\n", higher);
}