#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*string readFile(string file){
    return file;
}*/

int insertIntoSortedArray(float myArray[], int numEntries, float newValue){
    if (numEntries>100 || numEntries<=-1){
        return -1;
    }
    else{
        int j=0;
        int i=0;
        while(i<=numEntries){
            if (newValue>=myArray[i] && j==0){
                if (i!=numEntries){
                    for (int k=numEntries; k>i; k--){
                        myArray[k]=myArray[k-1];
                    }
                }
                myArray[i]=newValue;
                j++;
            }
            i++;
        }
        numEntries++;
        for (int c=0; c<numEntries; c++){
            if (c!=numEntries-1){
               cout << myArray[c] << ","; 
            }
            else{
                cout << myArray[c];
            }
            
        }
        cout << endl;
    }
    return numEntries;
}

int main(int argc, char *argv[]){
    string g=argv[1];
    //string file=readFile("numbers.txt");
    float myArray[100];
    ifstream file1;
    file1.open(g);
    if (file1.fail()){
        cout << "Failed to open the file." << endl;
    }
    string line;
    int i=0;
    while(getline(file1, line)){
        float j=stof(line);
        insertIntoSortedArray(myArray, i, j);
        i++;
    }
    return 0;
}
