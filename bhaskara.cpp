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
		
		if (b==0&&c==0)
		{
			printf("\nA ra�z desta equa��o �: 0");
		}
		
		else{
		
			d= pow(b,2.0)-4*a*c;		
			d= sqrt(d);	
		
			if (d==0){
				
				x1 = (-b+d)/(2*a);
				printf("\nO valor da raiz � de %f", x1);
			}
			else if (d<0)
			{
				printf("\nO delta � menor do que zero, a equa��o n�o possui solu��o real");
			
				}
			else
				{
					x1= (-b+d)/(2*a);
					printf("\nO valor de uma raiz � de %f", x1);
					x2= (-b-d)/(2*a);
					printf("\nO valor da segunda raiz � de %f", x2);
				}
			}
				
			return 0;
			}
			
