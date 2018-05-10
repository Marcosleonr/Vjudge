#include<vector>
Node* Reverse(Node *head)
{
	Node *aux,*aux1;
	vector<Node*>vec;
	int i=0;
  
	aux=head;
	
  	vec.push_back(NULL);
	
	while(aux!=NULL){
		vec.push_back(aux);
		aux=aux->next;
	}
	
	for(i=vec.size()-1;i>=0;i--){
		if(i==vec.size()-1){
			head=aux1=vec[i];
		}else{
			aux1->next=vec[i];
			if(i!=0)
			aux1=vec[i];
		}
	}
	return head;
  
}