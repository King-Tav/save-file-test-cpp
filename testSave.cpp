#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

//Prototype method
int writeFile(string, string);

int writeFile(string file, string input){
    ofstream writer(file);

    if(!writer){
        cout<<"Error opening file"<<endl;
        return -1; //Signal error then exit program
    }
    writer<<"test"<<endl;//write output.
	writer<<input<<endl;
    writer.close(); //Close filestream
}

int main(){
    string fileName = "test.txt";
    writeFile(fileName.c_str(), "testinput");
}
