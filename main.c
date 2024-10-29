#include <stdio.h>
#include <string.h>
#include <stdlib.h>

login();
struct login {
    char fast_name[20];
    char last_name[20];
    char gender[20];
    int age;
    char nationality[20];
    char address[100];
    char nid[20];
    char user_name[20];
    char password[20];
};

void registe() {
    FILE *log = fopen("login12.csv", "a"); // Change "w" to "a" to append instead of overwrite
    struct login l;

    printf("Enter your first name: ");
    scanf("%s", l.fast_name);
    printf("Enter your last name: ");
    scanf("%s", l.last_name);
    printf("Enter your gender: ");
    scanf("%s", l.gender);
    printf("Enter your age: ");
    scanf("%d", &l.age);
    printf("Enter your nationality: ");
    scanf("%s", l.nationality);
    printf("Enter your address: ");
    scanf("%s", l.address);
    printf("Enter your NID: ");
    scanf("%s", l.nid);
    printf("Enter your username: ");
    scanf("%s", l.user_name);
    printf("Enter your password: ");
    scanf("%s", l.password);

    // Write in CSV format
    fprintf(log, "%s,%s,%s,%d,%s,%s,%s,%s,%s\n",
            l.fast_name, l.last_name, l.gender, l.age, l.nationality, l.address, l.nid, l.user_name, l.password);

    fclose(log);

    printf("\nYour registration is complete.\n");
    printf("Please login with your Username and Password\n");
    printf("\nPress any key to continue...");
    getchar();
    system("CLS");
    login();
}


login()
{
    char user_name[20], password[20];
    FILE *log;
    log=fopen ("login12.csv", "r");
    struct login l;
    printf("User_name:"); scanf("%s", &user_name);
    printf("Password:"); scanf("%s", &password);

    while(fread(&l, sizeof(l), 1, log))
    {
        if(strcmp(user_name, l.user_name)==0 && strcmp(password, l.password)==0)
        {
            printf("Facitity for Gaust\n\n");
            printf("Breakfast time 8-11 AM \n");
            printf("Lance time 01-03 PM \n");
            printf("Daner time 08-11 PM \n\n");
            printf("Room clean time 09-11 AM \n");
            printf("Room clean time 8-11 PM \n");
        }
        else
        {
            printf("Please enter correct User_name and Password");
        }
    }

    fclose(log);
    //

    //char line [2000];
   // while(fgets(line, sizeof(line), log)){
        //char *token;
       // token=strtok(line, ",");
        //while(token!=NULL){
        //    printf("%s", token);
        //    token= strtok(NULL, " ,");
       // }
      //  printf("\n");
   // }
}

int main()
{
    int restp;
    printf("Press 1 for regestration \n");
    printf("Press 2 for login\n \n");
    scanf("%d", &restp);
    if(restp==1)
    {
        system("CLS");
        registe();
    }
    else if(restp==2)
    {
        system("CLS");
        login();
    }

}