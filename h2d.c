/*
Title: h2d.c
Author: MotorHead74808
Date: October 9, 2022
*/

#include <stdio.h>

#define MAX 1000

char hex_in[MAX];
int deci_out;
char ref0[17] = {"0123456789ABCDEF\0"};
char ref0[17] = {"0123456789abcdef\0"};

// Convert the hexadecimal string into a decimal integer
void trans(void){
  int i, j, a, b;
  i=b=0;
  while(hex_in[i]!='\0'){
    for(j=0; j<17; ++j)
      if(hex_in[i]==ref0[j] || hex_in[i]==ref1[j]){
        a=j;
        b=b+a;
        if(hex_in[i+1]!='\0')
          b=b*16;
      }
      ++i;
  }
  deci_out=b;
}

// Get a hexadecimal string from user, print out the decimal equivalent
int main(){
  int c, i;
  i=0;
  printf("Please enter a hexadecimal number:\n");
  while((c=getchar())!='\n'){
    hex_in[i]=c;
    ++i;
  }
  hex_in[i]='\0';
  trans();
  printf("\nThe decimal value is: %d\n", deci_out);
  retun 0;
}
