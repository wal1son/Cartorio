#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



int registro()
{
	char arquivo [40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digita cpf a ser cadastrado:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file,cpf);
	fclose(file);
	
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome);
	
	file= fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	

	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file= fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
		file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s", cargo);
	
	file=fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
  	  

}


int consulta()
{
	printf("Você escolheu consulta de nomes!\n");
	system("pause");
}


int delete()
{
	char cpf[40]
	
	printf("Digita o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if (file == NULL)
	 {
	 	printf("O usuario nao se encontra no sistema \n")
	 	system("pause");
	 	
	 }
	
 
}


int main ()


{
	int opcao=0;
	int x=1;
	
	for(x=1;x=1;)

	{		
	  
	  system("cls"); 
	  setlocale(LC_ALL,"portuguese");
	 
	
	  printf("### Cartiorio Ebac ###\n\n");
	  printf("Escolha opcção desejada do menu ?\n\n");
	  printf("\t 1 - Registrar Nomes \n");
	  printf("\t 2 - Consultar Nomes \n");
	  printf("\t 3 - Deletar   Nomes \n");
	  
	  scanf("%d", &opcao);
	  
	 
	 
	  switch(opcao)
	  {
	  
	  case 1:
	  registro();
	  break;
	  
	  case 2:
	  consulta();
	  break;
	  
	  case 3:
      delete();
	  break;
	  	  
	  default:
	  printf("Essa opção não esta disponivel!\n");
	  system("pause");
	  break;	
	  	
	  	
	  }
	  
	}
}	
