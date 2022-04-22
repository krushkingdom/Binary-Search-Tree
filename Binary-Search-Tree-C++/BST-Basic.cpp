#include <bits/stdc++.h>

template <class Type>
class Node
{
    public:
        Node(): data(NULL), lesser(NULL), greater(NULL){};
        Node(Type& input): data(input), lesser(NULL), greater(NULL){};
        
        ~Node(){
            delete lesser;
            delete greater;
            delete this;
        }

        bool operator==(Node& rhs)
        {
            if(this->data == rhs.data)
            {
                return true;
            }
                return false;
        }

        Node& operator=(Node& other)
        {
            if(this == other)
            {
                return *this;
            }

            this->data = other.data;
            return *this;
        } 
/* //Testing //Testing Github Changes////
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
    Type get_data()
    {
        return this->data;
    }

    void set_data(Type& input_data)
    {
        this->data = input_data;
    }

    Node<Type>* get_lesser()
    {
        return this->lesser;
    }

    Node<Type>* get_greater()
    {
        return this->greater;
    }

    void set_lesser(Node<Type>& lesser_input)
    {
        this->lesser = lesser_input;
    }

    void set_greater(Node<Type>& greater_input)
    {
        this->greater = greater_input;
    }
        
    private:
        Type data;
        Node<Type>* lesser = new Node<Type>();
        Node<Type>* greater = new Node<Type>();
};

//template<class Node>
template<class Node_Type>
class BST
{
    public:
        BST(): root(NULL), height(0){}
        BST(Node<Node_Type>& inroot): height(1){
            root->
            tree[0].push_back(root);
        }
        /*
        BST(Node<Node_Type> inroot): root(inroot), height(1){
            tree[0].push_back(root);
        }
         BST(Node<Node_Type>* inroot): root(inroot), height(1){
            tree[0].push_back(root);
        }*/
        
        ~BST(){
            delete root;
            delete this;
        }
/*
        void insert_after_root(Node& child)
        {
            if(this->root == NULL)
            {
                std::cout << "Error: Cannot Insert children to NULL root" << std::endl;
                return;
            }
            if(child.data >= this->root.data)
            {
                this->root.set_greater(child);
            }
            else
            {
                this->root.set_lesser(child);
            }

            tree.push_back(child);

            if((this->root.get_greater()) != NULL && (this->root.get_lesser() != NULL))
            {
                height++;
            }
        } */

        void insert_while_not_null(Node<Node_Type>& child)
        {
            Node<Node_Type>* temp = this->root;
            while(temp->get_greater() != NULL || temp->get_lesser() != NULL)
            {
                if(child.get_data() >= temp->get_data())
                {
                     temp = temp->get_greater();
                }
                else
                {
                    temp = temp->get_lesser();
                }
               
            }

             if(child.get_data() >= temp->get_data())
                {
                     temp->set_greater(child);
                }
                else
                {
                    temp->set_lesser(child);
                }

        }
        /*
        void insert(Node& child)
        {
            if(child.data >= this->root.data)
            {
                this->root->greater = child;
            }
        }*/
    private:
        Node<Node_Type>* root = new Node<Node_Type>();
        std::vector<Node<Node_Type>*> level;
        std::vector<std::vector<Node<Node_Type>*>> tree;
        int height;
};


int main(int argc, char * argv[])
{
    //At their core, Binary Search Tress are really just Decision Trees
    //Linked Lists could be considered like "'Unary' Search Trees"
    int num = 6;
    Node<int> * root_node = new Node<int>(num);

    std::cout << root_node->get_data() << std::endl;

    BST<Node<int>> * bst_tree = new BST<Node<int>>();


    //delete root_node;
    return 0;
}