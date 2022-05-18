#include <stdio.h>
#include <unistd.h>


int main()
{
    printf("\n\n---------Tu Calculadora en C-----------\n\n");
   
    char choice;
    int r;

    do{
        printf("a. Sumar\n");
        printf("b. Restar\n");
        printf("c. Multiplicar\n");
        printf("d. Ver nº de operaciones\n");
        printf("e. Fin del programa\n\n\n");
        printf("Introduce la letra que quieres escoger :  ");
        scanf(" %c",&choice);

    switch(choice)
        {
            case 'a':
                opcionA();
                r++;
                break;
       
            case 'b':
                opcionB();
                r++;
                break;
       
            case 'c':
                opcionC();
                r++;
                break;
           
            case 'd':
                printf("El numero de operaciones es: %i\n", r);
               
                sleep(5);
                break;
       
            case 'e':
                printf("\n\n-------- Fin del programa, Gracias por participar!--------\n\n");
           
                exit(0);    // Termina el programa sin salida de errores
        }
       
    } while(choice!='e');
   
}

  opcionA(){
      float a, b, sum;
     
      printf("Dime dos numeros que sume:\n ");
      scanf("%f %f", &a, &b),
     
      //calculando suma
      sum = a + b;
     
      printf("%.2f + %.2f = %.2f \n\n", a, b, sum);
      sleep(2);
      
    
     
   
    }
   
  opcionB(){
      float c, d, rest;
     
      printf("Dime dos numeros que quieres restar:\n ");
      scanf("%f %f", &c, &d),
     
      //calculando resta
      rest = c - d;
     
      printf("%.2f - %.2f = %.2f \n\n", c, d, rest);
      
      sleep(2);


    }
   
  opcionC(){
        float e, f, mult;
     
      printf("Dime dos numeros que quieres multiplicar:\n ");
      scanf("%f %f", &e, &f),
     
      //calculando multiplicacion
      mult = e * f;
     
      printf("%.2f * %.2f = %.2f \n\n", e, f, mult);
     
       sleep(2);
         
    }    