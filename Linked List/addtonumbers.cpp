

ListNode *temp1=l1,*temp2=l2;
        int cnt1=0,cnt2=0;
        while(temp1!=NULL)
        {
            cnt1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            cnt2++;
            temp2=temp2->next;
        }
        if(cnt1<cnt2)
        {
            swap(l1,l2);
        }
        ListNode* prev;
        temp1=l1,temp2=l2;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL)
        {
            int a=temp1->val,b=temp2->val;
            int sum=a+b+carry;
            int x=sum%10;
            carry=sum/10;
            temp1->val=x;
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL)
        {
            int sum=carry+temp1->val;
            int x=sum%10;
            carry=sum/10;
            temp1->val=x;
            prev=temp1;
            temp1=temp1->next;
        }
        if(carry==1)
        {
            prev->next=new ListNode(1);
        }
        return l1;
    }
};