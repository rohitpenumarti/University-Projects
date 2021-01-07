#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;

// helper function for isAnagram
string removeSpacesAndPunct(string input) {
  string newString = "";
  
  for(int i = 0; i < input.length(); i++) {
    newString += tolower(input.at(i));
  }
  
  sort(newString.begin(), newString.end());
  int len = newString.length();
  string finalString = "";
  
  for(int i = 0; i < len; i++) {
    if(!ispunct(newString.at(i))) {
      finalString += newString.at(i);
    }
  }
  
  return finalString;
}

/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  bool truth = true;
  string newS1 = removeSpacesAndPunct(s1);
  string newS2 = removeSpacesAndPunct(s2);
  
  int length1 = newS1.size();
  int length2 = newS2.size();
  
  if(length1 == 0 || length2 == 0) {
    return truth;
  }
  
  if(length1 != length2) {
    return false;
  } else if(newS1.at(0) == newS2.at(0)) {
    string newString1 = newS1.substr(1, length1-1);
    string newString2 = newS2.substr(1, length2-1);
    truth = isAnagram(newString1, newString2);
  } else {
    truth = false;
  }
  return truth;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  bool truth = true;
  string s1Lowercase = "";
  
  for(int i = 0; i < s1.length(); i++) {
    s1Lowercase += tolower(s1.at(i));
  }
  
  if(s1Lowercase.length() == 1) {
    return true;
  } else if (s1Lowercase.length() == 2 && s1Lowercase.at(0) == s1Lowercase.at(s1.length()-1)) {
    return true;
  }
  
  if(s1Lowercase.at(0) == s1Lowercase.at(s1Lowercase.length()-1)) {
    string newString = s1Lowercase.substr(1, s1Lowercase.length()-2);
    truth = isPalindrome(newString);
  } else {
    truth = false;
  }
  
  return truth;
}


