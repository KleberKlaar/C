/* 
Programa desenvolvido em C.
A intenção foi criar um ""jogo"" básico, para colocar em prática o conhecimento adquirido com os comandos while e switch.
Desenvolvido por Kleber Klaar.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int sair = 0;
	int posicao = 5;
	char menu;
	char direcao;
	while(sair==0){
		system("cls");
		switch(posicao){
			case 1:
				printf("\n X O O \n O O O \n O O O");
				printf("\n Você está no noroeste da cidade, caminhando pelo rio Pindamoiangaba. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [s]ul | [l]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 's':
								posicao = 4;
								break;
							case 'l':
								posicao = 2;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 1;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 2:
				printf("\n O X O \n O O O \n O O O");
				printf("\n Você está no norte da cidade, na entrada da Floresta Proibida. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [s]ul | [l]este | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 's':
								posicao = 5;
								break;
							case 'l':
								posicao = 3;
								break;
							case 'o':
								posicao = 1;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 2;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 3:
				printf("\n O O X \n O O O \n O O O");
				printf("\n Você está no nordeste da cidade, na fazendo do Seu Zé. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [s]ul | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 's':
								posicao = 6;
								break;
							case 'o':
								posicao = 2;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 3;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 4:
				printf("\n O O O \n X O O \n O O O");
				printf("\n Você está no oeste da cidade, vagando pelo bairro Nobre. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [s]ul | [l]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 1;
								break;
							case 's':
								posicao = 7;
								break;
							case 'l':
								posicao = 5;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 4;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 5:
				printf("\n O O O \n O X O \n O O O");
				printf("\n Você está no centro da cidade, caminhando pela praça. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [s]ul | [l]este | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 2;
								break;
							case 's':
								posicao = 8;
								break;
							case 'l':
								posicao = 6;
								break;
							case 'o':
								posicao = 4;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 5;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 6:
				printf("\n O O O \n O O X \n O O O");
				printf("\n Você está no leste da cidade, na beira da estrada principal. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [s]ul | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 3;
								break;
							case 's':
								posicao = 9;
								break;
							case 'o':
								posicao = 5;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 6;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 7:
				printf("\n O O O \n O O O \n X O O");
				printf("\n Você está no sudoeste da cidade, caminhando pelo gueto. Cuidado com os cachorros na rua! \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [l]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 4;
								break;
							case 'l':
								posicao = 8;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 7;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 8:
				printf("\n O O O \n O O O \n O X O");
				printf("\n Você está no sul da cidade, em frente à prefeitura. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [l]este | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 5;
								break;
							case 'l':
								posicao = 9;
								break;
							case 'o':
								posicao = 7;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 8;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			case 9:
				printf("\n O O O \n O O O \n O O X");
				printf("\n Você está no sudeste da cidade, passando na lateral da escola. \n");
				printf("\n Escolha sua opção: [m]over/[s]air => ");
				scanf("%s",&menu);
				switch(menu){
					case 'm':
						printf("\n Escolha a direção: [n]orte | [o]este => ");
						scanf("%s", &direcao);
						switch (direcao){
							case 'n':
								posicao = 6;
								break;
							case 'o':
								posicao = 8;
								break;
							default:
								printf("\n Direção inválida.");
								posicao = 9;
						}
						break;
					case 's':
						sair=1;
						break;
					default:
						printf("\n Comando inválido");
				}
				break;
			default:
				printf("\n Erro. O programa será encerrado. ");
				system("pause");
				sair = 1;
		}	
	}
	return 0;
}
