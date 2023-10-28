#include <stdio.h>

// int main(){
//     int a;
//     a = 10;
//     printf("a의 값은 : %d \n",a);
//     return 0;
// }

int main(){
    int a;
    a = 127;
    printf("a의 값은 %d 진수로 %o 입니다. \n",8, a);
    printf("a의 값은 %d 진수로 %d 입니다. \n",10, a);
    printf("a의 값은 %d 진수로 %x 입니다. \n",16, a);


    float b = 3.141592f;
    double c = 3.141592;
    printf("b : %f \n",b);
    printf("c : %f \n",c);
    printf("b : %.2f\n",b);
    printf("c : %6.4lf\n",c);
    return 0;
}