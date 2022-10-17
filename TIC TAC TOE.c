#include<stdio.h>
main(){
	int cord_x = 0,B1=0,B2=0,B3,B4,B5,B6,B7,B8,B9, cord_y = 0;
	
	while(B1 == 1 && B2 == 1 && B3){
//	player1 = 'W'
//	printf
	break;
	}
	do {
	if ( cord_x < 3 && cord_y < 3){
	printf("Enter cordinate of x: ");
	scanf("%d",&cord_x);
	printf(" Relative Cordinate of y: ");
	scanf("%d",&cord_y);
//	printf("%d\t%d",cord_x,cord_y);
	if (cord_x == 1 && cord_y == 1 && B1==0)
	B1 = 1;
	else if(cord_x == 1 && cord_y == 2 &&B2==0)
	B2 = 1;
	else if(cord_x == 1 && cord_y == 3 &&B3==0)
	B3 =1;
	else if(cord_x == 2 && cord_y == 1 && B4==0)
	B4= 1;
	else if(cord_x == 2 && cord_y == 2 && B5==0)
	B5 = 1;
	else if(cord_x == 2 && cord_y == 3 &&B6==0)
	B6 = 1;
	else if(cord_x == 3 && cord_y == 1 &&B7==0)
	B7 = 1;
	else if(cord_x == 3 && cord_y == 2 &&B8==0)
	B8 = 1;
	else if(cord_x == 3 && cord_y == 3 &&B9==0)
	B9 = 1;
	if(B1 == 1 && B2 == 1 && B3 == 1){
		printf("Player wins");
		break;
	}
	else
	printf("Enter a valid option\n");
}	
	

	
	} while(B1!=1 || B2!=1 || B3!=1 || B4!=1 || B5!=1 || B6!=1 || B7!=1 || B8!=1 || B9!=1);
//	printf("%d",B1);
}
//}
