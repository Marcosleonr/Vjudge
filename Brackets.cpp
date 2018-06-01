#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<char>s;
	
	int n,i,j,tam;
	string cad;
	char c;
	bool ban = false;
	
	cin>>n;
	c=getchar();
	for(i=0;i<n;i++)
	{
		getline(cin,cad);
		tam=cad.length();
		for(j=0;j<tam;j++)
		{
			if(cad[j]=='{'||cad[j]=='['||cad[j]=='('){
				s.push(cad[j]);
			}else{
				
				if(s.empty()){
					ban=true;
					break;
				}
				if(cad[j]==')'){
					if(s.top()!='('){
						ban=true;
						break;
					}
				}else if(cad[j]==']'){
					if(s.top()!='['){
						ban=true;
						break;
					}
				}else if(cad[j]=='}'){
					if(s.top()!='{'){
						ban=true;
						break;
					}
				}
				s.pop();
			}
		}
		if(ban||!s.empty()) 
			cout<<"NO\n";
		else
			cout<<"YES\n";
		ban=false;
		while(!s.empty())
			s.pop();
	}
}
