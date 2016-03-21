#include <iostream>
#include "convert.h"
#include <stdlib.h>

using namespace std;

int main()
{
    Converter *conv = new Converter();
    Tree *x = new Tree;
    stringLinkedList *b;
    vector<string> vec;

//_____________*******START BLAINE'S CONTRIBUTION******___________//
    int arraySize = 10;
    string a[arraySize];
    cout << "Please enter 10 string values for your initial array." << endl;
    //Start the user input.
    for(int i = 0; i < arraySize; i++)
    {
        //Used to check if the user input is a string and NOT an integer.
        bool checkInput = true;

        //While the input is true, do the following.
        while(checkInput = true)
        {
            //Take in user input for array values.
            string arrValue;
            cout << "What would you like to place in index " << i << " ?" << endl;
            cin >> arrValue;

            //Begin the check process by using strtol to convert to a long int.
            char *ptr;
            long converted = strtol(arrValue.c_str(), &ptr, 10);

            //If the pointer is returned, input is valid and should be added to the array.
            if(*ptr)
            {
                //cout << "IT'S A STRING!" << endl;
                a[i] = arrValue;
                checkInput = true;
                break;
            }
            //Otherwise, the input is not a string and should not be added to the array.
            //Users should be redirected to add another input in the same index.
            else
            {
                cout << "Invalid input. Please enter strings as array values." << endl;
                checkInput = false;
            }
        }
    }

    //Display the array that the user has created.
    cout << "Your starting array is: " << endl;
    for(int j = 0; j < arraySize; j++)
    {
        //Start the array with a curly bracket. Just for ease of reading.
        if(j == 0)
        {
            cout << "{";
        }
        //End the array with a curly bracket. Just for ease of reading.
        if(j == arraySize - 1)
        {
            cout << a[j] << "}" << endl;
            break;
        }
        //Otherwise, display the array values followed by a comma.
        cout << a[j] << ", ";
    }
//_____________*******END BLAINE'S CONTRIBUTION******___________//

	//string a[10] = {"Kevin","Elijah","Andrew","Elias","Flynn","Callahan","Staple","Ortiz","Calvin", "Stoehr"};
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
            b = conv->ConvertArrToLinkedList(a, 10);
        }
        if(input==2)
        {
            conv->ConvertLLToArray(b);
        }
        if(input==3)
        {
            conv->ConvertLLToVector(b);
        }
        if(input==4)
        {
            vec = conv->arrayToVector(a, 10);
        }
        if(input==5)
        {
            conv->vectorToArray(vec);
        }
        if(input==6)
        {
            conv->vectorToLinkedList(vec);
        }
        if(input==7)
        {
            conv->ArrayToHT(a, 10);
        }
        if(input==8)
        {
            conv->HTToArray();
        }
        if(input==9)
        {
            cout<<"Array to Binary Search Tree(inorder): "<<endl;
            for(int i = 0; i<10;i++)
                x = conv->ArrToBst(a, 10);
            conv->printNode(x);
        }
        if(input==10)
        {
            cout<<"Binary Search Tree to Array: "<<endl;
            conv->BstToArr(x, 10);
        }
        if(input==11)
        {
            exit=true;
            cout<<"Goodbye!"<<endl;
        }
    }
}
