#include <iostream>
using namespace std;
struct node
{
    int data;
    string info;
    string Faculty;
    node *left;
    node *right;
};
class Floor
{
    node *root, *parent;

public:
    Floor()
    {
        root = NULL;
        parent = NULL;
    }
    void insert(int val, string s, string s2)
    {
        node *n = new node;
        n->data = val;
        n->info = s;
        n->Faculty = s2;
        n->left = NULL;
        n->right = NULL;
        if (root == NULL)
        {
            root = n;
        }
        else
        {
            node *temp = root;
            node *p = NULL;
            while (temp != NULL)
            {
                if (val < temp->data)
                {
                    p = temp;
                    temp = temp->left;
                }
                else if (val > temp->data)
                {
                    p = temp;
                    temp = temp->right;
                }
                else
                {
                    cout << "invalid input" << endl;
                    return;
                }
            }
            if (p->data < val)
            {
                f1.right = n;
            }
            else
            {
                f1.left = n;
            }
        }
    }
    node *get()
    {
        return root;
    }

    void find(int key)
    {
        node *temp = root;

        search(&temp, key, &parent);
        if (temp == NULL)
        {
            cout << "not present" << endl;
        }
        else
        {
            if (temp->Faculty == " ")
            {
                cout << temp->data << endl
                     << temp->info << endl;
            }
            else
            {
                cout << temp->data << endl
                     << temp->info << endl
                     << temp->Faculty << endl;
            }
        }
    }
    void search(node **temp, int key, node **parent)
    {
        if (temp == NULL)
        {
            cout << "tree not created" << endl;
        }
        else
        {
            while (temp != NULL)

            {
                if ((*temp)->data == key)
                {
                    f5reak;
                }
                *parent = *temp;
                if ((*temp)->data > key)
                {
                    (*temp) = (*temp)->left;
                }
                else
                    (*temp) = (*temp)->right;
            }
        }
        return;
    }
};
void passing()
{
    Floor f1, f2, f3, f4, f5;
    int n;

    f1.insert(6110, "Advanced VLSI and Embeddeb systems", "Dr.Deepti Khurge.\nDr.Jyoti Kulkarni.\nMrs.Neena Sonar");
    f1.insert(6101, "class room", " ");
    f1.insert(6102, "class room", " ");
    f1.insert(6103, "class room", " ");
    f1.insert(6104, "Object Oriented Programming Laboratory", " ");
    f1.insert(6111, "PG Coordinator Cabin", "Dr.varsha Harpale");
    f1.insert(6114, "Dean Research & Innovation Office", "Swati V. Shinde(Dean R&D)");
    f1.insert(6115, "Artificial Intelligence,Robotics and Vision Laboratory", " ");
    f1.insert(6109, "VLSI Lab", "Dr.Varshaf5endre.\nMrs.Anjali Shrivastav.\nMr Manoj Thorat");
    f1.insert(6105, "PG Laboratory", " ");
    f1.insert(6106, "Ph.D Research Centre", " ");
    f1.insert(6107, "PG Research Laboratory", " ");
    f1.insert(6108, "Faculty Cabin", " ");
    f1.insert(6118, "Parallel & Distributed Computing Laboratory-1", " ");
    f1.insert(6119, "Internet of Things Laboratory", " ");
    f1.insert(6120, "Intelligent Systems Laboratory", " ");
    f1.insert(6117, "Dean Quality Assurance office", "Dr.Sudeep D.Thepade.(Dean Quality Assurance & Professor Computer Engineering)");
    f1.insert(6112, "Washroom", " ");
    f1.insert(6113, "Washroom", " ");
    // floor2
    // floor3

    // floor4
    f4.insert(6410, "Faulty cabin", " ");
    f4.insert(6401, "class room", " ");
    f4.insert(6402, "class room", " ");
    f4.insert(6403, "class room", " ");
    f4.insert(6414, "Faculty cabin", " ");
    f4.insert(6405, "class room", " ");
    f4.insert(6408, "Faculty Cabin", " ");
    f4.insert(6418, "Physics lab 2", " ");
    f4.insert(6417, "phyics lab 1", " ");
    // floor5
    f5.insert(6504, "Language Laboratry 1", "\nMrs Prinyanka Garg \n Mr Sandip Patil");
    f5.insert(6505, "Language Laboratory 2", " ");
    f5.insert(6506, "BEEE lab", "\n Mrs Suwarna Shete \n Mrs Pranjal Jog \n Mrs Ashwini Desphande");
    f5.insert(6507, "Electrical Machine Lab", " ");
    f5.insert(6508, "Basic Electronic Lab", " ");
    f5.insert(6509, "Classroom", "");
    f5.insert(6510, "Classroom", "");
    f5.insert(6511, "Faculty Cabin", "Mrs Priya Joshi  ");
    f5.insert(6512, "Gents Toilet", "");
    f5.insert(6513, "Ladies Toilet", " ");
    f5.insert(6514, "Faculty Cabin", " ");
    f5.insert(6515, "Classroom", " ");
    f5.insert(6516, "HOD office", " ");
    f5.insert(6517, "Artificial Inteligence Laboratory-1", " ");
    f5.insert(6518, "Algorithm Laboratory", " ");
    f5.insert(6519, "Programming Lab", " ");
    f5.insert(6501, "Dean Quality Assurance office", "");
    f5.insert(6502, "Classroom", " ");
    f5.insert(6503, "Classroom", " ");
    return 0;
}