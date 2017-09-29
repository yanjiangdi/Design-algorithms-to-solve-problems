 
 struct  ListNode {
	int val;
	ListNode *next; 

} ;
 bool chkPalindrome(ListNode* A) {
        // write code here
        int data[10000];
        int i=0;
        ListNode* p=A;
        while(p)
        {
            data[i++]=p->val;
            p=p->next;
        }
 
        int k=0;
        for (int j=i-1;j>=i/2;j--)
        {
            if (data[j]==data[k++])
                continue;
            else
                return false;
        }
        return true;
 
    
    }
    
    
