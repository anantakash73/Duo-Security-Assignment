
//  Question 1 Part (b).cpp
//  Duo Security Assignment
//
//  Created by Akash, Anant on 1/30/15.
//  Copyright (c) 2015 Akash, Anant. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


void palindrome_slices(const string &big_string){
    int count= 0;
    cout <<"The palindrome substrings are"<<endl;
    for(int position = 0;position<big_string.length();position++)
    {
        cout<< big_string[position]<<", ";
        count ++;
    }
    for (int position = 0;position <big_string.length();position ++)
    {

        int offset = 0;
        //Check the "aa" situation
        while ((position - offset >= 0) && (position+offset + 1)<big_string.length() &&(big_string.at(position-offset))==(big_string.at(position+offset+1))){
            string sub = big_string.substr(position-offset,(2*offset)+2);
            cout << sub <<", ";
            count ++;
            offset ++;
        }
        offset =1 ;//reset it again for the odd length checking
        //Check for the 'zyz' situation
        while((position-offset>=0)&& position+offset<big_string.length() && (big_string.at(position-offset))==(big_string.at(position+offset))){
            string sub = big_string.substr(position-offset,(2*offset)+1);
            cout << sub<<", ";
            count ++;
            offset ++;
        }
    
    }
    cout << endl<<"The number of palindromes are "<<count<<endl;
}
int main()
{
    string big_string,string_hold;
    cout << "Enter the string"<<endl;
    cin >> big_string;
    palindrome_slices(big_string);
    
}