//Jalaidi, Al-kaizer E.
//BSCS 1-B
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    fstream file;
    fstream file1;
    vector <string> colors;

    file.open("original.txt", ios :: out);
    if(file.is_open()){
        file << "One\n";
        file << "Two\n";
        file << "Three\n";
        file << "Four\n";
        file << "Five\n";
        file << "Six\n";
        file.close();
        cout << "Write Successfully!";
    }else{
        cout << "Invalid to open file";
    }

    file1.open("sorted.txt", ios :: out);

    file.open("original.txt", ios :: in);
    if(file.is_open() && file1.is_open()){
        string line; // temp contain
        while(getline(file,line)){
            colors.push_back(line);
        }
        sort(colors.begin(),colors.end()); // sorting
        
        for(int i = 0; i < colors.size();i++){
            file1 << colors[i] << endl;
        }
        file.close();
        file1.close();
        
    }else{
        cout << "Invalid to open file";
    }




    return 0;
}