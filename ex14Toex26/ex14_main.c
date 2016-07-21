#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]){
        for(int i = 1; i < argc; i++){
            for(int k = 0; argv[i][k] != '\0'; k++){
                printf(" '%c' = %d ", argv[i][k], argv[i][k]);
            };
            printf("\n");
        }
}