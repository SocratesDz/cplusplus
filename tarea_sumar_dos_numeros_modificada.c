#include <stdio.h>
//#include <conio.h>
int main()
{
float a;
float b;

printf("Introduzca el primer numero ");

scanf("%f",&a);//para introducir el primer numero

printf("\nIntroduzca el segundo numero ");

scanf("%f",&b);//para introducir el segundo numero

printf("\n\nEl resultado de la suma es: %f",a + b);
printf("\n\nEl resultado de la resta es: %f",a - b);
printf("\n\nEl resultado de la multiplicacion es: %f",a * b);
printf("\n\nEl resultado de la divicion es: %f",a / b);
printf("\n\nEl resultado de la el sobrante de la divicion es: %f\n",a / b);
//getch();
return 0;

}
