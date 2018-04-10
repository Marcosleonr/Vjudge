#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
int main(){
	
	vector<int>vec(3);//Se declara el tamañao para utilizar el vector como un arreglo normal
	int t = 0, i = 0, aux = 0;
	
	cin>>t;

	for(i=0;i<t;i++){
		cin>>vec[0]>>vec[1]>>vec[2];
		sort(vec.begin(),vec.end());
		cout<<"Case "<<i+1<<": "<<vec[1]<<"\n";	
	}
}