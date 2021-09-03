//HEADER FILES USED
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<dos.h>

int add(); //FUNCTION TO ADD MATRIX
int sub(); //FUNCTION TO SUBTRACT MATRIX
int mul(); //FUNCTION TO MULTIPLY MATRIX
int det(); //FUNCTION TO FIND DETERMINANT
int adj(); //FUNCTION TO FIND ADJOINT OF MATRIX
int inv(); //FUNCTION TO FIND INVERSE OF A MATRIX


void rec()
{
for(int i=1;i<80;i++)
{
delay(30);
gotoxy(i,1);
cout<<"_";
delay(20);
gotoxy(i,23);
cout<<"_";
}
}

void main()
{

clrscr();
rec();
char wer[]={"Welcome to you"};
int l=strlen(wer);
int r=l,j=l++,k;
r+=32;

for(int i=1;i<=l;i++)
{
gotoxy(r,11);
cout<<wer[j];
delay(200);
r--;
j--;
}

char name[20],qw[12]="A@ryan12345",yu[12];
int o,ch,flag=0,n,aaa=0;
delay(200);
gotoxy(33,14);
cout<<"HEY BUDDY!!";
gotoxy(28,15);
cout<<"What is your good NAME:";
gets(name);

do
{
n=0;
clrscr();
gotoxy(30,12);
cout<<"ENTER PASSWORD(11-digit):";
gotoxy(30,13);

for(int i=30;i<41;i++)
{
yu[n]=getche();
gotoxy(i,13);
cout<<"*";
n++;
}

yu[n]='\0';
flag=strcmp(yu,qw);
if(flag!=0)
 {
aaa++;
if(aaa==3)
exit(0);
clrscr();

for(int qwe=4;qwe>0;qwe--)
{
gotoxy(30,11);
cout<<"WRONG PASSWORD!!";
gotoxy(30,12);
cout<<"Enter again in:";
gotoxy(36,13);
cout<<qwe;
gotoxy(36,13);
delay(800);
clrscr();
}
}
}while(flag!=0);

clrscr();
gotoxy(30,1);
cout<<"HELLO "<<name<<"!!";
gotoxy(17,3);
cout<<"I am here to help you in solving MATRIX problems";

choice:
cout<<"\n\nChoose your option:\n";
cout<<"1.Addition of two matrix\n2.Substraction of two matrix\n";
cout<<"3.Multiplication of two matrix\n4.Determinant of matrix\n";
cout<<"5.Adjoint of matrix\n6.Inverse of matrix\n7.Exit\n";
cout<<"\nEnter your CHOICE:\n";
cin>>ch;

switch(ch)
{
case 1: o=add();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 2: o=sub();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 3: o=mul();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 4: o=det();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 5: o=adj();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 6: o=inv();
	if(o==1)
	{
	clrscr();
	goto choice;
	}
	else
	break;
case 7:exit(0);
}
 clrscr();
	for(int aa=0;aa<8;aa++)
	{
	delay(500);
	gotoxy(30,11);
	cout<<"Thank-you for using!!";
	gotoxy(32,13);
	cout<<"MADE BY AARYAN!!";
	gotoxy(39,12);
	delay(300);
	clrscr();
	gotoxy(39,12);  }
}

int add()
{

clrscr();
int a[3][3],b[3][3],m,n,p,q,gm,flag=0;
char ch;
choice:
cout<<"\nEnter no. of rows of matrix A(max. 3):";
cin>>m;
cout<<"\nEnter no. of columns of matrix A(max.3):";
cin>>n;
cout<<"\nEnter no. of rows of matrix B(max.3):";
cin>>p;
cout<<"\nEnter no. of columns of matrix B(max.3):";
cin>>q;
clrscr();
if((m==p)&&(n==q))
{
cout<<"\nEnter elements of first matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nEnter elements of second matrix:\n";
for(i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(int j=0;j<n;j++)
a[i][j]=a[i][j]+b[i][j];
}
clrscr();
cout<<"\n\nResult:";
for(i=0;i<m;i++)
{
cout<<"\n";
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
}
}

else
{
clrscr();
cout<<"\nORDER of both matrices must be same.\nEnter again:";
goto choice;
}

cout<<"\nYou want more:";
cin>>ch;
if(ch=='y')
{
flag=1;
return flag;
}
else
{
flag=0;
return flag;
}
}

