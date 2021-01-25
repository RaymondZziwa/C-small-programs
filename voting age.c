 /*declaring variables*/
 int age, legal = 18;

/*requesting for input*/
 printf("Please enter your age?");
 scanf("%d",&age);

/*input validation*/
if (age>=18){
    printf("You are eligible to vote");
}
else{
    printf("You cant vote because you are under age");
}
