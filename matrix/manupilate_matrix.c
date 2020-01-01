// in this program we are going to manupilate things in matrix calcualte sum of colones, lines, diagonale, lower and upper triangle


#include <stdio.h>

#define max 100

int main(void) {
  int m[max][max],c,l,i,j,k,sum,upper,lower;
  do{
    printf("matrice  order (line,colum) : ");
    scanf("%d %d", &l,&c);
  }while((l<=1)||(c<=1));
  // remplire matrice a
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("entrer colum %d line %d : ", j+1,i+1);
      scanf("%d", &m[i][j]);
    }
  }
  // matrice main
   for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  // sum lines & colones
  sum = 0;
  printf("sum lines\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      sum += m[i][j]; // sum of lines 
    } 
    printf(" %d ", sum);
    sum=0;
  }
  printf("\nsum colones\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      sum += m[j][i]; // sum of colones 
    }
    printf(" %d ", sum);
    sum=0;
  }

  // sum diagonale
  printf("\nsum diagonale\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      sum += m[i][j];
      i++;
    }
    printf(" %d ", sum);
    sum=0;
  }
  
  // sum lower & upper triangle
  // check
  if(l==c){
    //sum upper triangle
  printf("\nsum upper triangle\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if(i<j){
        upper += m[i][j];
      }
    }
  }
  printf(" %d ", upper);

  //sum lower triangle
  printf("\nsum lower triangle\n");
  for(i=0;i<l;i++){
    for(j=0;j<c;j++){
      if(i>j){
        lower += m[i][j];
      }
    }
  }
  printf(" %d ", lower);
  }
  else{
    printf("\nil faut etre un matrice carre!");
  }
}
