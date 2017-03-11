#include<stdio.h>

int move ( int );

int main (){
	int stick;
	int choice,i,y;
	printf("Rule for the game :\n");
	printf(" At initial must we take more than 20 stick  :\n");
	printf("1. you move maximum 4 matchstick and at least one at one time (1,2,3,4)\n");
	printf("2. player Which  move last stick will lost the game :\n");

	printf("please enter the number of matchstick to start the game : ");
	scanf("%d",&stick);
	if(stick<20){
		printf("Please enter the matchstick more than 20 ");
		scanf("%d",&stick);
	}
	printf("enter 0 to start the game by computer \n Other wise enter any number to start the game:\n ");
	scanf("%d",&choice);
	if(choice){
		i=1;
		while(stick>0){
			printf(" \nstick to move in %d move by you  \n",i);
			scanf("%d",&y);
			if(y>4){
				printf("you donot chose more than 4 stick \n");
				printf("enter the number of stick to move \n");
				scanf("%d",&y);
			}
			else{
				if( y == 0 ){
					printf("you must chose at least one matchstick \n");
					printf("enter the number of stick to move \n");
					scanf("%d",&y);
				}
				if( stick - y < 0){
					printf("there is only %d stick avilable so you donot chose %d stick  \n",stick,y);
					printf("enter the number of stick to move \n");
					scanf("%d",&y);
				}
			}
			stick=stick-y;
			printf("number of stick avilable :%d\n",stick);
			if(stick==0){
				printf("\nyour now lost the game \n");
				return;
			}
			printf("stick move by computer in %d move=%d",i,move(stick));
			stick=stick-move(stick);
			printf("\nnumber of stick avilable :%d",stick);
			if(stick==0){
				printf("\ncomputer now lost the game \n");
				return;
			}
			i=i+1;

		}
	}

	else{
		i=1;
		while(stick>0){

			printf("stick move by computer in %d move=%d",i,move(stick));
			stick=stick-move(stick);
			printf("\nnumber of stick avilable :%d",stick);
			if(stick==0){
				printf("\ncomputer now lost the game \n");
				return;
			}
			printf(" \nstick to move in %d move by you \n",i);
			scanf("%d",&y);
			if(y>4){
				printf("you donot chose more than 4 stick \n");
				printf("enter the number of stick to move \n");
				scanf("%d",&y);
			}
			else{
				if( y == 0 ){
					printf("you must chose at least one matchstick \n");
					printf("enter the number of stick to move \n");
					scanf("%d",&y);
				}
				if( stick - y < 0){
					printf("there is only %d stick avilable so you donot chose %d stick  \n",stick,y);
					printf("enter the number of stick to move \n");
					scanf("%d",&y);
				}
			}
			stick=stick-y;
			printf("number of stick avilable :%d\n",stick);
			if(stick==0){
				printf("\nyour now lost the game \n");
				return;
			}
			i=i+1;
		}
	}
	return 0;
}
