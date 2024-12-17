#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double sum,numl,sumpl;
    while(getline(source,textline)){
        numl++;
        sum += atof(textline.c_str());
        sumpl += pow(atof(textline.c_str()),2);
    }
    float me = sum/numl;
    float mew = me*me;
    float bb = sqrt(sumpl/numl-mew)  ;    
    
    cout << "Number of data = " << numl << "\n";   
    cout << setprecision(3);
    cout << "Mean = "<< me << "\n";
    cout << "Standard deviation = " << bb << endl;
}





//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
