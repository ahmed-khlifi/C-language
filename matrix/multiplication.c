#include <stdio.h>

#define max 100

int main(void) {
  int a[max][max],b[max][max],c[max][max],i,j,k,al,ac,bl,bc,sum;
  printf("This program will multiply 2 matrix\n");
  // order matrice a
  printf("matrice a order (line,colum) : ");
  scanf("%d %d", &al,&ac);
  // order matrice b
  printf("matrice b order (line,colum) : ");
  scanf("%d %d", &bl,&bc);
  // check 
  if(ac != bl){
    printf("ne peut pas fait l'operation !");
  }
  else{
    // remplire matrice a
  for(i=0;i<al;i++){
    for(j=0;j<ac;j++){
      printf("entrer colum %d line %d : ", j+1,i+1);
      scanf("%d", &a[i][j]);
    }
  }
  for(i=0;i<al;i++){
    for(j=0;j<ac;j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  // remplire matrice b
  for(i=0;i<bl;i++){
    for(j=0;j<bc;j++){
      printf("entrer colum %d line %d : ", j+1,i+1);
      scanf("%d", &b[i][j]);
    }
  }
  for(i=0;i<bl;i++){
    for(j=0;j<bc;j++){
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  // multiplication  operation
  sum = 0;
  for(i=0;i<al;i++){
    for(j=0;j<bc;j++){
      sum = 0;
      for(k=0;k<bl;k++){
        sum += a[i][k] * b[k][j];
      }
      c[i][j] = sum;
    }
  }
  printf("\nresult :\n");
  for(i=0;i<al;i++){
      for(j=0;j<ac;j++){
        printf("  %d  ", c[i][j]);
      }
      printf("\n");
    }
  }
   
}