int sub()
{

clrscr();
int a[3][3],b[3][3],m,n,p,q,gm,flag=0;
char ch;
choice:
cout<<"\nEnter no. of rows of matrix A(max. 3):";
cin>>m;
cout<<"\nEnter no. of columns of matrix A(max.3):";
cin>>n;
cout<<"\nEnter no. of rows of matrix B(max.3):";
cin>>p;
cout<<"\nEnter no. of columns of matrix B(max.3):";
cin>>q;
clrscr();
if((m==p)&&(n==q))
{
cout<<"\nEnter elements of first matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nEnter elements of second matrix:\n";
for(i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(int j=0;j<n;j++)
a[i][j]=a[i][j]-b[i][j];
}
clrscr();

cout<<"\nResult:";
for(i=0;i<m;i++)
{
cout<<"\n";
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
}
}

else
{
clrscr();
cout<<"\nORDER of both matrices must be same.\nEnter again:";
goto choice;
}
cout<<"\nYou want more:";
cin>>ch;

if(ch=='y')
{
flag=1;
return flag;
}
else
{
flag=0;
return flag;
}
}

int mul()
{

clrscr();
int a[3][3],b[3][3],c[3][3],m,n,p,q,gm,flag=0;
char ch;
choice:
cout<<"\nEnter no. of rows of matrix A:";
cin>>m;
cout<<"\nEnter no. of columns of matrix A:";
cin>>n;
cout<<"\nEnter no. of rows of matrix B:";
cin>>p;
cout<<"\nEnter no. of columns of matrix B:";cin>>q;
clrscr();
if(n==p)
{
cout<<"\nEnter elements of first matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nEnter elements of second matrix:\n";
for(i=0;i<p;i++)
{
for(int j=0;j<q;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(int j=0;j<q;j++)
{
c[i][j]=0;
for(int k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}

else
{
clrscr();
cout<<"\nWRONG CHOICE!!\n\nEnter AGAIN:";
goto choice;
}
clrscr();

cout<<"\nResult:";
for(int i=0;i<m;i++)
{
cout<<"\n";
for(int j=0;j<q;j++)
cout<<c[i][j]<<" ";
}
cout<<"\nYou want more:";
cin>>ch;
if(ch=='y')
{
flag=1;
return flag;
}

else
{
flag=0;
return flag;
}
}

int det()
{

clrscr();
int a[3][3],m,gm,x,y,k,z,flag;
char ch;
cout<<"\nEnter no. of rows/no. of columns (max. 3):";
cin>>m;
cout<<"\nEnter elements of matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
cin>>a[i][j];
}
if(m==1)
{
clrscr();

cout<<"\nResult:";
cout<<"\nDETERMINAMT:"<<a[0][0];
}
else
if(m==2)
{
x=a[1][1]*a[0][0];
y=a[1][0]*a[0][1];
z=x-y;
clrscr();

cout<<"\nResult:";
cout<<"\nDETERMINANT:"<<z;
}

else
if(m==3)
{
x=(a[2][2]*a[1][1])-(a[2][1]*a[1][2]);
y=(a[2][2]*a[1][0])-(a[2][0]*a[1][2]);
k=(a[2][1]*a[1][0])-(a[2][0]*a[1][1]);
x=a[0][0]*x;
y=(-1)*(a[0][1])*y;
k=a[0][2]*k;
z=x+y+k;
clrscr();

cout<<"\nResult:\nDETERMINANT:"<<z;
}
cout<<"\nYou want more:";
cin>>ch;
if(ch=='y')
{
flag=1;
return flag;
}

else
{
flag=0;
return flag;
}
}

int adj()
{

clrscr();
int a[3][3],b[3][3],m,gm,x,y,k,z,flag;
char ch;
cout<<"\nEnter no. of rows/no. of columns (max. 3):";
cin>>m;
cout<<"\nEnter elements of matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
cin>>a[i][j];
}
if(m==2)
{
clrscr();

b[0][0]=a[1][1];
b[1][1]=a[0][0];
b[0][1]=(-1)*a[1][0];
b[1][0]=(-1)*a[0][1];

cout<<"\nResult:\nAdjoint:";
for(i=0;i<m;i++)
{
cout<<"\n";
for(int j=0;j<m;j++)
{
cout<<b[i][j]<<" ";
}
}
}

else
if(m==3)
{
clrscr();

b[0][0]=(a[2][2]*a[1][1])-(a[1][2]*a[2][1]);
b[0][1]=(a[1][0]*a[2][2])-(a[1][2]*a[2][0]);
b[0][2]=(a[2][1]*a[1][0])-(a[2][0]*a[1][1]);
b[1][0]=(a[2][2]*a[0][1])-(a[2][1]*a[0][2]);
b[1][1]=(a[2][2]*a[0][0])-(a[2][0]*a[0][2]);
b[2][2]=(a[1][1]*a[0][0])-(a[1][0]*a[0][1]);
b[1][2]=(a[2][1]*a[0][0])-(a[2][0]*a[0][1]);
b[2][0]=(a[1][2]*a[0][1])-(a[1][1]*a[0][2]);
b[2][1]=(a[1][2]*a[0][0])-(a[1][0]*a[0][2]);

for(int j=0;j<3;j++)
{
cout<<"\n";
for(int i=0;i<3;i++)
{
if((i+j)%2==0)
cout<<b[i][j]<<" ";
else cout<<(-1)*b[i][j]<<" ";
}
}
}

cout<<"\nYou want more:";
cin>>ch;
if(ch=='y')
{
flag=1;
return flag;
}
else
{
flag=0;
return flag;
}
}

int inv()
{
clrscr();
int a[3][3],b[3][3],m,gm,x,y,k,z,flag=0;
char ch;
cout<<"\nEnter no. of rows/no. of columns (max. 3):";
cin>>m;
cout<<"\nEnter elements of matrix:\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
cin>>a[i][j];
}
if(m==2)
{
x=a[1][1]*a[0][0];
y=a[1][0]*a[0][1];
z=x-y;
}
else

if(m==3)
{
x=(a[2][2]*a[1][1])-(a[2][1]*a[1][2]);
y=(a[2][2]*a[1][0])-(a[2][0]*a[1][2]);
k=(a[2][1]*a[1][0])-(a[2][0]*a[1][1]);
x=a[0][0]*x;
y=(-1)*(a[0][1])*y;
k=a[0][2]*k;
z=x+y+k;
}

if(z==0)
{
clrscr();

cout<<"\nResult:";
cout<<"\nInverse not possible!!";
}
else
{

if(m==2)
{
b[0][0]=a[1][1];
b[1][1]=a[0][0];
b[0][1]=(-1)*a[1][0];
b[1][0]=(-1)*a[0][1];
clrscr();

for(int i=0;i<m;i++)
{
cout<<"\n";
for(int j=0;j<m;j++)
cout<<b[i][j]<<"/"<<z<<" ";
}
}

else
{
b[0][0]=(a[2][2]*a[1][1])-(a[1][2]*a[2][1]);
b[0][1]=(a[1][0]*a[2][2])-(a[1][2]*a[2][0]);
b[0][2]=(a[2][1]*a[1][0])-(a[2][0]*a[1][1]);
b[1][0]=(a[2][2]*a[0][1])-(a[2][1]*a[0][2]);
b[1][1]=(a[2][2]*a[0][0])-(a[2][0]*a[0][2]);
b[2][2]=(a[1][1]*a[0][0])-(a[1][0]*a[0][1]);
b[1][2]=(a[2][1]*a[0][0])-(a[2][0]*a[0][1]);
b[2][0]=(a[1][2]*a[0][1])-(a[1][1]*a[0][2]);
b[2][1]=(a[1][2]*a[0][0])-(a[1][0]*a[0][2]);

clrscr();

for(int j=0;j<m;j++)
{
cout<<"\n";

for(int i=0;i<m;i++)
{
if((i+j)%2==0)
cout<<b[i][j]<<"/"<<z<<" ";
else cout<<((-1)*b[i][j])<<"/"<<z<<" ";
}
}
}
}

cout<<"\nYou want more:";
cin>>ch;
if(ch=='y')
{
flag=1;
return flag;
}
else
{
flag=0;
return flag;
}
}


