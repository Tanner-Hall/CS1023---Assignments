#include <stdio.h>

int main(void) 
{
printf("%s","Number \t");
printf("%s","square \t");
printf("%s","cube \n");
int value =0;
while (value <= 10)
    {

    printf("%d\t", value);
    printf("%d\t", value*value);
    printf("%d\n", value*value*value);
    value+= 1;
    }

}