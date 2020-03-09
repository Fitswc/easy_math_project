#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include "pt.h"

using namespace std;

int main(){
    string input;
    float num;
    float out_num;
    pt_num ptn;
    string file;


    cout << "Math_project" << endl <<"2020/3/7" << endl << "[Enter] type:String > ";
    cin >> input;

    if(input == "help"){
        cout <<"Help System(version:0.1 alpha)"<< endl
        << "In this program You can Enter:" << endl
        << "help :Get Help for all command" << endl
        << "pt :Use Pythagorean theorem to Calculation C(Third side of right triangle)" << endl
        << "abs :Figure out absolute value" << endl
        << "sin :Sine of a number" << endl
        << "cos :Cosine of a number" << endl
        << "sqrt :Find the square root of a number" << endl
        << "license :Watch the license" 
        << "Latest edit is in 2020/3/8 By Eric/Fitswc" << endl;
        exit(0);
    }


    else if (input == "pt")
    {
        cout << "This result is By Pythagorean theorem(Beta)" << endl;
        float a;
        float b;
        cout << "[Enter A] > ";
        cin >> a;
        cout << "[Enter B] > ";
        cin >> b;
        ptn.seta(a);
        ptn.setb(b);
        cout << "By Pythagorean theorem: C is " << ptn.pt_out() << endl;
        exit(0);
    }

    else if(input == "license")
    {
        cout << "LICENSE: " << endl;
        fstream infile; 
        infile.open("license.txt");
        infile >> file;
        cout << file << endl;
        infile.close();
        exit(0);
    }

    else
    {
        cout << "Unknow command!" << endl;
        exit(0);
    }

    cout << endl << "[Enter] type:Float > " ;
    cin >> num;
    
    if (input == "abs")
    {
        out_num = abs(num);
        cout << "[Output] type:float > " << out_num << endl;
    }
    else if (input == "sin")
    {
        out_num = sin(num);
        cout << "[Output] type:float > " << out_num <<endl;
    }
    else if (input == "cos")
    {
        out_num = sin(num);
        cout << "[Output] type:float > " << out_num <<endl;
    }
    else if (input == "sqrt")
    {

        if (num < 0)
        {

	        cout << "Negative number cannot use sqrt!" << endl;
	        exit(0);
        }
        out_num = sqrtf(num);
        cout << "[Output] type:float > " << out_num << endl;
    }
    else
    {
        cout << "Unsupport Number!" << endl;
    }
    

  
    return 0;
}
