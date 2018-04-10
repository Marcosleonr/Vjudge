#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;
int main(){
	
	
	vector<int>vec;
	int t = 0, i = 0, a = 0,b = 0, c = 0;
	
	cin>>t;

	for(i=0;i<t;i++){
	
		cin>>a>>b>>c;
		vec.push_back(a);
		vec.push_back(b);
		vec.push_back(c);
		
		sort(vec.begin(),vec.end());//Ordena el vector de mayor a menor
		cout<<"Case "<<i+1<<": "<<vec[1]<<"\n";
		vec.clear();//Vacia el vector
	}
	
}