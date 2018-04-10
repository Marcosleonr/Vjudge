#include<iostream>
using namespace std;
int main(){
	int t = 0;//Casos de prueba
	int i=0,a = 0, b = 0, c = 0;
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>a>>b>>c;
		cout<<"Case "<<i+1<<": ";
		if(a>b && b>c){
			cout<<b<<"\n";
		}else if(a>c && c>b){
			cout<<c<<"\n";
		}else if(b>a && a>c){
			cout<<a<<"\n";
		}else if(b>c && c>a){
			cout<<c<<"\n";
		}else if(c>b && b>a){
			cout<<b<<"\n";
		}else if(c>a && a>b){
			cout<<a<<"\n";
		}
	}
}