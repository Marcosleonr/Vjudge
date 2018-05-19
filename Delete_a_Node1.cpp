Node* Delete(Node* head, int position){
	
	int i = 0, cont_position = 0;
	Node *aux1, *ans, *previous;
	
	
	if(position==0){
		if(head->next==NULL){
			ans = NULL;
		}else{
			ans = head->next;
		}
		free(head);
	}else{	
		ans = head;
		
		while(cont_position<=position){
			
			if(cont_position==0){
				aux1 = head;
				previous = head;
				
			}else{
				aux1 = aux1->next;
				if(cont_position==position){
					
					if(aux1->next==NULL){
						previous->next = NULL;
					}else{
						previous->next = aux1->next;
					}
					free(aux1);
					break;
				}else if(cont_position==(position-1)){
					previous = aux1;
				}
			}

			cont_position++;
		}		
	}
	return ans;

}