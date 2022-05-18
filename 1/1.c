#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyArray(int arr[], int copy[], int size)
{
  // loop to iterate through array
  for (int i = 0; i < size; ++i)
  {
    copy[i] = arr[i];
  }
}

int main(){
FILE* fp = fopen("input.txt", "r");
// fread(fp, )
int higher = 0;
char t[256];
fscanf(fp, "%s\n", t);
t[strcspn(t, "\n")] = 0;
int prev = atoi(t);
// printf("%i\n", prev);
char c[256];
// fprintf("%i", prev);
while(fscanf(fp, "%s\n", c) == 1){
    c[strcspn(c, "\n")] = 0;
    int current = atoi(c);
    if(current>prev){
        higher++;
    }
    // printf("%i  %i\n", current, prev);
    prev = current;
    // copyArray(current, prev, sizeof(current)/sizeof(current[0]))
}

fclose(fp);
printf("%i\n", higher);
return 0;
}