#include <bits/stdc++.h>

template<typename Type>
class Node
{
    public:
        Node(): data(NULL), lesser(NULL), greater(NULL){};
        Node(Type input): data(input), lesser(NULL), greater(NULL){};
        ~Node();

        bool operator==(const Node& rhs)
        {
            if(this->data == rhs.data)
            {
                return true;
            }
                return false;
        }//

        Node& operator=(const Node& other)
        {
            if(this == &other)
            {
                return *this;
            }

            this->data = other.data;
            return *this;
        }
/* //Testing //Testing Github Changes//
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

    void set_data(Type input_data)
    {
        this->data = input_data;
    }

    Node* get_lesser()
    {
        return this->lesser;
    }

    Node* get_greater()
    {
        return this->greater;
    }

    void set_lesser(Node* lesser_input)
    {
        this->lesser = lesser_input;
    }

    void set_greater(Node* greater_input)
    {
        this->greater = greater_input;
    }
        
    private:
        Type data;
        Node* lesser;
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
        }

        bool insert_while_greater_exists(Node& child)
        {
            Node* temp = this->root;
            while(temp.get_greater() != NULL)
            {
                temp = temp.get_greater();
            }

            temp.set_greater(child);

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