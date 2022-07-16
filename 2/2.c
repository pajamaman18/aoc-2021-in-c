#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int horz, depth;
    FILE* fp = fopen("input.txt", "r");
    char t[11];
    while(fscanf(fp, "%s\n", t) == 1){
    // printf("%i\n", 1);
        t[strcspn(t, "\n")] = 0;
        int number = 10;
        printf("%c\n", t[number]);
        while(t[number] == \0){
            // printf("%i\n", number);
            number--;
        }
        
        int val = atoi(&t[number]);
        printf("%i\n", val);
        if(number == 3){
            depth -= val;
        }else if(number == 5){
            depth += val;
        }else{
            horz += val;
        }
    }
    printf("h: %i, d: %i, m: %i\n", horz, depth, horz*depth);
    
    
}