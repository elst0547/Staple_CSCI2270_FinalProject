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
    std::string text;
    HT *next;
};

class Converter{
	private:
		HT *hashtable[10];
	public:
		Converter::Converter();
		Converter::~Converter();
		City* Converter::NewVCity();
		stringLinkedList Converter::Converter::ConvertArrToLinkedList(string array, int size);
		string* Converter::ConvertLLToArray(stringLinkedList root);
		vector<string> Converter::arrayToVector(string[] str);
		string* Converter::vectorToArray(vector<string> vec);
		stringLinkedList Converter::vectorToLinkedList(vector<string> vec);
		void Converter::ArrayToHT(string a[]);
		string* Converter::HTToArray();
};
#endif // CONVERT_H