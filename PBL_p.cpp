#include<iostream>
using namespace std;
struct node{
    int data;
    string info;
    string Faculty;
    node *left;
    node *right;
};

class BST{
    node *root,*parent;
    public:
    BST()
    {
        root=NULL;
         parent=NULL;
    }
    void insert(int val,string s,string s2)
    {
        node *n=new node;
        n->data=val;
        n->info=s;
        n->Faculty=s2;
        n->left=NULL;
        n->right=NULL;
        if(root==NULL)
        {
            root=n;
        }
        else
        {
            node *temp=root;
            node *p=NULL;
            while(temp!=NULL)
            {
            if(val<temp->data)
            {
                 p=temp;
                    temp=temp->left;
                
                
            }
            else if(val>temp->data)
            {  p=temp;
                    temp=temp->right;
                
               
            }
            else
            {
                cout<<"invalid input"<<endl;
                return;
            }
            }
            if(p->data<val)
            {
                p->right=n;
            }
            else
            {
                p->left=n;
            }
        }
    }
    node *get()
    {
        return root;
    }
 

    void find(int key)
    {
        node *temp=root;
       
        search(&temp,key,&parent);
        if(temp==NULL)
        {
            cout<<"not present"<<endl;

        }
        else{
            if(temp->Faculty==" ")
            {
            cout<<temp->data<<endl<<temp->info<<endl;
            }
            else
        {
             cout<<temp->data<<endl<<temp->info<<endl<<temp->Faculty<<endl;
        }
        }
    }
   void search(node **temp,int key,node **parent)
   {
    if(temp==NULL)
    {
        cout<<"tree not created"<<endl;
    }
    else{
       while(temp!=NULL)
     
       {
        if((*temp)->data==key)
        {
            break;
        }
        *parent=*temp;
        if((*temp)->data>key)
        {
            (*temp)= (*temp)->left;
        }
        else
        (*temp)=(*temp)->right;
       }
    }
    return;
   }

 
};
class search1:public BST{
    public:
    

};
int main()
{
    BST b;
    int n;
    b.insert(6504,"Language Laboratry 1","\nMrs Prinyanka Garg \n Mr Sandip Patil");
    b.insert(6505,"Language Laboratory 2"," ");
    b.insert(6506,"BEEE lab","\n Mrs Suwarna Shete \n Mrs Pranjal Jog \n Mrs Ashwini Desphande");
    b.insert(6507,"Electrical Machine Lab"," ");
    b.insert(6508,"Basic Electronic Lab"," ");
    b.insert(6509,"Classroom","");
    b.insert(6510,"Classroom","");
    b.insert(6511,"Faculty Cabin","Mrs Priya Joshi  ");
    b.insert(6512,"Gents Toilet","");
    b.insert(6513,"Ladies Toilet"," ");
    b.insert(6514,"Faculty Cabin"," ");
    b.insert(6515,"Classroom"," ");
    b.insert(6516,"HOD office"," ");
    b.insert(6517,"Artificial Inteligence Laboratory-1"," ");
    b.insert(6518,"Algorithm Laboratory"," ");
    b.insert(6519,"Programming Lab"," ");
    b.insert(6501,"Dean Quality Assurance office","");
    b.insert(6502,"Classroom"," ");
    b.insert(6503,"Classroom"," ");
 
  b.find(6505);
  //b.find(6118);
 
return 0;
}