#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <cstring>
int dado, resp;
char nome[256];
int repetir(int x);
int main(void){
	int unsigned CPAGE_UTF8=65001;
	int unsigned CPAGE_DEFAULT=GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	srand((unsigned)time(NULL));
	int reep;
	printf("*** JOGAR DADO ***\n");
	printf("Qual seu nome jogador? \n\t");
	setbuf(stdin,0);
	fgets(nome,256,stdin);
	nome[strlen(nome)-1]='\0';
	dado = (rand ()%6)+1;
	printf("Começando...\n");
	printf("\n%s, A face para cima do dado é %d!\n", nome, dado);
	while (resp!=2){
	reep=repetir(resp);
	}
	system("pause");
}
int repetir(int x){
	printf("\t\n %s, deseja jogar mais uma vez?\n",nome);
	printf("\tSim --> 1\n");
	printf("\tNão --> 2\n");
	printf("Resposta: ");
	scanf("%d", &resp);
	while (resp==1){
		dado = (rand ()%6)+1;
		printf("\n %s, A face para cima do dado é %d!\n", nome, dado);
		break;
	}
	if(resp==2){
		printf("\nAté mais, %s!\n",nome);
	}
}
