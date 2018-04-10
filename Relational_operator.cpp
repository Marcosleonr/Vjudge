#include<iostream>
using namespace std;
int main(){
	int t=0;//Numero de casos a revisar
	int a = 0, b = 0; //Casos a revisar
	int i = 0;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>a>>b;
		if(a>b){
			cout<<">"<<"\n";
		}else if(a<b){
			cout<<"<"<<"\n";
		}else{
			cout<<"="<<"\n";
		}
	}
	
}