#include <stdio.h>


void accept(int poly[][2],int n){

    for(int i=0;i<n;i++){
        printf("Enter Coefficient of term %d : ",i+1);
        scanf("%d",&poly[i][0]);
        printf("Enter Exponent of term %d : ",i+1);
        scanf("%d",&poly[i][1]);
    }
}

void display(int poly[][2],int n){
    for(int i=0;i<n;i++){
       
       printf("%dx^%d",poly[i][0],poly[i][1]);

       if(i < n - 1 ){
        printf(" + ");
       }
    }
}

void addPolynomial(int poly1[][2],int poly2[][2],int result[][2],int n){

    for(int i=0;i<n;i++){
      
        result[i][0] = poly1[i][0] + poly2[i][0];
        result[i][1] = poly1[i][1];
      
    }
}


int main(){

    int n;

    printf("Enter the order of Matrix : ");
    scanf("%d",&n);

    int poly1[10][2],poly2[10][2],result[10][2];

    printf("\nEnter First Polynomial\n");
    accept(poly1,n);    
  

    printf("\nEnter Second Polynomial\n");
    accept(poly2,n);    
   

    printf("\nFirst Polynomial is : ");
    display(poly1,n);

    printf("\nSecond Polynomial is : ");    
    display(poly2,n);

    printf("\nAddition of Two Polynomial is : ");
    addPolynomial(poly1,poly2,result,n);
    display(result,n);

    return 0;

}