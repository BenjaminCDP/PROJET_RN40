#define __SEAUX_H__

#include "List.h"
//On définit le type Seaux, tableau de Liste de nombres
typedef List * Seaux;

//Méthode qui initialise le Seaux
Seaux init(int B)
{
	Seaux new=(List *)malloc(sizeof(List)*B);
	return new;
}

Seaux tri(List list,Seaux seaux)
{
	size_t tailleNbr=strlen(at(list,0));// pour avoir la taille des nombres de la liste à triée car ils ont la même taille d'après l'énoncé
	for(int i=0;i<tailleNbr;i++)
	{
		
	}
}

