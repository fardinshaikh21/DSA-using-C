#include <stdio.h>

void accept(int poly[],int n){

    for(int i=0;i<n;i++){
        printf("Enter Coeficient x^%d : ",i);
        scanf("%d",&poly[i]);
    }
}

void display(int poly[],int n){
    for(int i=0;i<n;i++){
       
       printf("%d",poly[i]);

       if(i!= 0){
          printf("x^%d",i);
       }

       if(i < n - 1 ){
        printf(" + ");
       }
    }
}

void addPolynomial(int poly1[],int poly2[],int result[],int n){

    for(int i=0;i<n;i++){
      result[i] = poly1[i] + poly2[i];
    }
}

void subPolynomial(int poly1[],int poly2[],int result[],int n){

    for(int i=0;i<n;i++){
      result[i] = poly1[i] - poly2[i];
    }
}

void mulPolynomial(int poly1[],int poly2[],int result[],int n){

    for(int i=0;i<n;i++){
      result[i] = poly1[i] * poly2[i];
    }
}


int main(){

    int n1,n2;
    int poly1[10],poly2[10];
    int add[10],sub[10],mul[10];

    printf("Enter how many first Polynomial you want : ");
    scanf("%d",&n1);
    accept(poly1,n1);
   
    printf("\nEnter how many second Polynomial you want : ");
    scanf("%d",&n2);
    accept(poly2,n2);

    printf("\nFirst Polynomial is : ");
    display(poly1,n1);
    printf("\nSecond Polynomial is : ");
    display(poly2,n2);
    
    printf("\nAddition of Two Polynomial is : ");
    addPolynomial(poly1,poly2,add,n1);
    display(add,n1);

    printf("\nSubtraction of Two Polynomial is : ");
    subPolynomial(poly1,poly2,sub,n1);
    display(sub,n1);

    printf("\nMultiplication of Two Polynomial is : ");
    mulPolynomial(poly1,poly2,mul,n1);
    display(mul,n1);

    return 0;
}