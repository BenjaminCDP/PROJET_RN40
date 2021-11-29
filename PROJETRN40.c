#include "Seaux.h"


int main(int argc, char** argv)// argc c'est la taille de la liste à triée, et argv c'est toutes les valeurs à rentrer dans la liste 
{
	int B;
	List listeNbr=NULL; //la liste qui contient les nombres non triés
	for(int i=2;i<argc;i++)
	{
		if (strlen(argv[i])>10)// On teste si le nombre est de plus de 10 chiffres
		{
			perror("Un entier de de plus de 10 chiffres a été entré. Oops");
			return EXIT_FAILURE;
		}
		char* str=malloc(strlen(argv[i]));// on crée un string (ou une jsp) et on alloue l'espace mémoire qui est la longueur de argv[i]
		sprintf(str,"%s",argv[i]);			//puis sprintf pour foutre le machin dans le truc tmtc
		listeNbr=add_tail(listeNbr,str);				
	}


	printf("Quelle base ? (2 à 16)\n");
	scanf("%d",&B);
	// Test pour voir si la valeur B entrée est comprise entre 2 et 16 
	// retourne un message d'erreur si c'est pas le cas
	if(B<2 || B>16)
	{
	 	perror("La base doit être comprise entre 2 et 16. Oops");
	 	return EXIT_FAILURE;
	}
	Seaux seaux=init(B);
	// listeNbr=add_head(listeNbr,"40280\0");
	// listeNbr=add_tail(listeNbr,"220429\0");
	// listeNbr=add_tail(listeNbr,"20559\0");
	// listeNbr=add_tail(listeNbr,"40359\0");
	// printf("%s\n",at(listeNbr,0));
	// printf("Taille de la liste : %d\n",length(listeNbr));
	display(listeNbr);
	printf("%lu",strlen(at(listeNbr,0)));
	
	

	//free(seaux);
	return EXIT_SUCCESS;
}