#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
#include <stdlib.h>//Funcion atoi

using namespace std;

int main(){
	
	int t=0;//# de casos de prueba
	int npayasos=0, velmin=0;
	int i=0,j=0;
	char charaux;
	
	string cad_entrada,s_aux = "",s_cad="";
	
	vector<int>vec;
	
	cin>>t;
	charaux = getchar();//Lee el espacio extra
	
	for(i=0;i<t;i++){
	
		getline(cin,cad_entrada);
		
		for(j=0;j<cad_entrada.length();j++){
			
			if(cad_entrada[j]!=' '){
				s_cad = cad_entrada[j];
				s_aux = s_aux+s_cad;
				
				if(cad_entrada.length()==1 || j == (cad_entrada.length()-1)){
					vec.push_back(stoi(s_aux));
					s_aux="";  
				}
			}else{
				vec.push_back(stoi(s_aux));
				s_aux="";
			}
		}
		
		vec[0] = -1;//Se elimina el número de payasos porque no es necesario
		
		sort(vec.begin(),vec.end());//Ordena los elementos del vector de mayor a menor
	
		velmin = vec.back();
		cout<<"Case "<<i+1<<": "<<velmin<<"\n";
		
		vec.clear();
	}
}