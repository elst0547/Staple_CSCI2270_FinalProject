#include "convert.h"
#include <vector>
#include <iostream>
#include <climits>
#include <queue>

using namespace std;

Converter::Converter()
{
}

Converter::~Converter(){}

stringLinkedList* Converter::ConvertArrToLinkedList(string array[], int size)
{
	stringLinkedList *head = new stringLinkedList;
	stringLinkedList *root = new stringLinkedList;
	head->title = array[0];
	root = head;
	cout<<"hi"<<endl;
	for(int i=1; i<size; i++)
	{
	    head->next = new stringLinkedList;
		head->next->title = array[i];
		head = head->next;
	}
	cout<<"This is your array"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"This is your Linked List"<<endl;
	head = root;
	while(root->next != NULL)
	{
		cout<<root->title<<endl;
		root = root->next;
	}
	return head;
}

string* Converter::ConvertLLToArray(stringLinkedList* root)
{
	int count = 0;
	stringLinkedList *temp = new stringLinkedList;
	temp = root;
	while(root->next != NULL)
	{
		count++;
		root = root->next;
	}
	root = temp;
	string array[count];
	for(int i=0; i<count; i++)
	{
		array[i] = root->title;
		root = root->next;
	}
	string *pointer = array;
	cout<<"This is your Linked List"<<endl;
	while(temp->next != NULL)
	{
		cout<<temp->title<<endl;
		temp = temp->next;
	}
	cout<<"This is your array"<<endl;
	for(int i=0; i<count; i++)
	{
		cout<<array[i]<<endl;
	}
	return pointer;
}

vector<string> Converter::ConvertLLToVector(stringLinkedList* root)
{
	vector<string> vect;
	int count = 0;
	stringLinkedList *temp = new stringLinkedList;
	temp = root;
	while(root->next != NULL)
	{
		count++;
		root = root->next;
	}
	root = temp;
	cout<<count<<endl;
	for(int i=0; i<count; i++)
	{
		vect.push_back(root->title);
		root = root->next;
	}
	cout<<"This is your Linked List"<<endl;
	while(temp->next != NULL)
	{
		cout<<temp->title<<endl;
		temp = temp->next;
	}
	cout<<"This is your vector"<<endl;
	for(int i=0; i<vect.size(); i++)
	{
		cout<<vect[i]<<endl;
	}
	return vect;
}

vector<string> Converter::arrayToVector(string str[], int size)
{
    vector<string> vec;
    for(int i = 0; i < size; i++)
    {
        vec.push_back(str[i]);
    }
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<endl;
    }
    return vec;
}

string* Converter::vectorToArray(vector<string> vec)
{
	int count = vec.size();
    string str[count];
    for(int i = 0; i < vec.size(); i++)
    {
        str[i] = vec[i];
    }
    for(int i = 0; i < count; i++)
    {
        cout<<str[i]<<endl;
    }
    string *pointer = str;
    return pointer;
}

stringLinkedList* Converter::vectorToLinkedList(vector<string> vec)
{
    stringLinkedList *head = new stringLinkedList;
    stringLinkedList *root = new stringLinkedList;
    head->title = vec[0];
    root = head;
    for(int i=1; i<vec.size(); i++)
    {
        head->next = new stringLinkedList;
        head->next->title = vec[i];
        head = head->next;
    }
    head = root;
    while(head != NULL)
    {
        cout<<head->title<<endl;
        head = head->next;
    }
    return root;
}

void Converter::ArrayToHT(string a[], int size){
    int sum = 0;
    char letter;
    for(int i = 0; i<size;i++){
        hashtable[i] = new HT;
        hashtable[i]->text = "empty";
        hashtable[i]->next = NULL;
    }
    for(int i = 0; i<size;i++){
        bool check = true;
        for(int j = 0; j<a[i].length();j++){
            letter = (char)a[i][j];
            sum = sum + (int)letter;
        }
        sum = sum%10;
        if(hashtable[sum]->text == "empty"){
            hashtable[sum]->text = a[i];
            check = false;
        }
        HT *m = new HT;
        m->text = a[i];
        HT *x = hashtable[sum];
        while(check == true){
            if(x->next == NULL){
                x->next = m;
                check = false;
            }
            x = x->next;
        }
    }

    for(int i = 0;i<10;i++){
        if(hashtable[i]->text != "empty"){
            cout<<"Index["<<i<<"] "<<hashtable[i]->text<<"->";
            HT *x = hashtable[i];
            while(x->next != NULL){
                cout<<x->next->text<<"->";
                x=x->next;
            }
            cout<<endl;
        }
        else{
            cout<<"Index["<<i<<"] Empty"<<endl;
        }
    }
}

string* Converter::HTToArray(){
    int count = 0;
    int arrayCount = 0;
    for(int i = 0;i<10;i++){
        if(hashtable[i]->text != "empty"){
            count += 1;
            HT *x = hashtable[i];
            while(x->next != NULL){
                count += 1;
                x = x->next;
            }
        }
    }
    string array[count];
    for(int i = 0;i<10;i++){
        if(hashtable[i]->text != "empty"){
            array[arrayCount] = hashtable[i]->text;
            arrayCount += 1;
            if(hashtable[i]->next != NULL){
                HT *x = hashtable[i]->next;
                while(x != NULL){
                    array[arrayCount] = x->text;
                    arrayCount += 1;
                    x = x->next;
                }
            }
        }
    }
    for(int i = 0;i<10;i++){
        hashtable[i]->text = "empty";
        hashtable[i]->next = NULL;
    }
    cout<<"HashTable To Array:"<<endl;
    for(int i = 0;i<count;i++){
        cout<<array[i]<<endl;
    }
    string *pointer = array;
    return pointer;
}

void Converter::printNode(Tree *x){

    if (x->left != NULL)
        printNode(x->left);
    cout<<"Name: "<<x->name<<endl;
    if (x->right != NULL)
        printNode(x->right);
}

Tree *Converter::ArrToBst(string arr[], int size){
    Tree *temp = new Tree();
    temp->name = arr[i];
    if(roots == NULL){
        roots = temp;
        roots->parent = NULL;
        roots->right = NULL;
        roots->left = NULL;
        i++;
    }
    else{

        Tree *y = NULL;
        Tree *x = roots;
        Tree *z = temp;
        while(x!=NULL){
            y = x;
            if(x->name.compare(arr[i]) > 0){
                x = x->left;
            }
            else if(x->name.compare(arr[i]) <= 0){
                x = x->right;
            }
        }
        z->parent = y;
        if(y->name.compare(arr[i]) > 0){
            y->left = z;
            z->left = NULL;
            z->right = NULL;
        }
        else{
            y->right = z;
            z->left = NULL;
            z->right = NULL;
        }
        i++;
        return roots;
    }
}

void Converter::BstToArr(Tree* x, int size){
    string *names = new string[size];
    if (x->left != NULL){
        BstToArr(x->left, size);
        counter++;
    }
    names[counter] = x->name;
    cout<<names[counter]<<endl;
    if (x->right != NULL){
        BstToArr(x->right, size);
        counter++;
    }
    //return names;
}
