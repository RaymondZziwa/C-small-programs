#include <stdio.h>
main(){
int num[3]={};
    for(int i = 0;i < 3;i++){
        printf("Enter %d number:\n",i+1);
        scanf("%d",&num[i]);
    }

if(num[0]>num[1] && num[0]>num[2]){
    printf("%d is the greatest number of the three",num[0]);
}
else if(num[1]>num[0] && num[0]>num[2]){
    printf("%d is the greatest number of the three",num[1]);
}
else{
    printf("%d is the greatest number of the three",num[2]);
}
}
