#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

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

//affiche la liste
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

