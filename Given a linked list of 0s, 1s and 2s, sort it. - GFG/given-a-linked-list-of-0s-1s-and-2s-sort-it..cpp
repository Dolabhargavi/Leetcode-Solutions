//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *curr=head,*curr1=head;
        Node *temp=head;
        Node *prev=head;
        int c=1;
        if(head==NULL || head->next==NULL)
        return head;
        while(curr1->next!=NULL)
        {
            curr1=curr1->next;
            c++;
        }
    //   c=2;
        while(c)
        {
            
            if(curr->data==0)
            {
                if(curr==head)
                curr=curr->next;
                else
                {   if(curr->next==NULL)
                    {
                        temp=curr;
                        prev->next=NULL;
                        temp->next=head;
                        head=temp;
                    }
                    else
                    {
                        temp=curr;
                        prev->next=curr->next;
                        curr=curr->next;
                        temp->next=head;
                        head=temp;
                    }
                }
            }
            else if(curr->data==2)
            {   
                if(curr==head)
                {
                    temp=curr;
                    curr=curr->next;
                    prev=prev->next;
                    head=head->next;
                    curr1->next=temp;
                    temp->next=NULL;
                    curr1=temp;
                }
                else if(curr->next==NULL)
                curr=curr->next;
                else
                {
                    temp=curr;
                    prev->next=curr->next;
                    curr=curr->next;
                    curr1->next=temp;
                    temp->next=NULL;
                    curr1=temp;
                }

            }
            else
            {
                if(curr==head)
                {
                    curr=curr->next;
                }
                else
                {
                   prev=prev->next;
                    curr=curr->next;
                }
            }
            c--;   
        }
    //   cout<<prev->data<<" "<<curr->data<<" "<<curr1->data<<"\n";
       return head; 
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends