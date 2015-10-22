#include <stdio.h>

int main()
 { int nas,ano;
 printf("Digite o ano atual (ano completo) \n");
 scanf("%d",&ano);
 printf("Digite o ano que voce nasceu (ano completo):\n");
 scanf("%d",&nas);
 nas=ano-nas;
	printf("voce tem_ ");
	printf("%d",nas);
	printf("_anos");
	return 0;
}
