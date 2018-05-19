Node* Delete(Node* head, int position){
	
	int i;
	Node *ans = NULL,*aux, *previous;
	
	if(position==0){
		if(head->next!=NULL){
			ans = head->next;
		}
	}else{	
		ans=head;
		aux=head;
		for(i=0;i<=position;i++){
            if(i==position-1)
                previous=aux;
            else
                aux =aux->next;
        }
        previous->next=aux->next;		
	}
	return ans;

}