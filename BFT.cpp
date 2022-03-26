#include <iostream>
#include <queue>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class MyTree{
    Node* head;
    public:
        MyTree():head(nullptr){};
        void CreateTree(){
            Node* a = new Node(1);
            Node* b = new Node(2);
            Node* c = new Node(3);
            Node* d = new Node(4);
            Node* e = new Node(5);
            Node* f = new Node(6);
            Node* g = new Node(7);
            Node* h = new Node(8);
            a->left = b;
            a->right = c;
            b->left = d;
            c->left = e;
            c->right = f;
            d->right = g;
            e->left = h;
            head = a;
        }
        void bft(){
            queue<Node*> myque;
            Node* temp = head;
            if(temp)
                myque.push(temp);
            while(!myque.empty()){
                Node* temp1 = myque.front();
                cout << temp1->data << " ";
                if(temp1->left)
                    myque.push(temp1->left);
                if(temp1->right)
                    myque.push(temp1->right);
                myque.pop();
            }
            temp = nullptr;
            cout << endl;
        }
        void inorderTraversal();
        void postorderTraversal();
        void preorderTraversal();
        ~MyTree(){
            
        }
};
int main()
{
    MyTree t;
    t.CreateTree();
    t.bft();
    t.bft();
    t.bft();
}
