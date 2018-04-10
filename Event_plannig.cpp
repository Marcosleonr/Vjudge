#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
#include <stdlib.h>//Funcion atoi
using namespace std;
int main(){
	
	bool ban=false,ban1=false;
	
	int n=0,b=0,h=0,w=0;
	int i = 0, j=0, k=0, tam_vec=0;
	int cost_ind=0,cost_total = 0;
	
	char charaux;
	
	string cad_entrada;
	string s_cad="",s_aux="";
	
	vector<int>vec_camas;
	vector<int>vec_precios;
	
	while(cin>>n>>b>>h>>w){
		
		for(i=0;i<h;i++){
			
			cin>>cost_ind;
			
			charaux = getchar();
			
			getline(cin,cad_entrada);
		
			for(j=0;j<cad_entrada.length();j++){
			
				if(cad_entrada[j]!=' '){
					
					s_cad = cad_entrada[j];
					s_aux = s_aux+s_cad;
				
					if(cad_entrada.length()==1 || j == (cad_entrada.length()-1)){
						vec_camas.push_back(stoi(s_aux));
						s_aux="";	 
					}
				}else{
					
					vec_camas.push_back(stoi(s_aux));
					s_aux="";
				}
			}
			
			if(!vec_camas.empty()){
				for(k=0;k<vec_camas.size();k++){
					if(vec_camas.at(k)>=n){
						ban=true;
						break;
					}
				}
				cost_total = n*cost_ind;
				if(cost_total<=b && ban==true){
					vec_precios.push_back(cost_total);
				}
			}
			ban=false;
			ban1=false;
		}
		if(!vec_precios.empty()){
			sort(vec_precios.begin(),vec_precios.end());
			cout<<vec_precios.front()<<"\n";
		}else{
			cout<<"stay home\n";
		}
		
		vec_camas.clear();
		vec_precios.clear();
		
	}
}