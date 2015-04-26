#include <iostream>
#include "convert.h"

using namespace std;

int main()
{
    Converter *conv = new Converter();
    cout<<"penis"<<endl;
    Tree *x = new Tree;
    string *b;
	string a[9] = {"Kevin","Elijah","Andrew","Elias","Flynn","Callahan","Staple","Ortiz","Calvin"};

	/*cout<<"Array to Binary Search Tree(inorder): "<<endl;
	for(int i = 0; i<9;i++)
        x = conv->ArrToBst(a, 9);
    conv->printNode(x);
    cout<<"Binary Search Tree to Array: "<<endl;
    conv->BstToArr(x, 9);*/
    bool exit=false;
    int input = 0;
    while(exit!=true) //Main loop for actually running the "movie store"
    {
        cout<<"======Main Menu======"<<endl;
        cout<<"1. Convert array to linked list"<<endl;
        cout<<"2. Convert linked list to array"<<endl;
        cout<<"3. Convert linked list to vector"<<endl;
        cout<<"4. Convert array to vector"<<endl;
        cout<<"5. Convert vector to array"<<endl;
        cout<<"6. Convert vector to linked list"<<endl;
        cout<<"7. Convert array to hash table"<<endl;
        cout<<"8. Convert hash table to array"<<endl;
        cout<<"9. Convert array to binary search tree"<<endl;
        cout<<"10. Convert binary search tree to array"<<endl;
        cout<<"11. Quit"<<endl;
        cin>>input;
        if(input==1)
        {
            
        }
        if(input==2)
        {
            
        }
        if(input==3)
        {
            
        }
        if(input==4)
        {
            
        }
        if(input==5)
        {
            
        }
        if(input==6)
        {
            
        }
        if(input==7)
        {
            
        }
        if(input==8)
        {
            
        }
        if(input==9)
        {
            cout<<"Array to Binary Search Tree(inorder): "<<endl;
            for(int i = 0; i<9;i++)
                x = conv->ArrToBst(a, 9);
            conv->printNode(x);
        }
        if(input==10)
        {
            cout<<"Binary Search Tree to Array: "<<endl;
            conv->BstToArr(x, 9);
        }
        if(input==11)
        {
            exit=true;
            cout<<"Goodbye!"<<endl;
        }
    }
}