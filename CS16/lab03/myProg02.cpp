// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[]) {
    if (argc!=2) {
      // if argc is not 2, print an error message and exit
      cerr << "Usage: "<< argv[0] << " inputFile" << endl;
      exit(1); // defined in cstdlib
    }
  
    ifstream ifs;
    ifs.open(argv[1]);

    if (!ifs) {
        cerr << "Open failed" <<endl;
        return 1;
    }

    string line;
    int animalCount = 0;
    int noDucksCount = 0;

    while (1) {
        getline(ifs, line);
        
        if(!ifs) { 
            break;
        }
        
        animalCount++;
        
        if(line.compare("duck") == 0) {
          
        } else {
          noDucksCount++;
        }
    }
    
    cout << "Report for " << argv[1] << ":" << endl;
    cout << "   Animal count:    " << animalCount << endl;
    cout << "   Duck count:      " << animalCount-noDucksCount << endl;
    cout << "   Non duck count:  " << noDucksCount << endl;

    ifs.close();
    return 0;
}
