#include <stdio.h>
 
int main() {
    double area, pi, raio, raioquadrado;
    pi = 3.14159;
    
    scanf("%lf",&raio);
    raioquadrado = raio * raio;
    area = pi * raioquadrado;
    printf("A=%.4lf\n", area);
    return 0;
}
