1. //write a c++ program to overload the * operator so that it can multiply two complex
numbers.
#include<iostream>
using namespace std;
class complexno
{ 
 private:
 int r,i;
 
public:
void get_elements();
 complexno operator *(complexno c);
 void display();
};
void complexno::get_elements()
{
cout<<"\n Enter real part:";
 cin>>r;
 cout<<"\n Enter imaginary part:";
 cin>>i;
}
complexno complexno::operator *(complexno s) //(a+ib)*(c+id)=ac+i(ad)+i(bc)-bd
{
int a,b,c,d;
a=r;
b=i;
c=s.r;
d=s.i;
int v1,v2,v3,v4;
v1=a*c;
v2=-1*b*d;
v3=a*d;
v4=b*c;
s.r=v1+v2;
s.i=v3+v4;
return s;
}
void complexno::display()
{
 if (i>0)
 {
 cout<<"\n"<<r<<"+"<<i<<"i";
 }
else if(i<0)
{
cout<<"\n"<<r<<""<<i<<"i";
}
}
int main()
{
complexno o1,o2,o3;;
o1.get_elements();
o2.get_elements();
o3=o1*o2;
 cout<<"\n First number:";
o1.display();
cout<<"\n Second number:";
o2.display();
cout<<"\n Result:";
o3.display();
}

2.
#include<iostream>
using namespace std;
class matrices
{
 public:
 //Declaring attributes
int a[2][2];
int b[2][2];
int c[2][2];
 //Declaring Methods
void get_elements() //To take input from user
{
cout<<"Enter the elements\n";
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>a[i][j];
}
}
}
matrices operator +(matrices m2) //To overload '*'
{
matrices m3;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
m3.a[i][j]=a[i][j]+m2.a[i][j];
}
return(m3);
}
void display() //To print the result
{
for(int i=0;i<2;i++)
{
 for(int j=0;j<2;j++)
{
cout<<a[i][j]<<" ";
 }
cout<<endl;
}
}
};
 int main()
 {
 matrices ob1,ob2; //Creating object
 ob1.get_elements(); //Calling method
 ob2.get_elements(); //Calling method
 cout<<"\n Matrix 1:\n";
 ob1.display();
 cout<<"\n Matrix 2:\n";
 ob2.display();
 ob1=ob1+ob2;
 cout<<"\n Result : \n";
 ob1.display();
 }
