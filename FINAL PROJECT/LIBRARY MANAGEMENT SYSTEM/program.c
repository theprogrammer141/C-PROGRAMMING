/*NAME : MUHAMMAD ABDULLAH
REG # : FA23-BSE-090
IDE: VS CODE
VERSION : 1.83.0
DATE : 01-12-2023*/

/*THIS PROJECT IS ABOUT DEVELOPING A LIBRARY MANAGEMENT SYSTEM.
IN THIS PROJECT, WE WILL BE USING ALL BASIC CONCEPTS OF C.
LIKE LOOPS,IF-ELSE CONDITIONS,FUNCTIONS,ARRAYS,STRUCTURES AND FILE-HANDLING.*/

//IMPORTING NECESSARY LIBRARIES
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//DECLARING A STRUCTURE FOR BOOK
struct book 
{
    int serial_number;
    char ISBN[20];
    char name[50];
    int edition;
    char author[50];
    int is_reserved;
}b; //STRUCTURE VARIABLE DECLARED HERE SO THAT IT COULD BE USED IN ALL FUNCTIONS

//FUNCTION PROTOTYPES
void add_book();
void delete_book();
void search_book_by_ISBN();
void search_book_by_name();
void search_book_by_author();
void modify_book();
void display_books();
void issue_or_return_book();
void save_records_to_file();
void exit_library();


//MAIN FUNCTION
int main()
{
    int choice;     //FOR USER'S CHOICE
    char another;   //FOR ITERATING PROGRAM ON USER'S CHOICE

    //DO WHILE LOOP FOR ITERATING PROGRAM
    do
    {
    printf("\033[1;33m");
    printf("\n");
    printf("                        |-------------------WELCOME TO LIBRARY--------------------|\n\n");
    printf("                        |    PLEASE CHOOSE FROM THE MENU BELOW:-                  |\n\n");               
    printf("                        |    1.ADD BOOK                                           |\n\n");                                            
    printf("                        |    2.DELETE BOOK                                        |\n\n");
    printf("                        |    3.SEARCH BOOK BY ISBN                                |\n\n");
    printf("                        |    4.SEARCH BOOK BY NAME                                |\n\n");
    printf("                        |    5.SEARCH BOOK BY AUTHOR                              |\n\n");
    printf("                        |    6.MODIFY BOOK                                        |\n\n");
    printf("                        |    7.DISPLAY BOOKS                                      |\n\n");
    printf("                        |    8.ISSUE OR RETURN BOOK                               |\n\n");
    printf("                        |    9.EXIT LIBRARY                                       |\n\n");
    printf("                        |---------------------------------------------------------|\n\n");
    printf("\033[0m");

    //DO WHILE LOOP FOR INPUT VALIDATION
    do
    {
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    if(choice<1 || choice>9)
    {
        printf("INVALID INPUT!PLEASE SELECT BETWEEN(1-9)!\n");
        getchar();
    }
    else
    {
        break;
    }
    }while(1);

    //SWITCH CASE TO PERFORM THE REQUIRED FUNCTION
    switch (choice)
    {
    case 1:
        add_book(); //ADD BOOK FUNCTION CALL
        break;
    case 2:
        delete_book();  //DELETE BOOK FUNCTION CALL
        break;
    case 3:
        search_book_by_ISBN();  //SEARCH BOOK BY ISBN FUNCTION CALL
        break;
    case 4:
        search_book_by_name();  //SEARCH BOOK BY NAME FUCNTION CALL
        break;
    case 5:
        search_book_by_author();    //SEARCH BOOK BY AUTHOR FUNCTION CALL
        break;
    case 6:
        modify_book();  //MODIFY BOOK FUNCTION
        break;
    case 7:
        display_books();    //DISPLAY BOOK FUNCTION CALL
        break;
    case 8:
        issue_or_return_book();     //ISSUE OR RETURN BOOK FUNCTION CALL
        break;
    case 9:
        exit_library();     //EXIT FUNCTION CALL
        break;
    default:
        printf("INVALID INPUT!PLEASE ENTER AGAIN:");
    }

    printf("DO YOU WANT TO PERFORM ANOTHER FUNCTION?(Y/N)(y/n):");
    another=getch();
    printf("\n\n");

    }while(another=='Y' || another=='y');

    return 0;
}
//FUNCTION DEFINITIONS

