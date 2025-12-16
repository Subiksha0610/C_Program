#include<stdio.h>
main(){
int c;
while( (c=getchar()) != EOF){
printf("\nEOF Result: 1\n");
}
printf("Reached EOF: %d\n",(c!=EOF));
}
