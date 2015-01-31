//
//  Question 1 Part (a).cpp
//  Duo Security Assignment
//
//  Created by Akash, Anant on 1/30/15.
//  Copyright (c) 2015 Akash, Anant. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

float Calc_median( vector<int> numbers)
{
    double median;
    size_t size = numbers.size();
    sort(numbers.begin(),numbers.end());
    
    if(size % 2 == 0)
    {
        median = (numbers[size/2 -1] + numbers[size/2])/2.0;
    }
    else{
        median = numbers[size/2];
    }
    return median;
}
int main()
{
    int number;
    vector<int> list;
    cout <<"Input\tOutput"<<endl;
    while(true){
        cin >> number;
    list.push_back(number);
        cout <<"\t\t\t"<<Calc_median(list)<<endl;
    }
    
    
}
