int CompareLists(Node* headA, Node* headB)
{
	Node *auxA, *auxB;
	
	auxA = headA;
	auxB = headB;
	
	if(auxA==NULL && auxB==NULL)
		return 1;
	else{
		while(auxA!=NULL && auxB!=NULL){
			if(auxA->data==auxB->data){
				auxA=auxA->next;
				auxB=auxB->next;
			}else
			return 0;
		}	
		if(auxA==NULL && auxB!=NULL || auxB==NULL && auxA!=NULL)
		return 0;
		else
		return 1;
	}
	
}