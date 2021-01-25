#include <stdio.h>
main(){
int num[2]={};
    for(int i = 0;i < 2;i++){
        printf("Enter %d number:\n",i+1);
        scanf("%d",&num[i]);
    }
if(num[0]>num[1]){
    printf("%d is the greatest number of the two",num[0]);
}
else{
    printf("%d is the greatest number of the two",num[1]);
}
}
