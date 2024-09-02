#include<stdio.h>

main(){
	int i=0;
	char texto[1000];
	
	printf("\nIngresar texto: ");
	gets(texto);
	
	printf("\nTexto ingresado a notacion camello: ");

	while(texto[i]!='\0'){
		if(i==0 || texto[i-1]==' '){
			if(texto[i]>='a' && texto[i]<='z'){
				texto[i]=texto[i]-32;
				printf("%c",texto[i]);
			}
			else
				printf("%c",texto[i]);
		}
		else if(texto[i]>='A' && texto[i]<='Z'){
			texto[i]=texto[i]+32;
			printf("%c",texto[i]);
		}
		else 
			printf("%c",texto[i]);
		
		i++;	
	}
}
