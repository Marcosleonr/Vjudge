#include<iostream>
using namespace std;
int main(){
	int  k = 0;//Numero de casos de prueba
	int n = 0 , m = 0 ,x = 0, y = 0, i = 0, j = 0;
	bool r = true;
	
	while(r){
		cin>>k;//Numero de consultas 
		if(k==0){
			break;
		}else{
			cin>>m>>n;//Representan el origen
			//Va a leer las coordenadas de la casa
			for(i=0;i<k;i++){
				cin>>x>>y;// Representan las coordenadas de la casa
				if(x>m && y>n){
					cout<<"NE"<<"\n";
				}else if(x>m && y<n){
					cout<<"SE"<<"\n";
				}else if(x<m && y>n){
					cout<<"NO"<<"\n";
				}else if(x<m && y<n){
					cout<<"SO"<<"\n";
				}else if(x==m||y==n){
					cout<<"divisa"<<"\n";
				}else if(x==m && y==n){
					cout<<"divisa"<<"\n";
				}
			}
			
		}
	}
}