//ADD BOOK FUNCTION DEFINTION
void add_book()
{
        //OPENING FILE IN APPEND MODE SO THAT RECORDS CAN BE APPENDED
        //ONE AFTER THE OTHER
        FILE *fp;
        fp=fopen("librarydatabase.txt","a");
        if(fp==NULL)
        {
            printf("FILE NOT FOUND!");
            exit(1);
        }
        printf("\n-------------------ADDING BOOK---------------------------\n");
        printf("ENTER BOOK SERIAL NUMBER:");
        scanf("%d",&b.serial_number);
        getchar();
        if(b.serial_number<=0)
        {
            printf("INVALID INPUT!ENTER AGAIN:");
            scanf("%d",&b.serial_number);
            getchar();
        }

        //INPUTING THE BOOK DETAILS
        printf("ENTER ISBN NUMBER:");
        fgets(b.ISBN,20,stdin);
        fflush(stdin);
        printf("ENTER NAME OF BOOK:");
        fgets(b.name,50,stdin);
        fflush(stdin);
        printf("ENTER EDITION OF BOOK:");
        scanf("%d",&b.edition);
        getchar();
        printf("ENER AUTHOR'S NAME:");
        fgets(b.author,50,stdin);
        fflush(stdin);
        b.is_reserved=0;

        //WRITING DATA INTO THE FILE
        fprintf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n",b.serial_number,b.ISBN,b.name,b.edition,b.author,b.is_reserved);
        printf("BOOK ADDED SUCCESSFULLY!\n");  
        printf("----------------------------------------------------------\n");
        
        //CLOSING THE FILE
        fclose(fp);
}


//DELETE BOOK FUNCTION DEFINITION
void delete_book()
{
    int serialnumbertodelete;
    
    printf("\n-------------------DELETING BOOK-------------------------\n");
    
    //TAKING SERIAL NUMBER INPUT
    printf("ENTER SERIAL NUMBER TO DELETE:");
    scanf("%d",&serialnumbertodelete);

    //INPUT VALIDATION
    while(serialnumbertodelete<1)
    {
        printf("INVALID INPUT!ENTER AGAIN:");
        scanf("%d",&serialnumbertodelete);
    }
   
    //OPENING FILE FOR READING RECORDS
    FILE *fp;
    //OPENING A TEMPORARY FILE FOR WRITING THE RECORDS AFTER DELETING
    FILE *tempfp;

    fp=fopen("librarydatabase.txt","r");
    tempfp=fopen("temporarydatabase.txt","w");

    if(fp==NULL || tempfp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }
    
    int flag=0;

    //READING RECORDS FROM THE FILE 
    //CHECKING IF THE SERIAL NUMBER MATCHES
    //IF YES,THEN DELETE THE RECORD
    //ELSE WRITE THE RECORDS IN THE TEMPORARY FILE
    while(fscanf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        if(serialnumbertodelete==b.serial_number)
        {
            flag=1;
            printf("BOOK WITH SERIAL NUMBER (%d) HAS BEEN DELETED!\n",serialnumbertodelete);
            printf("----------------------------------------------------------\n");
        }
        else
        {
            fprintf(tempfp,"%d\n%s\n%s\n%d\n%s\n%d\n",b.serial_number,b.ISBN,b.name,b.edition,b.author,b.is_reserved);
        }
    }

    //CHECKING IF BOOK WITH SERIAL NUMBER EXISTS
    if(flag==0)
    {
        printf("BOOK WITH SERIAL NUMBER (%d) DOES NOT EXIST!\n",serialnumbertodelete);
        printf("----------------------------------------------------------\n");
    }
   
    //CLOSING THE FILES
    fclose(fp);
    fclose(tempfp);

    //REMOVING AND RENAMING FILES
    remove("librarydatabase.txt");
    rename("temporarydatabase.txt","librarydatabase.txt");
}

