#include <stdio.h>
main(){
float start, end, count;
start=0;
end=300;
count=20;
float cel, fah ;
fah=start;
printf("Fahrenheit Celsius\n");
while(fah<=end){
cel=(5.0/9.0) * (fah -32.0);
printf(" %3.0f %10.1f \n",fah,cel);
fah=fah+count;
}
} 
