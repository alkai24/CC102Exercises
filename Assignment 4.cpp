//Jalaidi, Al-kaizer E.
//BSCS 1B
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    fstream file;
    fstream file1;
    // create file and put something on it
    file.open("color.txt", ios :: out);
    if(file.is_open()){
        file << "Green\n";
        file << "White\n";
        file << "Brown\n";
        file << "Black\n";
        file << "Gray\n";
        file.close();
        cout<<"Write Successfully\n";
    }else{
        cout << "Invalid to open the file";
    }
    //create an empty file
    file1.open("color_copy.txt", ios :: out);

    file.open("color.txt", ios :: in);
    if(file.is_open() && file1.is_open()){
        string line;
        while(getline (file, line)){ 
            file1 << line << endl;
        }
        file.close();
        file1.close();
    }else{
        cout << "Invalid to open the file";
    }

    return 0;
}