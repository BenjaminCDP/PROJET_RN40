#include "Seaux.h"


int main()
{
	int B;
	List listeNbr=NULL; //la liste qui contient les nombres non triés
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
	listeNbr=add_head(listeNbr,"40280\0");
	listeNbr=add_tail(listeNbr,"220429\0");
	listeNbr=add_tail(listeNbr,"20559\0");
	listeNbr=add_tail(listeNbr,"40359\0");
	printf("%s\n",at(listeNbr,0));
	printf("Taille de la liste : %d\n",length(listeNbr));
	display(listeNbr);
	
	

	//free(seaux);
	return EXIT_SUCCESS;
}