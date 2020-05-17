// this program manupilate a linked list
// creating list , adding nodes in the begining/end or in in sorted list
// deletting,  searching ..

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct Maillon{
  int val ;
  struct Maillon *suiv ;
};

typedef struct Maillon * ListeEntier;
// Cr�ation d'une liste vide
void initialiser(ListeEntier *L) {
	
	*L = NULL;
}

// Ajout de x au d�but de L

void AjoutDebut(ListeEntier *L, int x) {
	ListeEntier node;
	node = malloc(sizeof(ListeEntier));
	if(node != NULL){
		node->suiv = NULL;
		node->val = x;
	}
	if (*L == NULL)
		*L = node;
	else
	{
		node->suiv = *L;
		*L = node;
	}
	
}

// Ajout de x � la fin de L

void AjoutFin(ListeEntier *L, int x) {
	ListeEntier node, tmp;
	node = malloc(sizeof(ListeEntier));
	if (node != NULL){
		node->suiv = NULL;
		node->val = x;
	}
	if (*L == NULL)
		*L = node;
	else
	{
		tmp = *L;
		while (tmp->suiv != NULL)
		{
			tmp = tmp->suiv;
		}
		tmp->suiv = node;
	}
	
}

// Ajout de x dans une liste tri�e
void insertion_triee(ListeEntier* L, int x) {
	ListeEntier node, prev, next;
	node = malloc(sizeof(ListeEntier));
	if(node != NULL){
		node->suiv = NULL;
		node->val = x;
	}
	// si liste est vide
	if (*L == NULL)
		*L = node;	
	// si debut
	else{
		if (x < (*L)->val ){
				node->suiv = *L;
				*L = node;
			}
		else
		{
			prev = *L;
			while ((prev->suiv != NULL) && (x >= prev->val))
			{
				next = prev;
				prev = prev->suiv;
			}
			if (x > prev->val){
				// si fin
				prev->suiv = node;
			}	
			else
			{	// si miliue
				next->suiv = node;
				node->suiv = prev;
			}
		}
	}
}

// Suppression du premier �l�ment de L

void SuppressionDebut(ListeEntier *L) {
	ListeEntier tmp;
	if (*L == NULL)
		printf("Liste vide");
	else
	{
		tmp = *L;
		if (tmp->suiv == NULL){
			*L = NULL;
		}
		else{
			(*L) = (*L)->suiv;
			free(tmp);
		}
		printf("Maillon supprimee\n");
	}
	
}

// Suppression du dernier �l�ment de L

void SuppresionFin(ListeEntier *L) {
		ListeEntier suppr, prev;
		int n;
		if (*L == NULL || (*L)->suiv == NULL){
			printf("liste vide");
			*L = NULL;
		}	
		else{
			suppr = *L;
			while (suppr->suiv != NULL)
			{
				prev = suppr;
				suppr = suppr->suiv;
				if (suppr->suiv == NULL)
				{
					prev->suiv = NULL;
				}	
			}
			free(suppr);
		}
}

// Suppression de la premi�re occurrence de x dans L

void suppression(ListeEntier* L, int x) {
	ListeEntier prev, next;
	next = *L;
	
	if ((*L)->val == x && (*L)->suiv == NULL)
			*L = NULL;
	else
	{
		while(next->suiv != NULL && next->val != x){
		prev = next;
		next = next->suiv;
		}
		// debut
		if (next->val == (*L)->val){
			(*L) = (*L)->suiv;
			free(next);
		}
		else
		{	// fin
			if (next->suiv == NULL)
			{
				prev->suiv = NULL;
				free(next);
			}
			else
			{
				prev->suiv = next->suiv;
				free(next);
			}	
		}
	}
}

// Recherche version1 retourne 1 (vrai) si appartient � L, 0 (faux) sinon

int RechercheV1(ListeEntier L, int x) {
	ListeEntier tmp;
	tmp = L;
	while (tmp != NULL )
	{
		if (tmp->val == x){
			printf("val : %d\n", tmp->val);
			return 1;
			}
		else
			return 0;	
	}
	tmp = tmp->suiv;

}

// Recherche version2 retourne l'adresse du maillon qui contient x

ListeEntier Recherche2(ListeEntier L, int x){
	ListeEntier tmp;
	tmp = L;
	while (tmp != NULL){
		if (tmp->val == x)
			break;
		tmp = tmp->suiv;
	}
	return tmp;
}

// Affichage de tous les �l�ments de L

void AfficherListe(ListeEntier L) {
	ListeEntier tmp ;
	tmp=L ;
	while (tmp!= NULL)
	{ 
		printf("%d || ",tmp->val);
		tmp=tmp->suiv ;
	}
	printf("\n");	
}

// Lib�rer L de la m�moire

void LibererListe(ListeEntier *L) {
	ListeEntier tmp;
	while(*L != NULL){
		tmp = (*L)->suiv;
		free(*L);
		(*L) = tmp;
	}
	free(*L);
}

// Calcul du nombre d'�l�ments de L (it�rative ou r�cursive)

int nb_occurrences(ListeEntier L, int x) {
	int occ = 0;
	ListeEntier tmp;
	tmp = L;
	while(tmp != NULL){
		if (tmp->val == x)
			occ++;
	tmp = tmp->suiv;	
	}
	return occ;
}


int main(void){
	ListeEntier L;
	int i;
	int x;
  // Implementer et tester les fonction une � une (afficher le contenu pour voir le r�sultat)
	printf("creating list ..\n");
	initialiser(&L);
	sleep(1);
	if(L != NULL)
		return 1;

	 
	for (i = 5; i >= 1; i--)
		AjoutDebut(&L, i);
	
	//AfficherListe(L);
	//SuppresionFin(&L);
	//insertion_triee(&L, 7);
	
	/*
	 // recherche 1 & 2

	if (RechercheV1(L, 1) == 100)
		printf("found\n");
	else
		printf("not found\n");
	
	
	
	ListeEntier r = Recherche2(L , 20);
	if (r == NULL)
		printf("not found\n");
	else
		printf("nbr : %d\n", r->val);
	*/


	AfficherListe(L);

	// suppression(&L, 5);
	// SuppressionDebut(&L);
	// AfficherListe(L);

	LibererListe(&L);
}


