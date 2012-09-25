#include <stdio.h>
//#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{ 
	float a;
	float b;
	char  letra;
	//esto es el mensaje de inicio
	printf ("       hola por favor selecione la operacion que desea realisar \n");
		printf ("       solo tiene que poner la letra de la operacion que desea realisar \n");
	
	//aqui colocare las cuatro operaciones que se prodran realisar
		printf ("a.suma \n");
			printf ("b.resta \n");
				printf ("c.multiplicacion\n");
					printf ("d.divicion \n \n \n");
					
				// esto es para que me pida la letra de la operacion que voy a realisar	
				letra=getchar();getchar();

					//aqui comiensa el switch	
					switch (letra)
					{
						case  'a':	printf ("vas a realisar una suma \n");
							printf("Introduzca el primer numero ");

                            scanf("%f",&a);

                              printf("\nIntroduzca el segundo numero ");

                                  scanf("%f",&b);

                                     printf("\n\nEl resultado de la suma es: %f",a + b);
						break;
															
							case 'b': printf ("vas a realisar una resta \n \n");
							
							printf("Introduzca el primer numero ");

                             scanf("%f",&a);

                             printf("\nIntroduzca el segundo numero ");

                                    scanf("%f",&b);

                               printf("\n\nEl resultado de la resta es: %f",a - b);
							
									break;
						
							case 'c': printf ("vas a realizar una multiplicacion \n \n");
							printf("Introduzca el primer numero ");

                                scanf("%f",&a);

                                      printf("\nIntroduzca el segundo numero ");

                                    scanf("%f",&b);

                                printf("\n\nEl resultado de la multiplicacion es: %f",a * b);
							
						         	break;
						         	
							case 'd': printf ("vas a realisar una divicion \n \n");
							
							printf("Introduzca el primer numero ");

                             scanf("%f",&a);

                             printf("\nIntroduzca el segundo numero ");

                                    scanf("%f",&b);
                                    if(b==0)
                                        printf("no se puede dividir entre 0");
                                        else
                                        
                               printf("\n\nEl resultado de la divicion es: %f",a / b);
                                                             
                               break;
														default:
								printf ("\n \n no puedes introducir ese valor \n \n");
						     
										}
	//getch();
	return 0;
}
