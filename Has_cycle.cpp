#include<vector>
bool has_cycle(Node* head) {
    
	int i = 0;
	
	Node *aux;
	vector<Node*>vec;

	aux=head;
	
	while(aux!=NULL){
				
		for(i=0;i<vec.size();i++){
			if(vec[i]==aux)
				return true;
		}	
		vec.push_back(aux);	
		aux=aux->next;
	}
	return false;
}