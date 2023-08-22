#include <stdio.h>
#include <math.h>

int main()
{
float x,y,z,m;
printf("insira a primeira nota:");
scanf("%f",&x);
printf("insira a segunda nota:");
scanf("%f",&y);
printf("insira a terceira nota");
scanf("%f",&z);
m=(x+y+z)/3;
if(m>=7)
	printf("aprovado");
else
	printf("reprovado");

return 0;
}
