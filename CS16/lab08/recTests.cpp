#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  }else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {
      
      START_TEST_GROUP("IS_ANAGRAM");
      
      //bool truth = isAnagram("abc", "cba");
      ASSERT_TRUE(isAnagram("abc", "cba"));
      ASSERT_TRUE(isAnagram("abc", "abc"));
      ASSERT_TRUE(isAnagram("abc", "bac"));
      ASSERT_TRUE(isAnagram("PiZzA", "PiZzA"));
      ASSERT_TRUE(isAnagram("PiZzA", "ZapiZ"));
      ASSERT_TRUE(!isAnagram("abc","ccba"));
      ASSERT_TRUE(!isAnagram("cba", "ccba"));
      ASSERT_TRUE(!isAnagram("hello", "helo"));
      ASSERT_TRUE(!isAnagram("hello", "PiZzA"));
      ASSERT_TRUE(!isAnagram("bac", "helo"));

    } else if (testNum == 2) {

       START_TEST_GROUP("IS_PALINDROME");
       
       string p1 = "level";
       ASSERT_TRUE(isPalindrome(p1));
       string p2 = "kayak";
       ASSERT_TRUE(isPalindrome(p2));
       string p3 = "Noon";
       ASSERT_TRUE(isPalindrome(p3));
       string p4 = "racecar";
       ASSERT_TRUE(isPalindrome(p4));
       string p5 = "rotator";
       ASSERT_TRUE(isPalindrome(p5));
       
       string np1 = "lever";
       ASSERT_TRUE(!isPalindrome(np1));
       string np2 = "crack";
       ASSERT_TRUE(!isPalindrome(np2));
       string np3 = "moon";
       ASSERT_TRUE(!isPalindrome(np3));
       string np4 = "Rohit";
       ASSERT_TRUE(!isPalindrome(np4));
       string np5 = "pneumonoultramicroscopicsilicovolcanoconiosis";
       ASSERT_TRUE(!isPalindrome(np5));

    } else if (testNum == 3) {

      START_TEST_GROUP("RECURSIVE_SUM");

      int threeNums[3]={42,57,61};
      LinkedList *list = arrayToLinkedList(threeNums,3);
      LinkedList *empty = new LinkedList();
      empty->head = NULL;
      empty->tail = NULL;

      ASSERT_EQUALS( 160, recursiveSum(list->head));      
      ASSERT_EQUALS( 0, recursiveSum(empty->head));
      
    } else if (testNum == 4) {
      
      START_TEST_GROUP("RECURSIVE_LARGEST_VALUE");

      int threeNums[3]={42,57,61};
      LinkedList *list = arrayToLinkedList(threeNums,3);

      int largestValue = recursiveLargestValue(list->head);
      ASSERT_EQUALS( "61", intToString(largestValue));
    }
  }
  
  return 0;
}

