#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;
int main ()
{
string l;
double x,y,z;
char m,n='a';

getline( cin, l);
istringstream stream(l);

stream>>x;
while ( stream>>m)
{
stream>>y;
if( m=='+')
{
	x=x+y;
	n='+';      
	z=y;        
}
if (m=='-')
{
	x=x-y;
	n='-';
	z=y;
}
if ((m=='*')&&(n=='a')) 
{
	x=x*y;	
}
if ((m=='/')&&(n=='a')) 
{
	if (y==0 && x==0) {cout<<"nan"; return -1;}
       else if (x!=0 && y==0) {cout<<"inf"; return -1;}
       else
       x=x/y;	
}
if ((m=='*')&&(n=='+'))
{
	x=x-z;
	z=z*y;
	x=x+z;
	n='+';
}
if ((m=='*')&&(n=='-'))
{
	x=x+z;
	z=z*y;
	x=x-z;
	n='-';
}
if ((m=='/')&&(n=='+'))
{
	x=x-z;
		
		if (z==0 && y==0) {cout<<"nan"; return -1;}
    	else if (z!=0 && y==0) {cout<<"inf"; return -1;}
    	else
    	z=z/y;
    	x=x+z;
    	n='+';
}
if ((m=='/')&&(n=='-'))
{
	x=x+z;
		
		if (z==0 && y==0) {cout<<"nan"; return -1;}
    	else if (z!=0 && y==0) {cout<<"inf"; return -1;}
    	else
    	z=z/y;
    	x=x-z;
    	n='-';
}
}
cout<<x;
}
