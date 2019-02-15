#include <stdio.h>
#include <math.h>
 
int main()
{
    float w, l,h;
    float s, v, sd;
    scanf("%f%f%f", &w, &l, &h);
    s = 2 *(w* l + l * h +h *w);
    v = w * l * h;
    sd= sqrt(w * w + l * l + h * h);
    printf("Surface area of cuboids is: %.3f", s);
    printf("\n Volume of cuboids is : %.3f", v);
    printf("\n Space diagonal of cuboids is : %.3f", sd);
    return 0;
}
