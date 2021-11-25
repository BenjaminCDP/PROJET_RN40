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


