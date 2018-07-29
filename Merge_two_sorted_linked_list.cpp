SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *headf, *aux;
    
    if((head1==NULL) && (head2==NULL))return head1;
    else if(head1==NULL) return head2;    
    else if(head2==NULL) return head1;

  if((head1->data)<=(head2->data)){
    headf=aux=head1;
      head1=head1->next;
  }else{
    headf=aux=head2;
      head2=head2->next;
  }
    
  while((head1!=NULL)&&(head2!=NULL)){
        if((head1->data)<=(head2->data)){
            aux->next=head1;
            head1=head1->next;
        }else{
            aux->next=head2;
            head2=head2->next;
        }
        aux=aux->next;
    }
  
  if(head1==NULL)aux->next=head2;
    else aux->next=head1;
    
    return headf;
}