#include<stdio.h>
#include<string.h>

struct students
{
    int id;
    char name[100];
    char email[200];
    int phone;
    char pass[400];
    char cpass[400];
};
struct students student;

int errorPage(){
    printf("Something Went Wrong. Please try again.");
    return 1;
}

void dashboardDisplay(){
    printf("Welcome to Student Portal Dashboard.\n\n1. Your profile\n2. Your Courses\n3. Enroll a new Course\n\n");
}

int authantication(char mail[200], char pas[400]){
    char emailAuth[200] = "abc@gmail.com";
    char passAuth[400] = "1234";
    if(mail[200] == emailAuth[200] && pas[400] == passAuth[400]){
        dashboardDisplay();
    }else{
        printf("Failed to Login");
        return 1;
    }
}

void firstPage(){
    printf("You have to log into your account to get your courses.\n\n1. Login\n2. Create an account.\n3. Exit\n\n");
}

int login(){
    printf("Please fill up the credentials given below with appropriate informations.\n\nPlease Enter Your Email: ");
    char email2[200];
    char pass2[400];
    scanf("%s", &email2);
    printf("\nPlease Enter Your Password: ");
    scanf("%s", &pass2);
    authantication(email2, pass2);
}

void createAccount(){
    printf("Please fill up the credentials given below to create an account.\n\nPlease Enter Your Student ID: ");
    scanf("%d", &student.id);
    printf("\nPlease Enter Your Full Name: ");
    scanf("%s", &student.name);
    printf("\nPlease Enter Your Email: ");
    scanf("%s", &student.email);
    printf("\nPlease Enter Your Phone: ");
    scanf("%d", &student.phone);
    printf("\nPlease Enter Your Password: ");
    scanf("%s", &student.pass);
    printf("\nPlease Enter Your Confirm Password: ");
    scanf("%s", &student.cpass);
    if(strcmp(student.pass,student.cpass) == 1){
        printf("Password and Confirm Password are not same.\n");
        createAccount();
    }else{
        loginPage();
    }
}

void loginPage(){
    printf("\nAccount created successfully.\n\nYou have to log into your account to get your courses.\n\n1. Login\n2. Create another account.\n3. Exit\n\n");
    int x;
    scanf("%d", &x);
    if(x == 1){
        login();
    }else if(x == 2){
        createAccount();
    }else if(x == 3){
        exitPage();
    }else{
        errorPage();
    }
}

int exitPage(){
    printf("Thank you for using this website/app.\n");
    return 1;
}

int main(){
    int registered = 0;
    printf("Hello Everyone.\nThis is your student portal but there is no UI. So you have to follow some instruction to operate this.\nYou have to enter only number as input. (You can't enter any kind of character or string.)\n\n");
    firstPage();
    int a;
    scanf("%d", &a);
    if(a == 1){
        login();
    }else if(a == 2){
        createAccount();
    }else if(a == 3){
        exitPage();
    }else{
        errorPage();
    }
    return 0;
}