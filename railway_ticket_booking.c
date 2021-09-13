#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char name[50];
    int train_num;
    int num_of_seats;
    }pd;
void login();
void reservation(void);
void viewdetails(void);
void printticket(char name[],int,int,float);
void specifictrain(int);
float charge(int,int);
int main()
{
    FILE *fp;
    fp=fopen("print.txt","a");
    fputs("RAILWAY TICKET BOOKING SYSTEM\n",fp);
    fclose(fp);
    printf("        RAILWAY TICKET BOOKING SYSTEM\n   ");
    login();
    int menu_choice;
    start:
    printf("1>>Reserve a ticket\n2>> View all Available trains\n3>> Exit\n");
    scanf("%d",&menu_choice);
    switch(menu_choice)
    {
        case 1:
            reservation();
            break;
        case 2:
            viewdetails();
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid choice");
    }
    goto start;
    return 0;
    
}
void viewdetails(void)
{
    FILE *fp;
    fp=fopen("print.txt","a");
    printf("\nTrain no.\tName\t\tDestinations\t\tCharges\t\tTime\n");
    printf("\n1001\tDuronto Express\tPune to New Delhi\tRs.8000\t\t9am\n");
    printf("\n1002\tIsland Express\tKanyakumari to Trivandrum\tRs.7000\t\t12pm\n");
    printf("\n1003\tGoa Express\tGoa to Karnataka\tRs.6500\t\t8am\n");
    printf("\n1004\tDibrugarh Rajdhani Express\tWest Bengal to Assam\tRs.6500\t\t7am\n");
    printf("\n1005\tMatsyagandha Express\tRatnagiri to Mangalore\tRs.6500\t\t6am\n");
    printf("\n1006\tDelhi Jaisalmer Express\tDelhi to Jaisalmer\tRs.6000\t\t11am\n");
    printf("\n1007\tGomti Express\tLucknow to New Delhi\tRs.5000\t\t10:30am\n");
    printf("\n1008\tGolconda Express\tSecunderabad to Guntur\tRs.4500\t\t9am\n");
    printf("\n1009\tHirakud Express\tVishakapatnam to Amritsar\tRs.4500\t\t7pm\n");
    printf("\n1010\tMahabodhi Express\tGaya to New Delhi\tRs.4500\t\t6pm\n");
    
    fputs("\nTrain no.\tName\t\tDestinations\t\tCharges\t\tTime\n",fp);
    fputs("\n1001\tDuronto Express\tPune to New Delhi\tRs.8000\t\t9am\n",fp);
    fputs("\n1002\tIsland Express\tKanyakumari to Trivandrum\tRs.7000\t\t12pm\n",fp);
    fputs("\n1003\tGoa Express\tGoa to Karnataka\tRs.6500\t\t8am\n",fp);
    fputs("\n1004\tDibrugarh Rajdhani Express\tWest Bengal to Assam\tRs.6500\t\t7am\n",fp);
    fputs("\n1005\tMatsyagandha Express\tRatnagiri to Mangalore\tRs.6500\t\t6am\n",fp);
    fputs("\n1006\tDelhi Jaisalmer Express\tDelhi to Jaisalmer\tRs.6000\t\t11am\n",fp);
    fputs("\n1007\tGomti Express\tLucknow to New Delhi\tRs.5000\t\t10:30am\n",fp);
    fputs("\n1008\tGolconda Express\tSecunderabad to Guntur\tRs.4500\t\t9am\n",fp);
    fputs("\n1009\tHirakud Express\tVishakapatnam to Amritsar\tRs.4500\t\t7pm\n",fp);
    fputs("\n1010\tMahabodhi Express\tGaya to New Delhi\tRs.4500\t\t6pm\n",fp);
    fclose(fp);
}
void reservation(void)
{
    char confirm;
    float charges;
    pd passdetails;
    FILE *fp;
    fp=fopen("print.txt","a");
    printf("Enter your name:  ");
    scanf("%s",passdetails.name);
    fputs("Enter your name:  ",fp);
    fputs(passdetails.name,fp);
    printf("Enter number of seats:  ");
    fputs("\nEnter number of seats:  ",fp);
    scanf("%d",&passdetails.num_of_seats);
    fprintf(fp,"%d",passdetails.num_of_seats);
    fclose(fp);
    viewdetails();
    fp=fopen("print.txt","a");
    printf("\nEnter train number:  ");
    scanf("%d",&passdetails.train_num);
    fputs("\nEnter train number:  ",fp);
    fprintf(fp,"%d",passdetails.train_num);
    fclose(fp);
    if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
    {
        charges = charge(passdetails.train_num,passdetails.num_of_seats);
        printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
    }
    printf("Confirm ticket (y/n):  ");
    start1:
    scanf("%c",&confirm);
    if(confirm=='y')
    {
        printf("%s\t%d\t%d\t%f",passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
        printf("\nRESERVATION DONE!\n");
    }
    
    else 
    {
        if(confirm=='n')
        {
            printf("RESERVATION NOT DONE!\n");
        }
        else
        {
            goto start1;
        }
    }    
    
}
float charge(int train_num,int num_of_seats)
{
    if(train_num==1001)
    {
        return(8000*num_of_seats);
    }
    if(train_num==1002)
    {
        return(7000*num_of_seats);
    }
    if(train_num==1003)
    {
        return(6500*num_of_seats);
    }
    if(train_num==1004)
    {
        return(6500*num_of_seats);
    }
    if(train_num==1005)
    {
        return(6500*num_of_seats);
    }
    if(train_num==1006)
    {
        return(6000*num_of_seats);
    }
    if(train_num==1007)
    {
        return(5000*num_of_seats);
    }
    if(train_num==1008)
    {
        return(4500*num_of_seats);
    }
    if(train_num==1009)
    {
        return(4500*num_of_seats);
    }
    if(train_num==1010)
    {
        return(4500*num_of_seats);
    }
}
void printticket(char name[],int num_of_seats,int train_num,float charges)
{
    FILE *fp;
    fp=fopen("print.txt","a");
    printf("TICKET\n");
    fputs("TICKET\n",fp);
    printf("Name: \t%s",name);
    fputs("Name: \n",fp);
    fputs(name,fp);
    printf("\nNumber of seats: %d",num_of_seats);
    fputs("\nNumber of seats:  \n",fp);
    fprintf(fp,"%d",num_of_seats);
    printf("\nTrain number : \t%d",train_num);
    fputs("\nTrain number:  \n",fp);
    fprintf(fp,"%d",train_num);
    specifictrain(train_num);
    printf("\nCharges:\t%f\n",charges);
    fclose(fp);
}
void specifictrain(int train_num)
{
    FILE *fp;
    fp=fopen("print.txt","a");
    if(train_num==1001)
    {
        printf("\nTrain:\tDuronto Express\nDestination:\tPune to New Delhi\n Departure:\t9am");
    }
    if(train_num==1002)
    {
        printf("\nTrain:\tIsland Express\nDestination:\tKanyakumari to Trivandrum\n Departure:\t12pm");
    }
    if(train_num==1003)
    {
        printf("\nTrain:\tGoa Express\nDestination:\tGoa to Karnataka\n Departure:\t8am");
    }
    if(train_num==1004)
    {
        printf("\nTrain:\tDibrugarh Rajdhani Express\nDestination:\tWest Bengal to Assam\n Departure:\t7am");
    }
    if(train_num==1005)
    {
        printf("\nTrain:\tMatsyagandha Express\nDestination:\tRatnagiri to Mangalore\n Departure:\t6am");
    }
    if(train_num==1006)
    {
        printf("\nTrain:\tDelhi Jaisalmer Express\nDestination:\tDelhi to Jaisalmer\n Departure:\t11am");
    }
    if(train_num==1007)
    {
        printf("\nTrain:\tGomti Express\nDestination:\tLucknow to New Delhi\n Departure:\t10:30am");
    }
    if(train_num==1008)
    {
        printf("\nTrain:\tGolconda Express\nDestination:\tSecunderabad to Guntur\n Departure:\t9am");
    }
    if(train_num==1009)
    {
        printf("\nTrain:\tHirakud Express\nDestination:\tVishakapatnam to Amritsar\n Departure:\t7pm");
    }
    if(train_num==1010)
    {
        printf("\nTrain:\tMahabodhi Express\nDestination:\tGaya to New Delhi\n Departure:\t6pm");
    }
    
    
    if(train_num==1001)
    {
        fputs("\nTrain:\tDuronto Express\nDestination:\tPune to New Delhi\n Departure:\t9am\n",fp);
    }
    if(train_num==1002)
    {
        fputs("\nTrain:\tIsland Express\nDestination:\tKanyakumari to Trivandrum\n Departure:\t12pm\n",fp);
    }
    if(train_num==1003)
    {
        fputs("\nTrain:\tGoa Express\nDestination:\tGoa to Karnataka\n Departure:\t8am\n",fp);
    }
    if(train_num==1004)
    {
        fputs("\nTrain:\tDibrugarh Rajdhani Express\nDestination:\tWest Bengal to Assam\n Departure:\t7am\n",fp);
    }
    if(train_num==1005)
    {
        fputs("\nTrain:\tMatsyagandha Express\nDestination:\tRatnagiri to Mangalore\n Departure:\t6am\n",fp);
    }
    if(train_num==1006)
    {
        fputs("\nTrain:\tDelhi Jaisalmer Express\nDestination:\tDelhi to Jaisalmer\n Departure:\t11am\n",fp);
    }
    if(train_num==1007)
    {
        fputs("\nTrain:\tGomti Express\nDestination:\tLucknow to New Delhi\n Departure:\t10:30am\n",fp);
    }
    if(train_num==1008)
    {
        fputs("\nTrain:\tGolconda Express\nDestination:\tSecunderabad to Guntur\n Departure:\t9am\n",fp);
    }
    if(train_num==1009)
    {
        fputs("\nTrain:\tHirakud Express\nDestination:\tVishakapatnam to Amritsar\n Departure:\t7pm\n",fp);
    }
    if(train_num==1010)
    {
        fputs("\nTrain:\tMahabodhi Express\nDestination:\tGaya to New Delhi\n Departure:\t6pm\n",fp);
    }
    fclose(fp);
}
void login()
{
    
    char name1[4]="Ted";
    char pass1[5]="t123";
    char name2[4]="Joe";
    char pass2[5]="j123";
    char name3[4]="Bob";
    char pass3[5]="b123";
    char username[4];
    char password[5];
    printf("\t\tLOGIN SYSTEM\n");
    start:
    printf("Enter username:   ");
    scanf("%s",username);
    printf("Enter password:   ");
    scanf("%s",password);
    if((strcmp(username,name1) == 0 && strcmp(password,pass1) == 0) || (strcmp(username,name2) == 0 && strcmp(password,pass2) == 0) || (strcmp(username,name3) == 0 && strcmp(password,pass3) == 0))
    {
        printf("\n\t\tACCESS GRANTED\n");
    }
    else
    {
        printf("\t\tACCESS DENIED\n");
        goto start;
    }
}
