#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,n,num,c,i=0;

struct student{
	char name[30],fn[30],mn[30],add[30];
	int age,mob;
	
	}s[100];
 
struct employes{
		char name[30];
		char address[50];
		int salary,age,mob;
	}e[100];
 	
struct facality {
	char name[30];
	char subject[50];
	char qualification[50] ;
		char add[50];
	int salary,age,mob;	
    } f[100];
	
struct library{
  		
  
	char bookname[30];
	char subject[50];
	char bookid[50] ;	
    } l[100];
     

    void main()
{    printf("\n\t\t\t####### COLLEGE MANAGMENT SYSTEM #######");
    printf("\n\t\t\t___________________________________________");
     do
     {
	 
    printf("\n\n\n \t1.student information||\t2.employes information||\t3.facality information||\t4.library menagement||\t5.exit||\n");
	printf("\nenter your choice\n");
	
	scanf("%d",&c);
	 
    switch(c)
	{	
	case 1:
    {
	
	{
	
	FILE *fp;
	char ch;
	fp=fopen("studentinformation","a+b");
	if(fp==NULL)
	{
     	printf("can't open file reading impossible");
		getch();
		exit(0);		
	}
     
     printf("enter total no. of student =");
   fflush(stdin);
   scanf("%d",&n);
   printf("\n \tenter information of %d students",n);
   for(i=0;i<n;i++)
   {
   	printf("\nenter name of %d student ",i+1);
   	fflush(stdin);
   	gets(s[i].name);
   	printf("enter father's name of %d student ",i+1);
   	fflush(stdin);
   	gets(s[i].fn);
   	printf("enter mother's name of %d student ",i+1);
   	fflush(stdin);
   	gets(s[i].mn);
   	printf("enter address of %d student ",i+1);
   	fflush(stdin);
   	gets(s[i].add);
   	printf("enter age of %d student ",i+1);
   	fflush(stdin);
   	scanf("%d",&s[i].age);
   	printf("enter mobile no. of %d student ",i+1);
   	fflush(stdin);
   	scanf("%d",&s[i].mob);
   	fwrite(&s[i],sizeof(struct student),1,fp);
   }
	printf("\n\tdata saved successfully\n\n");
	fclose(fp);
    
}
  
	   	i=0;
      FILE *fr;
 
	fr=fopen("studentinformation","rb");
		
   printf("\n information of  student\n");
   while(fread(&s[i],sizeof(struct student),1,fr))
   {
   	printf("name of %d student = ",i+1);
   	puts(s[i].name);
   		printf("father's name of %d student = ",i+1);
   	puts(s[i].fn);
     	printf("mother's name of %d student = ",i+1);
   	puts(s[i].mn);
   		printf("Address of %d student = ",i+1);
   	puts(s[i].add);
   	printf("age of %d student =",i+1);
   	printf("%d",s[i].age);
   		printf("mobile no.of %d student = ",i+1);
   	printf("%d",s[i].mob);
   	i++;
	   }
	fclose(fr);
	
	 break;
}   //case 1 end
    	
	 case 2:
	 	{
{

		  
		FILE *fq;
	char ch;
	fq=fopen("employesinformation","a+b");


		if(fq=NULL)
	{
     	printf("can't open file reading impossible");
		getch();
		exit(0);		
	}
     
     printf("\n\nenter total no. of employes =");
   fflush(stdin);
   scanf("%d",&n);
   printf("\n enter information of %d employes",n);
   for(i=0;i<n;i++)
   {
   	printf("\nenter name of %d employes= ",i+1);
   	fflush(stdin);
   	gets(e[i].name);
   	printf("\nenter address of %d employes= ",i+1);
   	fflush(stdin);
  	gets(e[i].address);
   	printf("\nENTER salary of %d employes= ",i+1);
   	scanf("%d",&e[i].salary);
   		printf("\nenter age of %d employes= ",i+1);
   	fflush(stdin);
   	scanf("%d",&e[i].age);
   	printf("\nenter mobile no. of %d employes= ",i+1);
   	fflush(stdin);
   	scanf("%d",&e[i].mob);
   	fwrite(&e[i],sizeof(struct employes),1,fq);
   }
	printf("\n data saved successfully");
	fclose(fq);

}
     
        	i=0;
      FILE *ft;
 
	ft=fopen("employesinformation","rb");


   printf("\n information of  employes\n");
   while(fread(&e[i],sizeof(struct employes),1,ft))
   {
   	printf("name of %d employes = ",i+1);
   	 	fflush (stdout);
   	puts(e[i].name);
   		printf("Address of %d employes = ",i+1);
   		 	fflush (stdout);
   	puts(e[i].address);
   	printf("salary of %d employes = ",i+1);
   	 	fflush (stdout);
   	printf("%d",e[i].salary);
   	printf("age of %d employes = ",i+1);
   	 	fflush (stdout);
   	printf("%d",e[i].age);
   		printf("mobile no.of %d employes =",i+1);
    	fflush (stdout);
   	printf("%d",e[i].mob);
   	
   	i++;
	}
	fclose(ft);


	 break;
	 
}   //case 2 end

  
  
  case 3:   //open case 3 
  	

		  {
			 	
	FILE *ft;
	char ch;
	ft=fopen("facalityinformation","a+b");
	if(ft==NULL)
	{
     	printf("can't open file reading impossible");
		getch();
		exit(0);		
	}
     
     printf("enter total no. of facality =");
   fflush(stdin);
   scanf("%d",&n);
   printf("\n \tenter information of %d facality",n);
   for(i=0;i<n;i++)
   {
   	printf("\nenter name of %d facality =",i+1);
   	fflush(stdin);
   	gets(f[i].name);
   	printf("\n enter subject to teach of %d facality =",i+1);
   	fflush(stdin);\
   	gets(f[i].subject);
   	printf("\n enter qualification of %d facality =",i+1);
   	fflush(stdin);\
   	gets(f[i].qualification);
   	printf("enter address of %d facality =",i+1);
   	fflush(stdin);
   	gets(f[i].add);
  	printf("\nENTER salary of %d facality =",i+1);
   	scanf("%d",&f[i].salary);
   	printf("enter age of %d facality =",i+1);
   	fflush(stdin);
   	scanf("%d",&f[i].age);
   	printf("enter mobile no. of %d facality =",i+1);
   	fflush(stdin);
   	scanf("%d",&f[i].mob);
   	fwrite(&s[i],sizeof(struct facality),1,ft);
   }
	printf("\n\tdata saved successfully\n\n");
	fclose(ft);


	i=0;
      FILE *ftt;
 
	ftt=fopen("facalityinformation","rb");
		
   printf("\n information of  facality\n");
   while(fread(&e[i],sizeof(struct facality),1,ftt))
   {
   	printf("name of %d facality = ",i+1);
   	fflush (stdout);
   	puts(f[i].name);
   	printf("\n suject of %d facality = ",i+1);
   	 	fflush (stdout);
   	puts(f[i].subject);
   	printf("\n qualification of %d facality = ",i+1);
   	 	fflush (stdout);
   	puts(f[i].qualification);
   	printf("\nAddress of %d facality = ",i+1);
   	 	fflush (stdout);
   	puts(f[i].add);
   	printf("\nsalary of %d facality = ",i+1);
   	 	fflush (stdout);
   	printf("%d",f[i].salary);
   	printf("\nage of %d facality = ",i+1);
   	 	fflush (stdout);
   	printf("%d",f[i].age);
   		printf("\nmobile no.of %d facality = ",i+1);
   		 	fflush (stdout);
   	printf("%d",f[i].mob);
   	
   	i++;
	}
	fclose(ftt);
		
	break; 
}

case 4:
	{
  		
	FILE *lb;
	char ch;
	lb=fopen("libraryinformation","a+b");
	if(lb==NULL)
	{
   	    printf("can't open file reading impossible");
	    getch();
		exit(0);  		
	}
   printf("enter total no. of book information to store = ");
   fflush(stdin);
   scanf("%d",&n);
   printf("\n \t enter information of labrary Book %d ",n);
   for(i=0;i<n;i++)
   {
   	printf("\n\tenter name of %d book = ",i+1);
   	fflush(stdin);
   	gets(l[i].bookname);
   	printf("\n enter subject of %d book = ",i+1);
   	fflush(stdin);
   	gets(l[i].subject);
   	printf("\n enter bookid of %d book = ",i+1);
   	fflush(stdin);\
   	gets(l[i].bookid);
   	
   	fwrite(&l[i],sizeof(struct library),1,lb);
   }
	printf("\n\tdata saved successfully\n\n");
	fclose(lb);



	i=0;
      FILE *lbb;
 
	lbb=fopen("laibrary","rb");
		
   printf("\n information of  books\n");
   while(fread(&l[i],sizeof(struct library),1,lbb))
   {
   	printf("name of %d book = ",i+1);
   	 	fflush (stdout);
   	puts(l[i].bookname);
   	printf("\n suject of %d book = ",i+1);
   	 	fflush (stdout);
   	puts(l[i].subject);
   	printf("\n bookid of %d book = ",i+1);
   	 	fflush (stdout);
   	puts(l[i].bookid);
   	 	
   	i++;
	}
	fclose(lbb);
		
		
	break; 
}  
	



case 5:
    exit(0); 
    
 }  //switch case end
 
} while(1);

}
  //void main end



     


