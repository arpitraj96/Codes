#include<stdio.h>
#include<string.h>
void addStudentDetails();
void previewStudentDetails();
void marks();
void grade();
void total();
char temp;
int n=0;
struct studentDetails
{
    char name[20];
    char registration[20];
    char dob[10];
    char father[20];
    char mother[20];
    char address[20];
    char course[10];
    char date[10];
    float maths;
    float pps;
    float ee;
    float physics;
    float ss;
}s[20];

int main(){
    printf("\t\t\t\t **WELCOME**\n");
    printf("\t\t\t**Student Management System**\n");
    int flag1 = 2;
    while(flag1==2){
        printf("\t\t\tEnter Login ID: ");
        char id[10];
        scanf("%[^\n]s",&id);
        scanf("%c",&temp);
        printf("\t\t\tPassword: ");
        char pass[10];
        scanf("%[^\n]s",&pass);
        scanf("%c",&temp);
        int idCheck = strcmp(id,"KCCITM");
        int passcheck = strcmp(pass,"12345");
        if(idCheck==0&&passcheck==0){
            int flag = 0;
            printf("\t\t\t***********WELCOME***********\n\n");
            printf("\t\t\t**********Home Page**********\n\n");
            while(flag!=6){
                printf("**********************************************************************\n");
                printf("1. Add Student Details\n2. Preview Student Details\n3. Marks of the Student\n4. Grades of the Student\n5. Total number of Students\n6. Exit\n");
                printf("**********************************************************************\n");
                printf("Enter your option: ");
                int opt;
                scanf("%d",&opt);
                scanf("%c",&temp);
                printf("\n");
                    switch (opt)
                    {
                    case 1:
                        addStudentDetails();
                        break;
                    case 2:
                        previewStudentDetails();
                        break;
                    case 3:
                        marks();
                        break;
                    case 4:
                        grade();
                        break;
                    case 5:
                        total();
                        break;
                    case 6:
                        printf("You are exiting the Student Manegement System..................");
                        flag=6;
                        break;
                    default:
                        printf("Invalid, Please try again");
                        break;
                    }
            }
            flag1=3;
        }
        else{
            if(idCheck!=0)
                printf("\t\t\tInvalid ID\n");
            else if(passcheck!=0)
                printf("\t\t\tInvalid Password\n");
            flag1 = 2;
        }
    }
    return 0;
}
void addStudentDetails(){
    printf("1. Add Student Details\n");
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    scanf("%c",&temp);
    for(int i=0; i<n; i++){
        printf("Entries for Student %d\n",i+1);
        printf("Enter Student Name: ");
        scanf("%[^\n]s",&s[i].name);
        scanf("%c",&temp);
        printf("Enter Registration Number: ");
        scanf("%[^\n]s",&s[i].registration);
        scanf("%c",&temp);
        printf("Enter Date of Birth(DD-MM-YY): ");
        scanf("%s",&s[i].dob);
        scanf("%c",&temp);
        printf("Enter Father's Name: ");
        scanf("%[^\n]s",&s[i].father);
        scanf("%c",&temp);
        printf("Enter Mother's Name: ");
        scanf("%[^\n]s",&s[i].mother);
        scanf("%c",&temp);
        printf("Enter Address: ");
        scanf("%[^\n]s",&s[i].address);
        scanf("%c",&temp);
        printf("Enter the course: ");
        scanf("%[^\n]s",&s[i].course);
        scanf("%c",&temp);
        printf("Enter the Date of Enrollment(DD-MM-YY): ");
        scanf("%s",s[i].date);
        scanf("%c",&temp);
        printf("_____________________________________________________\n");
    }
    printf("***********Thank You**********\n\n");
}
void previewStudentDetails(){
    char reg[20];
    printf("2. Preview Student Details\n");
    printf("Enter the Registration Number: ");
    scanf("%[^\n]s",&reg);
    scanf("%c",&temp);
    int match=101;
    for(int i=0; i<n; i++){
        int check = strcmp(reg,s[i].registration);
        if(check==0){
            match = i;
            break;
        }
    }
    if(match==101)
        printf("Invalid Registration Number\n");
    else{
        printf("Student Name: %s\n",s[match].name);
        printf("Registration Number: %s\n",s[match].registration);
        printf("Date of Birth: %s\n",s[match].dob);
        printf("Father's Name: %s\n",s[match].father);
        printf("Mother's Name: %s\n",s[match].mother);
        printf("Address: %s\n",s[match].address);
        printf("Course Enrolled: %s\n",s[match].course);
        printf("Date of Enrollment: %s\n",s[match].date);
    }
    printf("\n\n");
}
void marks(){
    char reg[20];
    printf("3. Marks of Student\n");
    printf("Enter the Registration Number: ");
    scanf("%[^\n]s",&reg);
    scanf("%c",&temp);
    int match=101;
    for(int i=0; i<n; i++){
        int check = strcmp(reg,s[i].registration);
        if(check==0){
            match = i;
            break;
        }
    }
    if(match==101)
        printf("Invalid Registration Number\n");
    else{
        printf("Name: %s\nRegistration Number: %s\n",s[match].name,s[match].registration);
        printf("Enter Marks out of 100\n");
        printf("Maths: ");
        scanf("%f",&s[match].maths);
        printf("PPS: ");
        scanf("%f",&s[match].pps);
        printf("EE: ");
        scanf("%f",&s[match].ee);
        printf("Physics: ");
        scanf("%f",&s[match].physics);
        printf("Soft Skill: ");
        scanf("%f",&s[match].ss);
    }
    printf("\n\n");
}
void grade(){
    char reg[20];
    printf("4. Grade of Student\n");
    printf("Enter the Registration Number: ");
    scanf("%[^\n]s",&reg);
    scanf("%c",&temp);
    int match=101;
    for(int i=0; i<n; i++){
        int check = strcmp(reg,s[i].registration);
        if(check==0){
            match = i;
            break;
        }
    }
    if(match==101)
        printf("Invalid Registration Number\n");
    else{
        printf("Name: %s\nRegistration Number: %s\n",s[match].name,s[match].registration);
        printf("Marks Obtained\n");
        printf("Maths: %.2f\nPPS: %.2f\nEE: %.2f\nPhysics: %.2f\nSoft Skill: %.2f\n",s[match].maths,s[match].pps,s[match].ee,s[match].physics,s[match].ss);
        float total = s[match].maths+s[match].pps+s[match].ee+s[match].physics+s[match].ss;
        printf("Total Marks Obtained: %.2f\n",total);
        float percent = (total*100)/500;
        printf("Percentage: %.2f",percent);
        if(percent>=95&&percent<=100)
            printf("Grade: OutStanding\n");
        else if(percent>=90&&percent<95)
            printf("Grade: A+\n");
        else if(percent>=80&&percent<90)
            printf("Grade: A\n");
        else if(percent>=70&&percent<80)
            printf("Grade: B+\n");
        else
            printf("Grade: C\n");
    }
    printf("\n\n");
}
void total(){
    printf("5. Total Numbers of Students\n");
    printf("Number of Students: %d\n",n);
    printf("\n\n");
}