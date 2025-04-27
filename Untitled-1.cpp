#include <iostream>
using namespace std;

struct node
{
    int time;
    string day;
    int loc;
    string faculty;
    string lect;
    node *left;
    node *right;
};

class BST
{
    node *root;

public:
    BST()
    {
        root = NULL;
    }

    void insert(int t, string d, int l, string F, string lec)
    {
        node *n = new node;
        n->time = t;
        n->day = d;
        n->loc = l;
        n->faculty = F;
        n->lect = lec;
        n->right = NULL;
        n->left = NULL;

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
                if (temp->time > t)
                {
                    p = temp;
                    temp = temp->left;
                }
                else
                {
                    p = temp;
                    temp = temp->right;
                }
            }
            if (p->time > t)
            {
                p->left = n;
            }
            else
            {
                p->right = n;
            }
        }
    }

    void search(int time)
    {
        node *temp = root;
        node *p = NULL;
        while (temp != NULL)
        {
            if (temp->time == time)
            {
                cout << "Time: " << temp->time << " \nDay: " << temp->day << " \nLocation: " << temp->loc << " \nFaculty: " << temp->faculty << " \nLecture/Lab: " << temp->lect << endl;
                return;
            }
            else
            {
                p = temp;
                if (temp->time > time)
                {
                    temp = temp->left;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
        cout << "Time not found in the BST." << endl;
    }
};

int main()
{
    BST b;
    int n;
    cout << "Press 1 for Monday" << endl;
    cout << "Press 2 for Tuesday" << endl;
    cout << "Press 3 for Wednesday" << endl;
    cout << "Press 4 for Thrusday" << endl;
    cout << "Press 5 for Friday" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        b.insert(9, "Monday", 6102, "Mrs Dhanshree Patil", "Lecture");
        b.insert(10, "Monday", 6102, "Mrs Amruta Patil", "Lecture");
        b.insert(11, "Monday", 6102, "Mrs Shruti Chudhari", "Lecture");
        b.insert(12, "Monday", 0, " ", " ");
        b.insert(1, "Monday", 6206, "Mrs Dhanshree Patil", "Lab");
        b.insert(2, "Monday", 6206, "Mrs Dhanshree Patil", "Lab");
        int a;
        cout << "Time : ";
        cin >> a;
        cout << endl;
        cout << "****************************************" << endl;
        b.search(a);
        break;
    case 2:
            b.insert(8, "Tuesday", 6102, "Mrs Dhanshree Patil", "Lecture");
            b.insert(9, "Tuesday", 6102, "Mrs Swati Chandurkar", "Lecture");
            b.insert(10, "Tuesday", 6104, "Mrs Swati Chandurkar", "Lab");
            b.insert(11, "Tuesday", 6104, "Mrs Swati Chandurkar", "Lab");
            b.insert(12, "Tuesday", 0, " ", " ");
            b.insert(1, "Tuesday", 6101, "Mrs Amruta Patil", "Lecture");
            b.insert(2, "Tuesday", 6101, "Mrs Shruti Chaudhari", "Lecture");
            int c;
            cout << "Time : ";
            cin >> c;
            cout << endl;
            cout << "****************************************" << endl;
            b.search(c);
            break;

    case 3:
            b.insert(9, "Wednesday", 6102, "Mrs Swati Chandurkar", "Lecture");
            b.insert(10, "Wednesday", 6106, "Mrs Archana Kadam", "Lab");
            b.insert(11, "Wednesday", 6106, "Mrs Archana Kadam", "Lab");
            b.insert(12, "Wednesday", 0, " ", " ");
            b.insert(1, "Wednesday", 6206, "Mrs Amruta Patil", "Lecture");
            b.insert(2, "Wednesday", 6206, "Mr Sachin Shende", "Lecture");
            int d;
            cout << "Time : ";
            cin >> d;
            cout << endl;
            cout << "****************************************" << endl;
            b.search(d);
            break;
    }
    return 0;

}