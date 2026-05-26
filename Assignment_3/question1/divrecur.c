#include <stdio.h>
int gcd(int x,int y);

int main(void){
int a,b;
puts("enter the two numbers you wish to find the greatest common divisor of");
scanf("%d", &a);
scanf("%d", &b);
printf("the greatest common divisor of %d and %d is %d\n",a,b, gcd(a,b));

}
int gcd(int x, int y){
if (y==0){
    return x;}
return (gcd( y, x % y));
}