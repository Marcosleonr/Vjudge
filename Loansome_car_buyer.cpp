#include<iostream>
using namespace std;
int main(){
	
	int index,time;
	double dpay,debt,records,carcost,aux1,aux2,payment;	
	
	while(cin>>time>>dpay>>debt>>records){
		if(time<0)return 0;
		
		double vec[time+1]={0};
		
		for(int i=0;i<records;i++){
			cin>>index>>aux1;
			vec[index]=aux1;
			
		}
		carcost = dpay+debt;
		payment = debt/time;
		for(int i=0;i<time+1;i++){
			if(vec[i]!=0) aux2=vec[i];
			else vec[i]=aux2;
			
			if(i!=0){
				debt-=payment;
			}
			carcost=carcost-(carcost*vec[i]);
			if(debt<carcost){
				if(i==1)cout<<"1 month"<<endl;
				else cout<<i<<" months"<<endl;
				break;
			}
		}
	}
	
	return 0;
}