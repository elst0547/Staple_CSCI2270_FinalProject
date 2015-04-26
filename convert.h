#ifndef CONVERT_H
#define CONVERT_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct stringLinkedList
{
	string title;
	stringLinkedList *next;
};

struct HT{
    string text;
    HT *next;
    HT(){};
    HT(string in_title)
    {
        text = in_title;
    }
};

struct Tree{
    string name;
    Tree *parent;
    Tree *left;
    Tree *right;
};

class Converter{
	private:
		HT *hashtable[10];
		int i = 0;
		int counter = 0;
	public:
		Converter();
		~Converter();
		stringLinkedList* ConvertArrToLinkedList(string array[], int size);
		string* ConvertLLToArray(stringLinkedList* root);
		vector<string> ConvertLLToVector(stringLinkedList* root);
		vector<string> arrayToVector(string str[], int size);
		string* vectorToArray(vector<string> vec);
		stringLinkedList* vectorToLinkedList(vector<string> vec);
		void ArrayToHT(string a[], int size);
		string* HTToArray();
		Tree *ArrToBst(string arr[], int size);
		void BstToArr(Tree *tree, int size);
		void printNode(Tree * node);
		Tree *roots;
};
#endif // CONVERT_H
