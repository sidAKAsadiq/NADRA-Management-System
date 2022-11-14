#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char id[20],idc[20];
void ask(){
printf("\nEnter id to see your DOCS!\n");
gets(idc);
}
void main(){
		char cpy[50],name[30],fname[20],gen[9],dob[15],stay[20];//id[20];
			printf("Enter the following details:\n1.Name:  ");
			fflush(stdin);	
			gets(name);
			printf("\n2.ID number:  ");
			gets(id);
			printf("\n3.Father's Name:  ");
			gets(fname);
			printf("\n4.Gender:  ");
			gets(gen);
			printf("\n5.Date of Birth(DD/MM/YYYY):  ");
			gets(dob);
			printf("\n6.Country of Stay:  ");
			gets(stay);
			FILE * nicop=NULL;
			nicop=fopen(id,"a");
			if(nicop==NULL){
				printf("hi");
			}
			fprintf(nicop,"\n------------------------------------------------------\n------------------------------------------------------\n");
            fprintf(nicop,"\t\t   NICOP CARD\n------------------------------------------------------\n------------------------------------------------------\n");
	        fprintf(nicop,"   Name: %s",name);
	       // puts(name);
	        fprintf(nicop,"\n   ID number: %s",id);
	        //puts(id);
	        fprintf(nicop,"\n   Father's Name: %s",fname);
	        //puts(fname);
	        fprintf(nicop,"\n   Gender: %s",gen);
	        //puts(gen);
	        fprintf(nicop,"\n   Date of Birth: %s",dob);
	        //puts(dob);
	        fprintf(nicop,"\n   Country of Stay: %s",stay);
	        //puts(stay);
	        ask();
	        int len_id=strlen(id);
	        int len_idc=strlen(idc);
	        int i,j;
	        if(len_id==len_idc){
	        	for(i=0;i<len_id;i++){
	        		if(id[i]==idc[i]){
	        			continue;
					}
					else{
						printf("invalid id\n");
						exit (1);
						break;
					}
				}
			}
			else{
				printf("invalid id\n");
				exit (1);
			}    
				nicop=fopen(id,"r");
				while(!feof(nicop)){
			printf("\n------------------------------------------------------\n------------------------------------------------------\n");
            printf("\t\t   NICOP CARD\n------------------------------------------------------\n------------------------------------------------------\n");
	        fgets(cpy,45,nicop);
			printf("\n   Name: %s",name);         
	        fgets(cpy,45,nicop);
	        printf("\n   ID number: %s",id);
	        fgets(cpy,45,nicop);	       
		    printf("\n   Father's Name: %s",fname);
	        fgets(cpy,45,nicop);
	        printf("\n   Gender: %s",gen);
	        fgets(cpy,45,nicop);
	        printf("\n   Date of Birth: %s",dob);
	        fgets(cpy,45,nicop);	        
			printf("\n   Country of Stay: %s",stay);
				}
			}


