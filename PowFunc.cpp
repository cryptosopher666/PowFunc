#include<iostream>
#include<conio.h>
using namespace std;
double pow(double,double);

int main(){
	double a , b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<a<<"^"<<b<<" = "<<pow(a,b);
	getch();
	return 0;
}
double pow(double a, double b){
	if(b==1)
	return a;
	else if(b==0)
	return 1;
	else if(b==-1)
	return 1/a;
	else if(b<-1)
	return pow(a,b+1)*(1/a);
	else
	return pow(a,b-1)*a;
}
