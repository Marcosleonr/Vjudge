#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
#include<stdlib.h>

using namespace std;

int main(){
	
	int i = 0, j = 0, absoluto = 0, tam_cadena = 0;
	string cad_entrada;
	string s_cad="",s_aux="";
	
	bool ban = false;
	
	vector<int>vec_cad;
	
	getline(cin,cad_entrada);
	
	
	for(i=0;i<cad_entrada.length();i++){
		
		if(cad_entrada[i]!=' '){
			
			s_cad = cad_entrada[i];
			s_aux = s_aux+s_cad;

			if(cad_entrada.length()==1 || i == (cad_entrada.length()-1)){
				vec_cad.push_back(stoi(s_aux));
				s_aux="";	 
			}
		}else{
			vec_cad.push_back(stoi(s_aux));
			s_aux="";
		}
	}
	
	if(vec_cad.size()>2 || vec_cad.size()!=0){
		
		tam_cadena = vec_cad.size()-1;
		
		for(j=1;j<(vec_cad.size()-1);j++){
			absoluto = abs(vec_cad[j]-vec_cad[j+1]);
			tam_cadena--;
			
			if(tam_cadena != absoluto){
				ban = true;
				break;
			}
		}
		if(ban!=true){
			cout<<"Jolly";
		}else{
			cout<<"Not jolly";
		}
	}else{
		cout<<"Jolly";
	}
}
	
