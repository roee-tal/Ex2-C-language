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
    int new_mat[n][n];
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++){
            new_mat[k][i] = mat[k][i];
        }
    }
    int l,m;
    scanf("%d",&l);
    scanf("%d",&m);
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(i == j) {
                    continue;
                }
                if(new_mat[i][j] == 0 && new_mat[i][k]==0 && new_mat[k][j] == 0) {
                    new_mat[i][j] = 0;
                }
                else if((new_mat[i][j]!=0 && new_mat[i][k] == 0 && new_mat[k][j]!=0) || new_mat[i][j]!=0 && new_mat[i][k] != 0 && new_mat[k][j]==0) {
                    new_mat[i][j] = new_mat[i][j];
                }
				else if((new_mat[i][j]!=0 && new_mat[i][k] == 0 && new_mat[k][j]==0)){
                    new_mat[i][j] = new_mat[i][j];
                }
                else if((new_mat[i][j]==0 && new_mat[i][k] != 0 && new_mat[k][j]!=0)){
                    new_mat[i][j] = new_mat[i][k]+new_mat[k][j];
                }
                else{
                    new_mat[i][j] = MIN(new_mat[i][j], new_mat[i][k]+new_mat[k][j]);
                }
            }
        }
    }
        if(new_mat[l][m]!= 0){
            printf("True\n");
        }
        else{
            printf("False\n");
        }    
}

void matrixC(){
    int new_mat[n][n];
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++){
            new_mat[k][i] = mat[k][i];
        }
    }
    int l,m;
    scanf("%d",&l);
    scanf("%d",&m);
    for(int k=0;k<10;k++) {
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(i == j) {
                    continue;
                }
                if(new_mat[i][j] == 0 && new_mat[i][k]==0 && new_mat[k][j] == 0) {
                    new_mat[i][j] = 0;
                }
                else if((new_mat[i][j]!=0 && new_mat[i][k] == 0 && new_mat[k][j]!=0) || new_mat[i][j]!=0 && new_mat[i][k] != 0 && new_mat[k][j]==0) {
                    new_mat[i][j] = new_mat[i][j];
                }
				else if((new_mat[i][j]!=0 && new_mat[i][k] == 0 && new_mat[k][j]==0)){
                    new_mat[i][j] = new_mat[i][j];
                }
                else if((new_mat[i][j]==0 && new_mat[i][k] != 0 && new_mat[k][j]!=0)){
                    new_mat[i][j] = new_mat[i][k]+new_mat[k][j];
                }
                else{
                    new_mat[i][j] = MIN(new_mat[i][j], new_mat[i][k]+new_mat[k][j]);
                }
            }
        }
    }
        if(new_mat[l][m]!= 0){
                printf("%d",new_mat[l][m]);
        }
        else{
            printf("-1");
        }       
}




