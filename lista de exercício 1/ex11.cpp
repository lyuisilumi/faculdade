#include <stdio.h>

int main()
{
float sf,au,ns;
printf("informe o salario do funcionario:"); 
scanf("%f",&sf);
au=sf*0.25;
ns=sf+au;
printf("\nO salario anterior era de %.2f e agora esta sendo %.2f",sf,ns);
	
return 0;
}
