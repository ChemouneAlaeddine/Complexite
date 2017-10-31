#include <stdio.h>
#include <stdlib.h>
#include "all.h"


void satfile(char a[],int orderG,int sizeG,int adjacent(int,int))
{
	FILE *file = NULL;
	file=fopen(a,"w+r");
	if(file == NULL){
		printf("erreur fichier\n");
	}

	int i,j,l,m;
	int n = orderG;
	int k = sizeG;
	int t = 0;


	fprintf(file, "c\nc start with comments\nc\np cnf %d       \n",orderG*(sizeG)/* nombre de variables */);
	// Debut d'un fichier .sat

	//=========================== clause 1 ===========================

	for (i = 0; i < n; i++)			// pour tous les sommets
	{
		for (j = 0; j < k; j++)		// pour toutes les profondeurs
		{
			fprintf(file,"%d ",i*(k)+j+1);	// chaque profondeur <=k doit exister
		}
		fprintf(file, "0\n");
		t++;
		for (l = 0; l < k; l++)		// pour toutes les profondeurs
		{
			for (m = l+1; m < k; m++)	// pour toutes les autres profondeurs
			{
				fprintf(file, "%d %d ",-(i*(k)+l+1),-(i*(k)+m+1));	// 	un sommet ne peut pas avoir
																	//  deux profondeurs differentes 
				fprintf(file, "0\n");
				t++;
			}
		}
	}



	//=========================== clause 2 ===========================

	for (i = 0; i < n; i++)			// pour tous les sommets
	{
		for (j = i+1; j < n; j++)	// pour tous les autres sommets
		{
			fprintf(file, "%d %d ",-(i*(k)+1),-(j*(k)+1));	//	Il ne faut pas avoir deux racines
			fprintf(file, "0\n");	// /\
			t++;
		}	
	}
	for (i = 0; i < n ; i++)		// pour tous les sommets
	{
		fprintf(file, "%d ",i*(k)+1);	//	On doit avoir au moins une racine
	}
	fprintf(file, "0\n");	// /\
	t++;



	//=========================== clause 3 ===========================

	for (i = 0; i < n; ++i)			// pour tous les sommets
	{
		fprintf(file,"%d ",i*(k)+k);	// On doit avoir un sommet qui a la profondeur maximale
	}
	fprintf(file, "0\n");	// /\
	t++;



	//=========================== clause 4 ===========================

	for (i = 0; i < n; i++)			// pour tous les sommets
	{
		for (j = 1; j < k; j++)		// pour toutes les profondeurs >0 (sauf la racine)
		{
			fprintf(file, "%d ",-(i*(k)+j+1));	//	soit le sommet avec telle profondeur n'existe pas
			for(l = 0; l < n; l++)	// pour tous les sommets
			{
					if(l!=i && adjacent(i+1,l+1))	//	les sommets voisins
						fprintf(file, "%d ",l*(k)+(j-1)+1);	//	soit un de ses voisins est son parent
			}
			fprintf(file, "0\n");	// /\
			t++;
		}
	}
	fseek(file, 35, SEEK_SET);
	fprintf(file, " %d\n",t);
}

int main(int argc, char *argv[])
{
	if (argc!=2){
		printf("Saisir le nom du fichier\n");
		return 0;
	}

	satfile(argv[1],orderG(),sizeG(),are_adjacent);
	return 0;
}
