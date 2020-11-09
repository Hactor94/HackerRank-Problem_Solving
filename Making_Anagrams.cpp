// Making_Anagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;
int makingAnagrams(string s1, string s2) {
    int deletion = 0;
    int s1Arr[26] = { 0 };
    int s2Arr[26] = { 0 };
    int count = 0;

    for (int i = 0; i < s1.length(); i++) s1Arr[s1[i] - 'a']++;
    for (int i = 0; i < s2.length(); i++) s2Arr[s2[i] - 'a']++;

    for (int i = 0; i < 26; i++) {
        deletion += abs(s1Arr[i] - s2Arr[i]);
    }
    return deletion;
}
int main()
{
    string str1, str2;
    str1 = "absdjkvuahdakejfnfauhdsaavasdlkj"; str2 = "djfladfhiawasdkjvalskufhafablsdkashlahdfa";
    cout << makingAnagrams(str1, str2);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
