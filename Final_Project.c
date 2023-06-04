// Comprehensive Data Collection
// Tech Wizard
// Ubald Jones L. Tuquib
// Jonard Noel S. Sanico
// Jan Steven E. Butaya

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int survey();
int record1(int suv, int numexp, char a, char b, char c, char d, char e,char f,char g,char h);

int main()
{
    int suv;
    char name[100];
    char address[100];
    char age[3];
    char birthday[11];
    char phonenum[12];
    
    FILE *info;
    info = fopen("monitor.txt", "a+");
    if (info == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\t\t\t================================================\n");
    printf("\t\t\tO WELCOME TO OUR COMPREHENSIVE DATA COLLECTION O\n");
    printf("\t\t\t================================================\n\n");
    printf("\t\t=============PLEASE FILL UP YOUR PERSONAL INFORMATION===========\n\n ");
    
    printf("Enter Full Name: ");
    gets(name);
    printf("Enter Home Address: ");
    gets(address);
    printf("Enter Your Age: ");
    gets(age);
    printf("Enter Your Birthday(MM/DD/YYYY): ");
    gets(birthday);
    printf("Enter Phone Number: ");
    gets(phonenum);

    fprintf(info, "\nName: %s\nAddress: %s\nAge: %s\nBirthday: %s\nPhone Number: %s\n\n", name, address, age, birthday, phonenum);

    fclose(info);
     printf("\n\n==========================================================================================================\n");
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("\t\tWELCOME!! %s We assure the safety of your personal information\t\t\n", name);
    printf("||\t\t\t\t\t\t\t\t\t\t\t\t\t||\n");
    printf("==========================================================================================================\n\n\n");
   
    system("pause");
    system("cls");
    FILE *statement;
    char c;

    statement = fopen("Welcome_Instruction.txt", "r");

    if (statement == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((c = fgetc(statement)) != EOF) {
        printf("%c", c);
    }
    fclose(statement);
    suv = survey();
     
    return 0;
}
int survey()
{
    char highblood, cough, fever, cold, asthma, arthritis, obesity, cancer; 
    char cont;
    int numexp, suv, rec;

    system("pause");
    system("cls");
    printf("\n\nWould you like to Continue? Y/N: ");
    scanf("%c", & cont);
    if(cont == 'y' || cont == 'Y'){
        printf("\nOK Lets Proceed!!\n\n");
    }
    else{
        printf("\nThank You for Having with us!!\n\n");
        return 1;
    }

    system("pause");
    system("cls");
    printf("\t\t\tPlease answer the question base in your experiences,just input Y/N\n\n");
    do{
    printf("\nBased on your Family inheritance do you have experience of Highblood?:");
    scanf(" %c", &highblood);
    if(highblood != 'Y' && highblood != 'y' && highblood != 'N' && highblood != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(highblood != 'Y' && highblood != 'y' && highblood != 'N' && highblood != 'n');
    if(highblood == 'Y' || highblood == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }    

    do{
    printf("\nBased on your Family inheritance do you have  experience of Cough?: ");
    scanf(" %c", &cough);
    if(cough != 'Y' && cough != 'y' && cough != 'N' && cough != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(cough != 'Y' && cough != 'y' && cough != 'N' && cough != 'n');
        if(cough == 'Y' || cough == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  
    
    do{
    printf("\nBased on your Family inheritance do you have experience of Fever?: ");
    scanf(" %c", &fever);
    if(fever != 'Y' && fever != 'y' && fever != 'N' && fever != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(fever != 'Y' && fever != 'y' && fever != 'N' && fever != 'n');
        if(fever== 'Y' || fever == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  
     
    do{
    printf("\nBased on your Family inheritance do you have experience of Cold?: ");
    scanf(" %c", &cold);
    if(cold != 'Y' && cold != 'y'&& cold != 'N' && cold != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(cold != 'Y' && cold != 'y' && cold != 'N' && cold != 'n');
       if(cold == 'Y' || cold == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  
    
    do{
    printf("\nBased on your Family inheritance do you have experience of Asthma?: ");
    scanf(" %c", &asthma);
    if(asthma != 'Y' && asthma != 'y' && asthma != 'N' && asthma != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(asthma != 'Y' && asthma != 'y' && asthma != 'N' && asthma != 'n');
        if(asthma == 'Y' || asthma == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  

    do{
    printf("\nBased on your Family inheritance do you have experience of Arthritis?: ");
    scanf(" %c", &arthritis);
    if(arthritis != 'Y' && arthritis != 'y' && arthritis != 'N' && arthritis != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(arthritis != 'Y' && arthritis != 'y' && arthritis != 'N' && arthritis != 'n');
        if(arthritis == 'Y' || arthritis == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  

    do{
    printf("\nBased on your Family inheritance do you have experience Obesity?: ");
    scanf(" %c", &obesity);
    if(obesity != 'Y' && obesity != 'y' && obesity != 'N' && obesity != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(obesity != 'Y' && obesity != 'y' && obesity != 'N' && obesity != 'n');
        if(obesity == 'Y' || obesity == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }  

    do{
    printf("\nBased on your Family inheritance do you have experience Cancer?: ");
    scanf(" %c", &cancer);
    if(cancer != 'Y' && cancer != 'y' && cancer != 'N' && cancer != 'n'){
        printf("\nINVALID INPUT, PLEASE TRY AGAIN\n");
    }
    }
    while(cancer != 'Y' && cancer != 'y' && cancer != 'N' && cancer != 'n');
        if(cancer == 'Y' || cancer == 'y'){
        printf("How many times did you experience this diseases?: ");
        scanf("%d", &numexp);
    }
    system("pause");
    system("cls");
    printf("\t\t\tHere's are the Summary of your answers\n\n");
    printf("\t\nHighblood: %c",highblood);
    if (highblood == 'Y' || highblood == 'y') {      
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nCough: %c",cough);
    if (cough == 'Y' || cough == 'y') { 
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nFever: %c",fever);
    if (fever == 'Y' || fever == 'y') { 
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nCold: %c",cold);
    if (cold == 'Y' || cold == 'y') {
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nAsthma: %c",asthma);
    if (asthma == 'Y' || asthma == 'y') {    
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nArthritis: %c",arthritis);
    if (arthritis == 'Y' || arthritis == 'y') {
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nObesity: %c",obesity);
    if (obesity == 'Y' || obesity == 'y') {
    printf("\t\nNumber of Experience: %d", numexp);
    }
    printf("\t\nCancer: %c",cancer);
    if (cancer == 'Y' || cancer == 'y') {
    printf("\t\nNumber of Experience: %d", numexp);
    } 
    rec = record1(suv,numexp,highblood,cough,fever,cold,asthma,arthritis,obesity,cancer);
    return suv;
}
int record1(int suv, int numexp, char a, char b, char c, char d, char e,char f,char g,char h)
{
   
    FILE *mr;
    mr = fopen("monitor.txt", "a");
    if (mr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }   
    fprintf(mr,"\t\nHighblood: %c",a);
    if (a == 'Y' || a == 'y') {      
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nCough: %c",b);
    if (b == 'Y' || b == 'y') { 
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nFever: %c",c);
    if (c == 'Y' || c == 'y') { 
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nCold: %c",d);
    if (d == 'Y' || d == 'y') {
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nAsthma: %c",e);
    if (e == 'Y' || e == 'y') {    
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nArthritis: %c",f);
    if (f == 'Y' || f == 'y') {
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nObesity: %c",g);
    if (g == 'Y' || g == 'y') {
    fprintf(mr,"\t\nNumber of Experience: %d", numexp);
    }
    fprintf(mr,"\t\nCancer: %c\n\n",h);
    if (h == 'Y' || h == 'y') {
    fprintf(mr,"\t\nNumber of Experience: %d\n\n\n", numexp);
    }
    printf("\n");
} 


 






