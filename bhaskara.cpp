#include <stdio.h>
#include<math.h>
#include<locale.h>


int main()


{
	 setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, d, x1, x2;
	
	printf("\n Digite o coeficiente a: ");
	scanf("%f", &a);
	if(a==0)

		do
		{
            printf("\nO coeficiente a tem que ser diferente de 0");
			printf("\n Digite o coeficiente a: ");scanf("%f", &a);
		}
	
		while(a==0);
		
		printf("\nDigite o coeficiente b: ");
		scanf("%f", &b);
	
		printf("\nDigite o coeficiente c: ");
		scanf("%f", &c);
		d= pow(b,2.0)-4*a*c;		
		d= sqrt(d);	
		
		
		if (d<0)
		{
			printf("\nPor o delta ser menor do que zero, a equação não possui solução real");
			
			}
			else
			{
				x1= (-b+d)/2*a;
				printf("\nO valor de uma das raizes é de %f", x1);
				x2= (-b-d)/2*a;
				printf("\nO valor da segunda raiz é de %f", x2);
				
			return 0;
			}
			}
