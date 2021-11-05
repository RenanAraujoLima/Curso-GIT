#include <stdio.h>
#include <math.h>

int main ()

{  

	int a, b, c, delta;
    int x1, x2, raiz;

printf("Digite o valor A: ");
scanf("%d", &a);

printf("Digite o valor B: ");
scanf("%d", &b);

printf("Digite o valor C: ");
scanf("%d", &c);

delta = (b*b)-4*a*c;
raiz = sqrt(delta);

printf("delta = %d\n", delta);

x1 = (-b+raiz)/(2*a);
x2 = (-b-raiz)/(2*a);

printf("o valor de X1 e: %d\n", x1);
printf("o valor de X2 e: %d", x2);

}
