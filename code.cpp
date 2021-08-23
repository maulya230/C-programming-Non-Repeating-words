#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


void removeRepeating(string s1, string s2)
{
	
	string s3 = s1 + " " + s2 + " ";
	string words = "";
	int i = 0;


	for (auto x : s3) {
		if (x == ' ') {

		
			if (s1.find(words) == string::npos
				|| s2.find(words) == string::npos)
				cout << words<<" ";

			
			words = "";
		}
		else {
			words = words + x;
		}
	}
}


int main()
{   
    string s1, s2;
    cout<<"Enter first sentence"<<endl;
    getline(cin,s1);
	cout<<"Enter second sentence"<<endl;
    getline(cin,s2);
    cout<<"Non repeating words are:"<<endl;
	removeRepeating(s1, s2);
	return 0;
}
