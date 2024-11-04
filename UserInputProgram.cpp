//Import necessary libraries
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>

using namespace std;

	int main(){

		char text[200];

		//Opens the designated file on my desktop
		fstream file;
		file.open ("/Users/trevo/Desktop/CSC450_CT5_mod5.txt",ios::app);

		//Get user input on what they want to add to the text file
		cout << "Please enter what you would like to add to the text file:" << endl;
		cin.getline(text, sizeof(text));

		//Write the user input onto the file and save and close the text file
		file << text << endl;
		file.close();

		//Re-open the text file
		file.open ("/Users/trevo/Desktop/CSC450_CT5_mod5.txt", ios::in | ios::out);
		char c;
		string s;
		file >> s;
		//Grab all of the letters, numbers, symbols, white spaces, etc.
		while( file.get(c) )
		s += c ;
		//Reverse all of the characters in the text file
		reverse(s.begin(), s.end());
		file.close();

		//Open the reverse text file
		file.open ("/Users/trevo/Desktop/CSC450-mod5-reverse.txt", ios::app);
		//Write the reversed characters grabbed from the first text file and save and close the reverse text file
		file << s << endl;
		file.close();
		return 0;
		}