//SEARCH BOOK BY ISBN FUNCTION DEFINITION
void search_book_by_ISBN()
{
    printf("\n-------------------SEARCHING BOOK BY ISBN----------------\n");
    char isbn[50];

    //INPUTTING ISBN NUMBER TO SEARCH
    printf("ENTER ISBN NUMBER OF BOOK TO SEARCH:");
    scanf("%s",isbn);

    //OPENING FILE TO READ RECORDS
    FILE *fp;
    fp=fopen("librarydatabase.txt","r");

    int flag=0;
    
    //READING RECORDS AND COMPARING IF THE ISBN NUMBER MATCHES
    //IF ISBN MATCHES,THEN PRINTING THE BOOK DETAILS
    while(fscanf(fp,"%d %s %s %d %s %d",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        if(strcmp(b.ISBN,isbn)==0)
        {
            printf("BOOK FOUND!\n");
            printf("----------------------------------------------------------\n");
            printf("BOOK DETAILS:-------------------------------------------\n");
            printf("SERAL NUMBER:%d\n",b.serial_number);
            printf("ISBN NUMBER:%s\n",b.ISBN);
            printf("NAME:%s\n",b.name);
            printf("EDITION:%d\n",b.edition);
            printf("AUTHOR:%s\n",b.author);
            printf("RESERVED:%d\n",b.is_reserved);
            printf("----------------------------------------------------------\n");
            flag=1;
            break;
        }
    }

    //CLOSING THE FILE
    fclose(fp);

    //CHECKING IF THE BOOK WITH ISBN EXISTS
    if(flag==0)
    {
        printf("BOOK WITH ISBN (%s) NOT FOUND!\n",isbn);
        printf("----------------------------------------------------------\n");
    }
}

//SEARCH BOOK BY NAME FUNCTION DEFINITION
void search_book_by_name()
{
    printf("\n-------------------SEARCHING BOOK BY NAME----------------\n");

    char current_name[50];
    
    //INPUTTING NAME TO CHECK
    printf("ENTER NAME OF BOOK TO SEARCH:");
    scanf("%s",current_name);

    //OPENING FILE IN READ MODE TO READ RECORDS
    FILE *fp;
    fp=fopen("librarydatabase.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    int flag=0;
    
    //READING RECORDS AND COMPARING THE NAME
    //IF NAME MATCHES, THEN PRINTING THE BOOK DETAILS
    while(fscanf(fp,"%d %s %s %d %s %d",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        if(strcmp(b.name,current_name)==0)
        {
            printf("BOOK FOUND!\n");
            printf("----------------------------------------------------------\n");
            printf("BOOK DETAILS:---------------------------------------------\n");
            printf("SERIAL NUMBER:%d\n",b.serial_number);
            printf("ISBN:%s\n",b.ISBN);
            printf("NAME:%s\n",b.name);
            printf("EDITION:%d\n",b.edition);
            printf("AUTHOR:%s\n",b.author);
            printf("RESERVED:%d\n",b.is_reserved);
            printf("----------------------------------------------------------\n");
            flag=1;
            break;
        }
    }

    //CLOSING THE FILE
    fclose(fp);

    //CHECKING IF THE BOOK WITH THE ENTERED NAME EXISTS
    if(flag==0)
    {
        printf("BOOK WITH NAME (%s) DOES NOT EXIST!\n",current_name);
        printf("----------------------------------------------------------\n");
    }
}

//SEARCH BOOK BY AUTHOR FUNCTION DEFINITION
void search_book_by_author()
{
    printf("\n---------------SEARCHING BOOK BY AUTHOR------------------\n");

    char current_author[50];

    //INPUTTING THE AUTHOR NAME TO CHECK
    printf("ENTER AUTHOR NAME TO SEARCH BOOK:");
    scanf("%s",current_author);

    //OPENING FILE IN READ MODE TO READ RECORDS
    FILE*fp;
    fp=fopen("librarydatabase.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    int flag=0;

    //READING THE RECORDS AND COMPARING IF THE ENTERED NAME MATCHES 
    //IF YES, THEN PRINTING THE BOOK DETAILS
    while(fscanf(fp,"%d %s %s %d %s %d",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        if(strcmp(b.author,current_author)==0)
        {
            printf("BOOK FOUND!\n");
            printf("----------------------------------------------------------\n");
            printf("BOOK DETAILS:---------------------------------------------\n");
            printf("SERIAL NUMBER:%d\n",b.serial_number);
            printf("ISBN:%s\n",b.ISBN);
            printf("NAME:%s\n",b.name);
            printf("EDITION:%d\n",b.edition);
            printf("AUTHOR:%s\n",b.author);
            printf("RESERVED:%d\n",b.is_reserved);
            printf("----------------------------------------------------------\n");
            flag=1;
            break;
        }
    }

    //CLOSING THE FILE
    fclose(fp);

    //CHECKING IF THE AUTHOR NAME EXISTS OR NOT
    if(flag==0)
    {
        printf("BOOK WITH AUTHOR NAME (%s) DOES NOT EXIST!\n",current_author);
        printf("----------------------------------------------------------\n");
    }
}

//MODIFY BOOK FUNCTION DEFINTION
void modify_book()
{
    printf("\n-------------------MODIFYING BOOK------------------------\n");

    //DECLAING MY OWN VARIABLES TO MODIFY A BOOK RECORD
    int current_serial;
    int modified_serial_number;
    char modified_ISBN[20];
    char modified_name[50];
    int modified_edition;
    char modified_author[50];
    int modified_reserved_status;

    //OPENING ORIGINAL FILE IN READ MODE TO READ RECORDS
    //OPENING A TEMPORARY FILE IN WRITE MODE TO WRITE THE MODIFIED RECORDS
    FILE*fp,*tempfp;
    fp=fopen("librarydatabase.txt","r");
    tempfp=fopen("temporarydatabase.txt","w");
    if(fp==NULL || tempfp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    //INPUTTING SERIAL NUMBER TO MODIFY THAT SPECIFIC BOOK
    printf("ENTER SERIAL NUMBER AT WHICH YOU WANT OT MODIFY THE BOOK:");
    scanf("%d",&current_serial);

    int flag=0;

    while(fscanf(fp,"%d %s %s %d %s %d",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        //IF SERIAL NUMBER MATCHES, THEN MODIFY THAT BOOK RECORD
        if(b.serial_number==current_serial)
        {
            printf("SERIAL MATCHED!\n");
            printf("----------------------------------------------------------\n");
            printf("ENTER MODIFIED SERIAL NUMBER:");
            scanf("%d",&modified_serial_number);
            getchar();
            b.serial_number=modified_serial_number;

            printf("ENTER MODIFIED ISBN:");
            fgets(modified_ISBN,50,stdin);
            fflush(stdin);
            strcpy(b.ISBN,modified_ISBN);

            printf("ENTER MODIFIED NAME:");
            fgets(modified_name,50,stdin);
            fflush(stdin);
            strcpy(b.name,modified_name);

            printf("ENTER MODIFIED EDITION:");
            scanf("%d",&modified_edition);
            getchar();
            b.edition=modified_edition;

            printf("ENTER MODIFIED AUTHOR NAME:");
            fgets(modified_author,50,stdin);
            fflush(stdin);
            strcpy(b.author,modified_author);

            modified_reserved_status=b.is_reserved;

            b.is_reserved=modified_reserved_status;
    
            flag=1;
        }
        //WRITING THE MODIFIED RECORD INTO TEMPORARY FILE
        fprintf(tempfp,"%d\n%s\n%s\n%d\n%s\n%d\n",b.serial_number,b.ISBN,b.name,b.edition,b.author,b.is_reserved);
    }

    //CLOSING THE FILES
    fclose(fp);
    fclose(tempfp);

    //REMOVING AND RENAMING FILES
    remove("librarydatabase.txt");
    rename("temporarydatabase.txt","librarydatabase.txt");

    //CHECKING IF THE SERIAL NUMBER MATCHES OR NOT
    if(flag==0)
    {
        printf("SERIAL NUMBER (%d) DOES NOT MATCH!\n");
        printf("----------------------------------------------------------\n");
        return;
    }

    printf("BOOK MODIFICATION SUCCESSFULL!\n");
    printf("----------------------------------------------\n");
}

//DISPLAY ALL BOOKS FUNCTION DEFINITION
void display_books()
{
    //OPENING THE FILE TO READ RECORDS 
    FILE *fp;
    fp=fopen("librarydatabase.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    //READING THE RECORDS AND THEN PRINTING TO THE CONSOLE
    printf("\n------------------------DISPLAYING BOOKS--------------------------\n");

    //CHECK IF THE FILE IS EMPTY
        fseek(fp,0,SEEK_END);
        if(ftell(fp)==0)
        {
        printf("LIBRARY IS EMPTY!NO RECORDS FOUND!\n\n");
        }
    
    //DISPLAY RECORDS IF DATA IS PRESENT
    else
    {
    rewind(fp);
    while(fscanf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
        printf("SERIAL NUMBER:%d\n",b.serial_number);
        printf("ISBN:%s\n",b.ISBN);
        printf("NAME:%s\n",b.name);
        printf("EDITION:%d\n",b.edition);
        printf("AUTHOR:%s\n",b.author);
        printf("RESERVED STATUS:%d\n\n\n",b.is_reserved);
    }
    }
    printf("\n---------------------------------------------------------------------\n");
    //CLOSING THE FILE
    fclose(fp);
}


//ISSUE BOOK FUNCTION DEFINITION
void issue_or_return_book()
{
    printf("\n--------------------ISSUING OR RETURNING BOOK-------------------------\n");

    int currentSerial;
    int choice;

    printf("ENTER SERIAL NUMBER TO ISSUE OR RETURN BOOK:");
    scanf("%d", &currentSerial);
    getchar();

    FILE *fp, *tempfp;
    fp=fopen("librarydatabase.txt","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    struct book tempBook;
    int found=0;

    tempfp=fopen("temporarydatabase.txt","w");
    if(tempfp==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(1);
    }

    while(fscanf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n",&tempBook.serial_number,tempBook.ISBN,tempBook.name,&tempBook.edition,tempBook.author,&tempBook.is_reserved)!=EOF)
    {
        if(currentSerial==tempBook.serial_number)
        {
            printf("BOOK FOUND!\n");
            found=1;

            printf("1.ISSUE BOOK\n2.RETURN BOOK\n");
            printf("ENTER YOUR CHOICE:");
            scanf("%d",&choice);

            if(choice==1)
            {
                if(tempBook.is_reserved==0)
                {
                    tempBook.is_reserved=1;
                    printf("BOOK WITH SERIAL NUMBER (%d) HAS BEEN ISSUED!\n",currentSerial);
                }
                else
                {
                    printf("BOOK WITH SERIAL NUMBER (%d) HAS ALREADY BEEN ISSUED!\n",currentSerial);
                }
            }
            else if(choice==2)
            {
                if(tempBook.is_reserved==1)
                {
                    tempBook.is_reserved=0;
                    printf("BOOK WITH SERIAL NUMBER (%d) HAS BEEN RETURNED!\n",currentSerial);
                }
                else
                {
                    printf("BOOK WITH SERIAL NUMBER (%d) IS NOT ISSUED!\n",currentSerial);
                }
            }
            else
            {
                printf("INVALID CHOICE!\n");
            }
        }
        fprintf(tempfp,"%d\n%s\n%s\n%d\n%s\n%d\n",tempBook.serial_number,tempBook.ISBN,tempBook.name,tempBook.edition,tempBook.author,tempBook.is_reserved);
    }

    fclose(fp);
    fclose(tempfp);

    remove("librarydatabase.txt");
    rename("temporarydatabase.txt","librarydatabase.txt");

    if(found==0)
    {
        printf("BOOK WITH SERIAL NUMBER (%d) DOES NOT EXIST!\n",currentSerial);
    }

    printf("----------------------------------------------------------\n");

}

//SAVING RECORDS FUNCTION DEFINITION
/*THIS IS AN EXTRA FUNCTION WHICH WILL BE CALLED IN EXIT FUNCTION.
THIS FUNCTION SAVES AND WRITES ALL THE RECORDS WITH CHANGES TO THE TEMPORARY FILE.
THEN REMOVES THE ORIGINAL FILE AND RENMAES THE TEMPORARY FILE*/
void save_records_to_file()
{
    FILE *fp,*tempfp;
    fp=fopen("librarydatabase.txt","r");
    tempfp=fopen("temporarydatabase.txt","w");
    if(fp==NULL || tempfp==NULL)
    {
        printf("FILE NOT FOUND!\n");
        exit(1);
    }

    while(fscanf(fp,"%d\n%s\n%s\n%d\n%s\n%d\n",&b.serial_number,b.ISBN,b.name,&b.edition,b.author,&b.is_reserved)!=EOF)
    {
    fprintf(tempfp,"%d\n%s\n%s\n%d\n%s\n%d\n",b.serial_number,b.ISBN,b.name,b.edition,b.author,b.is_reserved);
    }
    fclose(fp);
    fclose(tempfp);

    remove("librarydatabase.txt");
    rename("temporarydatabase.txt","librarydatabase.txt");
}

//EXIT FUNCTION DEFINTION
//THE FUNCTION WILL SUCCESSFULLY EXIT THE LIBRARY WITH A MEANINGFULL MESSAGE
void exit_library()
{
    save_records_to_file();
    printf("\n----------------------------------------------------------\n");
    printf("EXITING THE LIBRARY.THANK YOU FOR USING LMS.\n");
    printf("\n----------------------------------------------------------\n");
    exit(0);
}