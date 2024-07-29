#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(){
 
 
int op; int op2; char mode;float d; float num1; float num2; char op3;char op4[5];int num_samples=20; 
 
float stat[num_samples]; int count; float total=0; float avg; float total2=0; float difference[num_samples];
 
float dev; float num3, num4, num5, num6; float i,j,k; int bound = 13;int num_cards=0; int card[num_cards]; int dealer[num_cards];
 
int sum=0, sum2=0; // initializing all the variables
 
while (op!=6){// runs in a loop until the exit operation is selected
 
printf("1) Arithmatic\n2) Trigonometry\n3) Stats\n4) Vectors\n5) Miscillaneous\n6) Exit\n");
 
scanf("%d", &op); // prints options and scans option
 
switch (op){
 
case 1:
 
printf("Arithmatic: use +,-,*,/,^,l,e\n");
 
while (op3!='e'){
 
scanf("%f %c %f", &num1, &op3, &num2); // the spaces between is what seperates the character and operators allowing it all to be on one line
 
if (op3=='+'){
 
printf("%.2f\n", num1+num2);
 
}
 
else if (op3=='-'){
 
printf("%.2f\n", num1-num2); 
 
}
 
else if (op3=='*'){
 
printf("%.2f\n", num1*num2);
 
}
 
else if (op3=='/'){
 
printf("%.2f\n", num1/num2);
 
}
 
else if (op3=='^'){
 
printf("%.2f\n",pow(num1,num2));
 
}
 
else if (op3=='l'){
 
printf("%.2f\n", log(num2)/log(num1)); // log identity found online
 
}
 
}
 
break;
case 2:
 
printf("Enter Mode (D/R/P): \n"); scanf(" %c", &mode);
 
if (mode == 'd'){ 
 
num2=57.29; // conversions for each mode
 
}
 
else if (mode == 'r'){
 
num2=1;
 
}
 
else if(mode == 'p'){
 
num2=M_PI;
 
}
 
while(1){
scanf("%s",op4); // scans the entered string
 
if (strcmp(op4, "exit") == 0){ // checks for exit before the operation
 
break;
 
}
 
scanf("%f", &num1);
 
if (strcmp(op4, "sin")==0){// string compare used to see which trig function was typed
 
printf("%f\n", sin(num1*num2));
 
}
 
else if (strcmp(op4, "cos")==0){
 
printf("%f\n", cos(num1*num2));
 
}
 
else if (strcmp(op4, "tan")==0){
 
printf("%f\n", tan(num1*num2));
 
}
 
}
 
break;
 
case 3:
 
printf("\nHow many samples do you have?"); scanf("%d", &num_samples);
 
for (count=0; count<(num_samples); count++){
 
scanf("%f", &stat[count]); //puts the user inputted values into the array
 
}
 
for (count=0; count<(num_samples);count++){
 
total=total+stat[count]; //adds each part of the array into the total
 
}
 
printf("\nTotal: %f", total);
 
avg=total/num_samples;
 
printf("\nAverage: %f", avg);
 
for (count=0; count<(num_samples); count++){
 
difference[count]=pow(avg-stat[count],2); //finds the difference between each number and the mean then squares
 
total2=total2+difference[count];

 
}
 
dev=sqrt(total2/(num_samples-1));
 
printf("\nVariance: %f", total2/(num_samples-1)); //formula for stand deviation and varience found online
 
printf("\nStandard Deviation: %f\n", dev);
 
break;
 
case 4:
 
printf("1) Two 2D vectors\n2) Two 3D vectors");scanf("%d", &op2);
 
switch (op2){
 
case 1:
 
while(op3!='e'){
 
scanf("%f %f %c %f %f\n",&num1,&num2,&op3,&num3,&num4); // same logic is the arithmatic
 
if(op3=='+'){
 
printf("%.2fi + %.2fj\n", num1+num3, num2+num4);
 
}
 
else if (op3=='-'){
 
printf("%.2fi + %.2fj\n", num1-num3, num2-num4);
 
}
 
else if (op3=='*'){
 
printf("%.2f\n",(num1*num3)+(num2*num4));
 
}
 
else if (op3=='x'){
 
printf("%.2fi - %.2fj\n", (num1*num4),(num2*num3));
 
}
 
}
 
break;
 
case 2:
 
while(op3!='e'){
 
scanf("%f %f %f %c %f %f %f",&num1,&num2,&num3,&op3,&num4,&num5,&num6);
 
if (op3=='+'){
 
printf("%.2fi + %.2fj + &.2fk\n", num1+num4, num2+num5, num3+num6);
 
}
 
else if(op3=='-'){
 
printf("%.2fi + %.2fj + %.2fk\n", num1-num4, num3-num5,num4-num5);
 
}
 
else if(op3=='*'){
 
printf("%.2f\n", (num1*num4)+(num2*num5)+(num3*num6)); //Vector math for dot product
 
}
 
else if(op3=='x'){
 
i=(num2*num6)-num3*num5; //Vector math for cross product
 
j=num1*num6-num3*num4;
 
k=num1*num5-num2*num3;
 
printf("%.2fi - %.2fj + %.2fk\n", i,j,k);
 
}
 
}
 
}
 
break;
 
break;
 
case 5:
 
printf("1) Fibonacci\n2) Black Jack\n"); scanf("%d", &op2);
 
switch (op2){
 
case 1:
 
int counter3; int arr[20]; int i;
 
printf("How many integers of fibonacci would you like to see? (Up to 20)\n"); scanf("%d", &counter3);
 
arr[0]=1; arr[1]=1;
 
for(i=2;i<counter3;i++){
 
arr[i]=arr[i-1]+arr[i-2];
 
}
 
printf("First %d numbers of fibonacci ", counter3);
 
for (i=0;i<counter3; i++){
 
printf("%d ",arr[i]);
 
printf(" ");}
 
break;
 
case 2:
 
card[0]=rand () % (bound + 1); card[1]=rand () % (bound + 1); // random number was found online
 
dealer[0]=rand () % (bound + 1); //gives the first two vcard values to the user and the first card value to the dealer
 
sum2 = dealer[0];
 
sum=card[0]+card[1]; // sum for each
 
num_cards=num_cards+2; //adding two so that the counting starts in the right address
 
printf("\nYour cards are: %d %d", card[0], card[1]);
 
printf("\nYour total is: %d", sum);
 
printf("\nThe dealers card is: %d\n", dealer[0]);
 
while (1){
scanf("%s", op4); // looking for hit stand or exit
 
 
if (strcmp(op4, "exit")==0){
 
break;
 
}
 
else if(strcmp(op4,"hit")==0){ //generates a new card for the user and adds to the total
 
card[num_cards]= rand () % (bound+1);
 
sum=sum+card[num_cards];
 
printf("\nYour new card is: %d", card[num_cards]);
 
printf("\nYour new total is: %d", sum);
 
num_cards++; //increase address for the loop

 
if (sum>21){
 
printf("\nYou Lose!"); break; // if you go above 21 you lose
 
}
 
}
 
else if(strcmp(op4,"stand")==0){
 
while (sum2<21){
 
 
dealer[num_cards]= rand () % (bound+1); //same logic for the dealer
 
sum2=sum2+card[num_cards];
 
printf("\nThe dealers new card is: %d", dealer[num_cards]);
 
printf("\nThe dealers new total is: %d", sum2);
 
num_cards++;
 
if (sum2>21){
 
printf("\nYou Win!");
 
break;
 
}
 
else if (sum2>sum){
 
printf("\nYou lose!");
 
break;
 
}
 
}
 
}
 
}
 
break;
 
}
 
break; 
 
case 6:
 
//ends the loop
break;
break;
 
 
}
 
}
 
 
return 0;}
