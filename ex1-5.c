#include<stdio.h>
main(){
int fah;
float cel;
printf("Fahrenheit Celsius\n");
for(fah=300;fah>=0;fah=fah-20){
cel=5.0*(fah-32)/9.0;
printf("%3d %6.1f\n",fah,cel);
}
}
