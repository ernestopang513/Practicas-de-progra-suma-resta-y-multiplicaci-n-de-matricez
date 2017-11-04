#include <stdio.h>

int main(){
	int A[3][3]/*={{1,1,1},{1,1,1},{1,1,1}}*/, B[3][3]/*={{1,1,1},{1,1,1},{1,1,1}}*/, C[3][3];
	int p,i,j,g,r;
	printf("Ingreso de natrices");
	printf("Ingresa la matriz A\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dame un valor para A(%d,%d)\n", i,j);
			scanf("%d" ,&A[i][j]);
		
			
			}
		}
	printf("Ingresa la matriz B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dame un valor para B(%d,%d)\n", i,j);
			scanf("%d", &B[i][j]);
			}
		}
	

		printf("Menu\n");
		printf("1.-Suma\n2.-Resta\n3.-Multiplicacion");
	printf("\nIngresa tu opcion:\n");
		printf("Matriz A\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",A[i][j]);
			}
		printf("\n");
		}
	printf("\n--------------------\n\n");
		printf("Matriz B\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ",B[i][j]);
			}
		printf("\n");
		}
	scanf("%d", &p);
	if(p==1){
		printf("Usted ha elegido la suma de matrices\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				A[i][j]=A[i][j]+B[i][j];
				}
			}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ", A[i][j]);
				}
			printf("\n");
			}
	}
	if(p==2){
		printf("Has elegido la resta de matrices\n");
		printf("Elige el orden del minuendo y del sustraendo\n");
		printf("\t1.-Resta de la forma A-B\n\t2.-Resta de la forma B-A\n");
		scanf("%d", &p);
		if(p==1){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				A[i][j]=A[i][j]-B[i][j];
				}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ", A[i][j]);
				}
			printf("\n");
			}
		}
		if(p==2){
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
				B[i][j]=B[i][j]-A[i][j];
				}
			}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ", B[i][j]);
				}
			printf("\n");
			}
		}
	}
	if(p==3){
		printf("\nPues elegiste la multiplicacion de matrices \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				for(p=0;p<3;p++){
				 C[i][j]=C[i][j]+(A[i][p]*B[p][j]);
				}
			}
		}
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d ", C[i][j]);
			}
			printf("\n");
		}
	}	
		
	return 0;
}
