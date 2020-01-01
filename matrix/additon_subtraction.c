 // this program will do addition and multiplication  of 2 matrix
 
 #include <stdio.h>

int main(void) {
  int mat[100][100],mat2[100][100],res[100][100],i,j,k,c,l,choice,somme;
  
  // ordre de la matrice
  printf("donner l'ordre de matrice (line,colone) : ");
  scanf("%d %d", &l, &c);
 
  // remplire matrice 1
  printf("remplire matrice 1\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("entrer line %d ,colone %d : ",i+1,j+1);
      scanf("%d", &mat[i][j]);
    }
  }
   // remplire matrice 2
   printf("remplire matrice 2\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("entrer line %d ,colone %d : ",i+1,j+1);
      scanf("%d", &mat2[i][j]);
    }
  }
  
  // afficher les 2 matrices
    printf("matrice 1 est : \n");
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        printf("%d ", mat[i][j]);
      }
      printf("\n");
    }
    printf("matrice 2 : \n");
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        printf("%d ", mat2[i][j]);
      }
      printf("\n");
    }

  // switch case pour choisir l'operation

  printf("entrer votre choix :\n1) addition \n2) soustraction \n votre choix : ");
  scanf("%d", &choice);

  switch(choice){
    case 1: // addition
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        res[i][j] = mat[i][j]+mat2[i][j];
      }
    }
    printf("resultat d'addition :\n");
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        printf("%d ", res[i][j]);
      }
      printf("\n");
    }
    break;
    case 2: // soustraction
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        res[i][j] = mat[i][j]-mat2[i][j];
      }
    }
    printf("resultat de soustraction :\n");
    for(i=0;i<c;i++){
      for(j=0;j<l;j++){
        printf("%d ", res[i][j]);
      }
      printf("\n");
     
    }
	 break;
  }
}
  //

