#include "my_mat.h"
#include<stdio.h>
#include<math.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

# define n 10
int mat[n][n];

void matrixA(){
    int x;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d",&mat[i][j]);
          
        }
    }
}

void matrixB(){
    int l,m;
    scanf("%d",&l);
    scanf("%d",&m);
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(i == j) {
                    continue;
                }
                if(mat[i][j] == 0 && mat[i][k]==0 && mat[k][j] == 0) {
                    mat[i][j] = 0;
                }
                else if((mat[i][j]!=0 && mat[i][k] == 0 && mat[k][j]!=0) || mat[i][j]!=0 && mat[i][k] != 0 && mat[k][j]==0) {
                    mat[i][j] = mat[i][j];
                }
				else if((mat[i][j]!=0 && mat[i][k] == 0 && mat[k][j]==0)){
                    mat[i][j] = mat[i][j];
                }
                else if((mat[i][j]==0 && mat[i][k] != 0 && mat[k][j]!=0)){
                    mat[i][j] = mat[i][k]+mat[k][j];
                }
                else{
                    mat[i][j] = MIN(mat[i][j], mat[i][k]+mat[k][j]);
                }
            }
        }
    }
        if(mat[l][m]!= 0){
            printf("True");
        }
        else{
            printf("False");
        }    
}

void matrixC(){
    int l,m;
    scanf("%d",&l);
    scanf("%d",&m);
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(i == j) {
                    continue;
                }
                if(mat[i][j] == 0 && mat[i][k]==0 && mat[k][j] == 0) {
                    mat[i][j] = 0;
                }
                else if((mat[i][j]!=0 && mat[i][k] == 0 && mat[k][j]!=0) || mat[i][j]!=0 && mat[i][k] != 0 && mat[k][j]==0) {
                    mat[i][j] = mat[i][j];
                }
				else if((mat[i][j]!=0 && mat[i][k] == 0 && mat[k][j]==0)){
                    mat[i][j] = mat[i][j];
                }
                else if((mat[i][j]==0 && mat[i][k] != 0 && mat[k][j]!=0)){
                    mat[i][j] = mat[i][k]+mat[k][j];
                }
                else{
                    mat[i][j] = MIN(mat[i][j], mat[i][k]+mat[k][j]);
                }
            }
        }
    }
        if(mat[l][m]!= 0){
                printf("%d", mat[l][m]);
        }
        else{
            printf("-1");
        }    

    
}




