#include<stdio.h>
#include<conio.h>
main()
{
int choice,english,gujarati,hindi;
clrscr();
printf("Press 1 for English");
printf("\nPress 2 for Gujarati");
printf("\nPress 3 for Hindi");
printf("\nEnter Your Choice:");
scanf("%d",&choice);

switch(choice){
case 1:
printf("Press 1 for internet Recharge");
printf("\nPress 2 for Top-up Recharge");
printf("\nPress 3 for Special Recharge\n");
printf("Enter your Choice:");
scanf("%d",&english);
switch(english){
case 1:
printf("You have succesfully done Internet Recharge");
break;
case 2:
printf("You have successfully done Top-Up Recharge");
break;
case 3:
printf("You have successfullyn done Special Recharge");
break;
default:
printf("Your Choice is Invalid");
break;
}
break;
case 2:
printf("Internet Recharge ke liye 1 dabaiye");
printf("\nTop-Up Recharge ke liye 2 dabaiye");
printf("\nSpecial Recharge ke liye 3 dabaiye");
printf("\nEnter your Choice:");
scanf("%d",&hindi);
switch(hindi){
case 1:
printf("Aapne sfaltapurvak Internet Recharge kar liya he");
break;
case 2:
printf("Aapne sfaltapurvak Top-Up Recharge kar liya he");
case 3:

printf("Aapne sfaltapurvak Special Recharge kar liya he");
default:
printf("Apki Pasand amanya he");
break;
}
break;
case 3:
printf("Internet Recharge mate 1 dabavo\n");
printf("Top-Up Recharge mate 2 dabavo\n");
printf("Special Recharge mate 3 dabavo\n");
printf("Enter your Choice:");
scanf("%d",&gujarati);
switch(gujarati){
case 1:
printf("Tame safaltapurvak Internet Recharge Karavyu Che");
break;
case 2:
printf("Tame safaltapurvak Top-Up Recharge Karavyu Che");
break;
case 3:
printf("Tame safaltapurvak Special Recharge Karavyu Che");
break;
default:
printf("Tamari Pasand Amanya che");
break;
}
break;
default:
printf("Invalid Choice");
break;

}



  getch();
}