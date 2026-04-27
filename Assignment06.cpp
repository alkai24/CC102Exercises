#include <iostream>
#include <fstream>
using namespace std; 

bool isPrime(int value){
    if (value <= 1) return false;
    
    for(int divisor = 2; divisor * divisor <= value; divisor++){
        if (value % divisor == 0){
            return false;
        }
    }
    return true;
}

int main(){
    
    ifstream inFile("Nums.txt");
    ofstream outFile("Result.txt");
    
    int currentNumber;
    int primeCount = 0;
    
    if(!inFile){
        cout << "File not opened!";
        return 1;
    }
    
    if(!outFile){
        cout << "File not opened!";
        return 1;
    }
    
    while(inFile >> currentNumber){
        if(isPrime(currentNumber)){
            primeCount++;
        }        
    }
    
    cout << "Number of Prime Numbers: " << primeCount << endl;
    outFile << "Number of Prime Numbers: " << primeCount << endl;
    
    inFile.close();
    outFile.close();
    
    return 0;
}