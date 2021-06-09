#include<stdio.h>
#include<time.h>
void fucn();
int sub,i,n,c;
int roll,count=0,a[20];

void main()
{
	clock_t t;
    	t = clock();


FILE *fp;
	fp=fopen("proj.txt","a+");
	if(fp==NULL)
{
	printf("file doesnt exist\n");
}

printf("PRESS 1: TO START EXAM\n");
printf("PRESS 2: TO SEE CORRECT ANSWERS\n");
printf("PRESS 3: TO SEE RESULTS OF ATTEMPTED STUDENTS\n");


scanf("%d",&n);

switch (n)
{
case 1:printf("PLEASE CHOOSE YOUR COURSE\n");
sub:
fprintf(fp,"Exam started for student\n");
printf(" 1)BBA\n 2)BSC CS\n 3)BSC BIO\n 4)BSC PHY\n 5)BSC MATH\n 6)BA ECO\n 7)BA HIS\n 8)BA ENG\n");
	scanf("%d",&sub);
fprintf(fp,"Sub =%d\n",sub);

if(sub==2)
{
	printf("Enter your last digit ROLL NUMBER\n");
}
else
{	printf("NO EXAM FOR YOU\n TO START AGAIN PRESS 1");
	scanf("%d",&n);
	if(n==1)
	printf("PLEASE CHOOSE OTHER YOUR COURSE\n");
	goto sub;
}
scanf("%d",&roll);
fprintf(fp,"Roll =%d\n",roll);
switch (roll)
{
case 1:printf("Your Name Is name1\n");
fprintf(fp," name1\n");
break;
case 2:printf("Your Name Is name2\n");
fprintf(fp," name2\n");
break;
case 3:printf("Your Name Is name3\n");
fprintf(fp," name3\n");
break;
case 4:printf("Your Name Is name4\n");
fprintf(fp,"name4\n");
break;
case 5:printf("Your Name Is name5\n");
fprintf(fp,"name5\n");
break;
case 6:printf("Your Name Is name6\n");
fprintf(fp," name6\n");
break;

}

printf("TO CONFIRM PRESS 1\n");
scanf("%d",&n);
if(n==1)
{
	printf("Q1:What is meaning of H+ in moblie data?\n1)High speed packet access\n2)High speed protocal access\n3)Evolved High speed packet access\n4)Evolved High speed protocol access\n");
	scanf("%d",&a[0]);
fprintf(fp,"OPTIIN CHOOSED FOR Q1 =%d\n",a[0]);
printf("Q2:Which gas is known as laughing gas?\n1)Nitrous Oxide\t2)Carbon Dioxide\n3)Carbon Oxide\t4)Nitrogen Dioxide\n");
scanf("%d",&a[1]);
fprintf(fp,"OPTIIN CHOOSED FOR Q2 =%d\n",a[1]);
printf("Q3:what is techinical name of the symbol '#'\n1)HASH\t2)Octothrope\n3)HASHTAG\t4)none\n");
	scanf("%d",&a[2]);
fprintf(fp,"OPTIIN CHOOSED FOR Q3 =%d\n",a[2]);
printf("Q4:Where is pakistan in India\n1)In bihar\t2)Near Bihar\n");
	scanf("%d",&a[3]);
fprintf(fp,"OPTIIN CHOOSED FOR Q4 =%d\n",a[3]);
printf("Q5:How many generations of computers we have?\n 1)8\t2)7\n3)6\t4)5\n");
scanf("%d",&a[4]);
fprintf(fp,"OPTIIN CHOOSED FOR Q5 =%d\n",a[4]);
printf("Q6:What does HTTP stands for\n1)Head Tail Transfer protocol\t2)Hypertext Transfer protocol\n3)Hypertext Transfer Plotter\t4)Hyper text transfer plot\n ");
scanf("%d",&a[5]);
fprintf(fp,"OPTIIN CHOOSED FOR Q6 =%d\n",a[5]);
printf("Q7:Father of C programming language\n1)Dennis Ritchie\t2)Thomas kurtz\n3)Bryon Gotfried\t4)bill gates\n");
scanf("%d",&a[6]);
fprintf(fp,"OPTIIN CHOOSED FOR Q7 =%d\n",a[6]);
printf("Q8:Which state has second largest coastline\n1)Tamilnadu\t2)Andhrapradesh\n3)Maharastra\t4)Kerala\n");
scanf("%d",&a[7]);
fprintf(fp,"OPTIIN CHOOSED FOR Q8 =%d\n",a[7]);
printf("Q9:What is next letter A B C D _\n1)E\n2)F\n3)D\n4)G\n");
scanf("%d",&a[8]);
fprintf(fp,"OPTIIN CHOOSED FOR Q9 =%d\n",a[8]);
printf("Q10:Who will be president of india in 2020\n1)Venkaiah Naidu\n2)Ram Nath Kovind\n3)Manmohan singh\n4)No one\n");
scanf("%d",&a[9]);
fprintf(fp,"OPTIIN CHOOSED FOR Q10 =%d\n",a[9]);
}if(a[0]==3)
count++;
if(a[1]==1)
count++;
if(a[2]==2)
count++;
if(a[3]==1)
count++;
if(a[4]==4)
count++;
if(a[5]==2)
count++;
if(a[6]==1)
count++;
if(a[7]==2)
count++;
if(a[8]==2)
count++;
if(a[9]==2)
count++;
printf("Your Score in Examination is=%d\n out of 10",count);
t = clock() - t;
    	double time_taken = ((double)t)/CLOCKS_PER_SEC;
    	printf("    EXAM took %f seconds to complete \n", time_taken*10000);
	fprintf(fp,"Time =%f\n",  time_taken*10000);
	fclose(fp);

//printf("Exam is completed \nTo review press 1\nTo exit Exam Press 2\n");
break;
//scanf("%d",&n);

case 2:printf(" INSTRUCTIONS:  Press any number to go forward\n");


printf("Q1:What is meaning of H+ in moblie data?\n3)Evolved High speed packet access\n");
scanf("%d",&n);
printf("Q2:Which gas is known as laughing gas?\n1)NitrousOxide\n");
scanf("%d",&n);
printf("Q3:what is techinical name of the symbol '#'\n2)Octothrope\n");
scanf("%d",&n);
printf("Q4:Where is pakistan in India\n1)In bihar\n");
scanf("%d",&n);
printf("Q5:How many generations of computers we have?\n4)5\n");
scanf("%d",&n);
printf("Q6:What does HTTP stands for\n2)Hypertext Transfer protocol\n ");
scanf("%d",&n);
printf("Q7:Father of C programming language\n1)Dennis Ritchie\t");
scanf("%d",&n);
printf("Q8:Which state has second largest coastline in india\n2)Andhrapradesh\n");
scanf("%d",&n);
printf("Q9:What is next letter A B C D _\n2)F\n");
scanf("%d",&n);
printf("Q10:Who will president of india in 2020\n2)Ram Nath Kovind\n");

//else

    //printf("EXAM endED \n");


break;

case 3:printf("Enter your roll no\n");

{fp = fopen("proj.txt", "r");
 while( c != EOF)
  {
    c = fgetc(fp);
    printf("%c",c);
  }
  fclose(fp);
}
}
}
