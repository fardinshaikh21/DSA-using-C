#include <stdio.h>


void accept(int row,int col,int poly[row][col]){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element at position [%d][%d] : ",i,j);
            scanf("%d",&poly[i][j]);
        }
    }
}


void display(int row,int col,int poly[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",poly[i][j]);
        }
        printf("\n");
    }
}

void sparseMatrix(int row,int col,int poly[row][col]){

    int sparse[10][3];
    int count = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(poly[i][j] != 0){
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = poly[i][j];
                count++;
            }
        }
    }

    printf("\nThe Sparse Matrix is : \n");
    printf("Row\tColumn\tValue\n");
    for(int i=0;i<count;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sparse[i][j]);
        }
        printf("\n");
    }

}   

int main(){

   int row,col;

   printf("Enter how many rows you want : ");
   scanf("%d",&row);
   printf("Enter how many columns you want : ");   
   scanf("%d",&col);

   int poly[row][col]; 

    accept(row,col,poly);
    printf("\nThe Matrix is : \n");
    display(row,col,poly);

    sparseMatrix(row,col,poly);

    return 0;
}