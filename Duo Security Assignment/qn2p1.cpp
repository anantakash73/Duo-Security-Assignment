#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <cstring>
 using namespace std;


string reverse(string &line)
{
	int len = line.length();
	int j=0;
	string reverse_string;
	for (int i=0; i <len;i++)
	{
		replace = 
		line.replace(i,1,line[len-1-i]);
	}
	return reverse_string;
}
 int main()
 {
 	string file_name,line;
 	ifstream password_file;
 	string file;
 	cout << "Enter the name of the file"<<endl;
 	cin >> file_name;
 	password_file.open(file_name.c_str());
 	getline(password_file,line);
 	while(!password_file.fail())
 	{
 		getline(password_file,line);
 		cout << line;
 		cout << reverse(line)<<endl;
 	} 
 }