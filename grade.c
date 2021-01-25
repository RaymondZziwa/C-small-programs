#include <stdio.h>
main(){
int avg,subs[3]={};
    for(int i = 0;i < 3;i++){
        printf("Enter subject %d marks:\n",i+1);
        scanf("%d",&subs[i]);
    }
    avg = (subs[0]+subs[1]+subs[2])/3;
    printf("The average is :%d\n",avg);
    if(avg >=90){
        printf("Student Grade is : Grade A");
    }
    else if(avg >=70 && avg < 90){
        printf("Student Grade is : Grade B");
    }
    else if(avg >= 50 && avg < 70){
        printf("Student Grade is : Grade C");
    }
    else{
         printf("Student Grade is : Grade F");
    }

}
