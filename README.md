# c_tutorial
hi i am pradeep fullstack developer  provide a c language  tutrial 
c language 

`
## what is identifier 
identifier refers to the name is used to identitie variable ,function and etc..
int a\
int b \_______identifires 
void  /
void /
`

## natural number =====
`
#include<stdio.h>
int sum(int n);
int main(){
	
	printf("sum is %d",sum(3));
	return 0;
}

int sum(int n){
	
	if(n==1){
		return 1;
	}
	int sum1=sum(n-1);
	int  sum2=sum1+n;
	return sum2;
}

`
## check if a file exists beforee reading from it 
=================================================================
`
#include<stdio.h>
int main(){
  FILE *fptr;
  fptr=fopen("NewTest.text","r");
  if(fptr==NULL){
    printf("not found");
  }else{
    flclose(fptr);
  }
  return 0;
}

reading from file===============================================
#include<stdio.h>
int main(){
  FILE *fptr;
  fptr=fopen("NewTest.text","r");
  char ch;
  fscanf(fptr,"%c",&ch);
  printf("charactor=> %c",ch);
  flclose(fptr);

  return 0;
}
`

## c language questions============================
<p>1)write a programm to calculate the area of square  side is give (side *side)</p>
<p>2)write a programm to calculate area of circle (3.14*radius*radius)</p>
<p>3)write a programm to check the if a number is divice by 2 or not </p>
<p>4)write a programm to print the average of 3 number</p>
<p>5)write a programm to check if given is digit or not </p>
<p>6)write a programm to print the smallest number </p>
<p>7)write a programm to print the resutl or pass or fail</p>
<p>8)write a programm to find if a charactor entered by user upper case or not </p>
<p>9)write a programm print 1 to 10;</p>
<p>10)print the number from 0 to n if n is given by user</p>
<p>11)print the sum of first n natural  number  3=1+2+3=6 5=1+2+3+4+5=15</p>
<p>12)also print them in reverse</p>
<p>13 print the table input by the user </p>
<p>14)keep taking number as input from the user until user enters an odd number</p>
<p>15)print the factorial number </p>
<p>16)print the table in reverse</p>
<p>17)write a function that prints namaste if user is indian & banjour if the user is french</p>
<p>18)write a programm to print the abcd in lowercase and upper case </p>
<P>19)write a programm to calculate the percentage of subject related</P>
<p>20)print the value of i its pointer to pointer </p>
<P>21)swap two number a&b;</P>
<p>22)write a programm to enter price of 3 item and print their final gst cost </p>
<p>23)create a string value and store fristName and lastName from loop</p>
<p>24)write a programm stroe the data of 3 student </p>
