#include<iostream>
#include<list>
using namespace std;
int main(){

	char line[100005];
	list<string>ls;

	while (scanf("%s",line)!=EOF){
		
		char prev='[';
		string aux="",strf="";
		string str(line);

		for(int i=0;i<str.size();i++){
			if(str[i]=='['){
				if(prev=='['){
					ls.push_front(aux);
				}else{
					ls.push_back(aux);
				}
				prev=str[i];
				aux="";
			}else if(str[i]==']'){
				if(prev=='['){
					ls.push_front(aux);
				}else{
					ls.push_back(aux);
				}
				prev=str[i];
				aux="";

			}else{
				aux+=str[i];
			}
		}
		
		if(prev=='['){
			ls.push_front(aux);
		}else{
			ls.push_back(aux);
		}

		while(!ls.empty()){
			strf+=ls.front();
			ls.pop_front();
		}
		cout<<strf<<endl;
	}
	return 0;
}