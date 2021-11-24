#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include<string.h>

//Définition d'une liste de nombre (un nombre étant représenté par un tableau de charactères(ou string tmtc))
typedef struct elem{
	char * num;
	struct elem * next;
} element;

typedef element * List;

//Méthode pour initialiser la liste à un nombre
List init(char* number)
{
	List new;
	new=(element *)malloc(sizeof(element));
	if(new) // test pour voir si la mémoire a bien été allouée
	{
		new->num=number;
		new->next=NULL;
	}
	return new;
}

//Méthode pour ajouter un nombre en tête de liste
List add_head(List old, char* number)
{
	List new=init(number);
	if(new) //test pour voir si la mémoire a bien été allouée
	{
		new->next=old;
	}
	return new;
}

//Méthode pour ajouter un nombre en fin de liste
List add_tail(List old, char* number)
{
	List new=init(number);
	if(old==NULL)
		return new;
	else
	{
		List oldmod=old;
		while(oldmod!=NULL)
			oldmod=oldmod->next;
		oldmod->next=new;
		return old;
	}
}

// retourne le nombre à la position n dans la liste
char* at(List list,int n)
{
	if(n==0)//premier élément de la liste
		return (list->num);
	else
	{
		List listmod=list;
		while(n!=0 && listmod!=NULL)
		{
			listmod=listmod->next;
			n--;
		}
		return listmod->num;
	}
}

//afiche la liste
void display(List list)
{
	List listmod=list;
	printf("[  ");
	while(listmod!=NULL)
	{
		printf("&s ",listmod->num);
		listmod=listmod->next;
	}
	printf("]\n");
}


int main()
{
	int B;
	List* seaux;
	List listeNbr=NULL; //la liste qui contient les nombres non triés
	printf("Quelle base ? (2 à 16)\n");
	scanf("%d",&B);
	//Test pour voir si la valeur B entrée est comprise entre 2 et 16 
	//retourne un message d'erreur si c'est pas le cas
	if(B<2 || B>16)
	{
		perror("La base doit être comprise entre 2 et 16. Oops");
		return EXIT_FAILURE;
	}
	add_tail(listeNbr,"45690\0");
	add_tail(listeNbr,"59302\0");
	display(listeNbr);
	// seaux=(List*)malloc(sizeof(List)*B);
	// free(seaux);
	return EXIT_SUCCESS;
}