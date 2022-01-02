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

//Méthode qui opére un tri sur un chiffre
Seaux tri_aux(List list,Seaux seaux,int j)
{
	while(list!=NULL)
	{
		char c=(list->num)[j];
		switch(c)
		{
			case '0':
				seaux[0]=add_tail(seaux[0],list->num);
				break;
			case '1':
				seaux[1]=add_tail(seaux[1],list->num);
				break;
			case '2':
				seaux[2]=add_tail(seaux[2],list->num);
				break;
			case '3':
				seaux[3]=add_tail(seaux[3],list->num);
				break;
			case '4':
				seaux[4]=add_tail(seaux[4],list->num);
				break;
			case '5':
				seaux[5]=add_tail(seaux[5],list->num);
				break;
			case '6':
				seaux[6]=add_tail(seaux[6],list->num);
				break;
			case '7':
				seaux[7]=add_tail(seaux[7],list->num);
				break;
			case '8':
				seaux[8]=add_tail(seaux[8],list->num);
				break;
			case '9':
				seaux[9]=add_tail(seaux[9],list->num);
				break;
			case 'A':
				seaux[10]=add_tail(seaux[10],list->num);
				break;
			case 'a':
				seaux[10]=add_tail(seaux[10],list->num);
				break;
			case 'B':
				seaux[11]=add_tail(seaux[11],list->num);
				break;
			case 'b':
				seaux[11]=add_tail(seaux[11],list->num);
				break;
			case 'C':
				seaux[12]=add_tail(seaux[12],list->num);
				break;
			case 'c':
				seaux[12]=add_tail(seaux[12],list->num);
				break;
			case 'D':
				seaux[13]=add_tail(seaux[13],list->num);
				break;
			case 'd':
				seaux[13]=add_tail(seaux[13],list->num);
				break;
			case 'E':
				seaux[14]=add_tail(seaux[14],list->num);
				break;
			case 'e':
				seaux[14]=add_tail(seaux[14],list->num);
				break;
			case 'F':
				seaux[15]=add_tail(seaux[15],list->num);
				break;
			case 'f':
				seaux[15]=add_tail(seaux[15],list->num);
				break;
			default:
				perror("Error");
				exit(1);
		}
		list=list->next;
	}
	return seaux;
}



// Méthode qui regroupe les seaux en une liste
List tri_regroup(List list,Seaux seaux,int B)
{
	for(int i=0;i<B;i++)
	{
		while(seaux[i]!=NULL)
		{
			list=remove_head(list);
			list=add_tail(list,seaux[i]->num);
			seaux[i]=seaux[i]->next;
		}
	}
	return list;
}

// Méthode qui regroupe l'action de tri sur un chiffre et l'action de regroupement, c'est le tri final
List tri(List list,Seaux seaux,int B)
{
	size_t tailleNbr=strlen(list->num);
	for(int j=(tailleNbr-1);j>=0;j--)
	{
		seaux=tri_aux(list,seaux,j);
		list=tri_regroup(list,seaux,B);
	}
	return list;
}





