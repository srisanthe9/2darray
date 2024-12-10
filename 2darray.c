#include<stdio.h>

void main(){
   int i,j,n,m,k;

  
   int a[10][10];
   printf("Welcome to our website\n");
   printf("These are the tickets that are available for the movie:\n" );
   for(i=1;i<10;i++){
    for(j=1;j<10;j++){
        if(i==9){
        a[i][j]='R';
        }
       else{ a[i][j]=((i*10)+j);
    }
   }
   }
   
   //displaying available tickets
   for(i=9;i>0;i--){
    for(j=1;j<10;j++){
       if(i==9){
        printf("%c  ",a[i][j]);
       }
       else{
        printf("%d ",a[i][j]);
       }
    }
    printf("\n");
   }
printf("\nR:reserved seats\n");
printf("Allother seats ratherthan R are available for booking \n");
printf("Would you like to buy a ticket for movie?\n");
   printf("If yes press 1 else 0 :\n");
scanf("%d",&n);
if(n==1){
    printf("ticket u needed:");
    scanf("%d",&m);
for(i=9;i>0;i--){
    for(j=1;j<10;j++){
       if(i==9||a[i][j]==m){
        printf("%c  ",'R');
       }
       else{
        printf("%d ",a[i][j]);
       }
    }
    printf("\n");
   }
}
else if(n==0){printf("thank u for visiting our website");}
else{printf("enter either 1 or 0!!");}
}

