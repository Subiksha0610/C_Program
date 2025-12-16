#include <stdio.h>
main(){
int start,end,count;
int fah,cel;
start=0;
end=300;
count=20;
cel=start;
printf("Celsius Fahrenheit\n");
while(cel<=end){
fah=(9/5 *cel) +32;
printf("%3d        %3d\n",cel,fah);
cel=cel+count;
}
}
