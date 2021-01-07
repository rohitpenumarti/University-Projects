// starZ.cpp   A demonstration of ASCII Art printing C characters

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starZ(int width);
void runTests(void);

// Write starZ per specifictions at 
// https://foo.cs.ucsb.edu/16wiki/index.php/F14:Labs:lab04
// and so that internal tests pass, and submit.cs system tests pass


string starZ(int width)
{
  string result="";
  int starLocation = 0;
  
  if(width < 3) {
    return result;
  }
  
  for(int col = 1; col <= width; col++) {
    result += "*";
  }
  result += "\n";
  
  starLocation = width-1;
  for(int row = 2; row <= width-1; row++) {
    for(int col = 1; col <= width-1; col++) {
      if(col == starLocation) {
        result += "*";
      }
      result += " ";
    }
    starLocation--;
    result += "\n";
  }
  
  for(int col = 1; col <= width; col++) {
    result += "*";
  }
  result += "\n";
  
  return result;
}

// Test-Driven Development; check expected results against actual

void runTests(void) {

  // The following line works because in C and C++ when string literals
  // are separated only by whitespace (space, tab, newline), they 
  // automatically get concatenated into a single string literal

  string starZ3Expected = 
    "***\n"
    " * \n"
    "***\n";
  
  assertEquals(starZ3Expected,starZ(3),"starZ(3)");

  string starZ4Expected = 
    "****\n"
    "  * \n"
    " *  \n"
    "****\n";
  
  assertEquals(starZ4Expected,starZ(4),"starZ(4)");

  assertEquals("",starZ(0),"starZ(0)");
  assertEquals("",starZ(2),"starZ(2)");
}

// Test harness

void assertEquals(string expected, string actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


// Main function

int main(int argc, char *argv[])
{

  if (argc!=2) {
    cerr << "Usage: " << argv[0] << " width height" << endl;
    exit(1);
  }
  
  int width = stoi(argv[1]);
  // If the program is executed with parameter -1 unit test
  // the starZ() function using our automated test framework
  if (width==-1) {
    runTests();
    exit(0);
  }

  cout << starZ(width);
  return 0;
}