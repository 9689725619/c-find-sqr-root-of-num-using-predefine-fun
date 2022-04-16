#include<iostream>
#include<math.h>
using namespace std;
int add(int,int);
int main(){
	int a,b,s;
	cout<<"enter value of a & b:";
	cin>>a>>b;
	s=add(a,b);
	cout<<"addition="<<s;
	return 0;
}
int add(int x, int y){
	int sum;
	sum=x+y;

return sum;
}
