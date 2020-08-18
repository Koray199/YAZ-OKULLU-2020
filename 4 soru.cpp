#include <stdio.h>


int main(){
int a,b;
int dig1,dig2,dig3;
scanf("%d%d",&a,&b);
dig1=b%10;
dig2=(b/10)%10;;
dig3=(b/100)%10;

printf("            %d\n",a);
printf("x           %d\n",b);
printf("---------------\n");
printf("           %d\n",dig1*a);
printf("          %d\n",dig2*a);
printf("         %d\n",dig3*a);
printf("---------------\n");
printf("         %d",a*b);



return 0;
}
