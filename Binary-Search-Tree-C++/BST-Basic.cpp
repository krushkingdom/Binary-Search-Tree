#include <bits/stdc++.h>

template<typename Type>
class Node
{
    public:
        Node(): data(NULL), less(NULL), greater(NULL){};
        Node(Type input): data(input), less(NULL), greater(NULL){};
        ~Node();

        bool operator==(const Node& rhs)
        {
            if(this->data == rhs.data)
            {
                return true;
            }
                return false;
        }

        Node& operator=(const Node& other)
        {
            if(this == &other)
            {
                return *this;
            }

            this->data = other.data;
            return *this;
        }
/*
        bool gets_greater()
        {
            Node* temp = this;
            if(temp->greater == NULL)
            {
                return false;
            }

            while(true)
            {
                temp = 
            }
        }
*/

    Node* get_greater()
    {
        return this->greater;
    }
        
    private:
        Type data;
        Node* less;
        Node* greater;
};

template<class Node>
class BST
{
    public:
        BST(): root(NULL), height(0){}
        BST(Node& inroot): root(inroot), height(1){
            tree.push_back(root);
        }
        ~BST();

        void insert_after_root(Node& child)
        {
            if(this->root == NULL)
            {
                std::cout << "Error: Cannot Insert children to NULL root" << std::endl;
                return;
            }
            if(child.data >= this->root.data)
            {
                this->root->greater = child;
            }
            else
            {
                this->root->less = child;
            }

            tree.push_back(child);

            if((this->root->greater) != NULL && (this->root->less != NULL))
            {
                height++;
            }
        }

        bool insert_while_greater_exists(Node& child)
        {
            Node* temp = this->root;
            while(temp.get_greater() != NULL)
            {
                temp = temp.get_greater();
            }

        }
        void insert(Node& child)
        {
            if(child.data >= this->root.data)
            {
                this->root->greater = child;
            }
        }
    private:
        Node* root = new Node();
        std::vector<Node*> level;
        std::vector<std::vector<Node*>> tree;
        int height;
};


int main(int argc, char * argv[])
{
    //At their core, Binary Search Tress are really just Decision Trees
    //Linked Lists could be considered like "'Unary' Search Trees"
    Node root(5);
    

    return 0;
}