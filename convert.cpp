#include "convert.h"
#include <vector>
#include <iostream>
#include <climits>
#include <queue>

using namespace std;

void Converter(){}

void ~Converter(){}

stringLinkedList ConvertArrToLinkedList(string array, int size)
{
	stringLinkedList *head = new stringLinkedList;
	stringLinkedList *root = new stringLinkedList;
	head->title = array[0];
	root = head;
	for(int i=1; i<size; i++)
	{
		head->next->title = array[i];
		head = head->next;
	}
	return root;
	cout<<"This is your array"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"This is your Linked List"<<endl;
	while(root->next != NULL)
	{
		cout<<root->title<<endl;
		root = root->next;
	}
}

string* ConvertLLToArray(stringLinkedList root)
{
	int count = 0;
	stringLinkedList *temp = new stringLinkedList;
	temp = root;
	while(root->next != NULL)
	{
		count++;
		root = root->next;
	}
	string array[count];
	for(int i=0; i<count; i++)
	{
		array[i] = root->title;
		root = root->next;
	}
	string *pointer = array;
	return pointer;
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

}

vector<string> arrayToVector(string[] str)
{
    vector<string> vec;
    for(int i = 0; i < sizeof(str); i++)
    {
        vec.add(str[i]);
    }
    return vec;
}

string* vectorToArray(vector<string> vec)
{
    string str[vec.size()] = {};
    for(int i = 0; i < vec.size(); i++)
    {
        str[i] = vec[i];
    }
    string *pointer = str;
    return pointer;
}

stringLinkedList vectorToLinkedList(vector<string> vec)
{
    stringLinkedList *head = new stringLinkedList;
    stringLinkedList *root = new stringLinkedList;
    head->title = vec[0];
    root = head
    for(int i=1; i<vec.size(); i++)
    {
        head->next->title = vec[i];
        head = head->next;
    }
    return root;
}