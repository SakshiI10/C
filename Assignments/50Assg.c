/* Write a program that will print the given pattern.
*****  
 ****
  ***
   **
    *   */

#include<stdio.h>
int main(){
    for(int i=0; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=4; k>=i; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}