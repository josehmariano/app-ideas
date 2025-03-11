#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){

int index = 0; 
int dec = 0;
char bin[100];

printf("Digite o número em BINÁRIO com no MÁXIMO 8 digitos: ");
scanf("%[^\n]%*c", bin);

if(strlen(bin) <= 8){

for(index = strlen(bin)-1; index >= 0; index--){

        if(bin[index] == '1')

            dec += pow(2, (strlen(bin)-1)- index); 
}

printf("DECIMAL = %d\n", dec);
}

else
{  
    printf("Você ultrapassou o limite de 8 digitos.\n");
}
return 0;
}