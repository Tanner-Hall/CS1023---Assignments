#include <stdio.h>
int power(int base, int exponant);
int main(void){
int b,e;
puts("enter the base of your exponantial");
scanf("%d", &b);
puts("enter the exponant of your exponantial");
scanf("%d", &e);
printf("%d to the power of %d is %d\n", b, e, power(b,e));
}
int power(int base , int exponant){
    if (exponant ==0){
        return 1;
    }
    return (base * power(base, exponant-1));
}