//LINKED LIST 
/*Structure of the node of the linked list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
     int sum = 0;
     Node *temp = head;
     for (int i = 0;i<n;i++){
         sum += temp->data;
         temp = temp->next;          
     }
      if (temp == NULL) return sum;
      return sumOfLastN_Nodes(head->next,n);

}
