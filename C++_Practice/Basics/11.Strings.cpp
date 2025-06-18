#include <iostream>
using namespace std;
int main() 
{
    // 1. String Concatenation
    string str1 = "Hello";
    string str2 = "World";
    string result = str1 + " " + str2;
    cout << "Combined String: " << result << endl;

    cout << "--------------------------------------" << endl;

    // 2. Length of a String
    string name = "Aagam";
    cout << "Length: " << name.length() << endl;

    cout << "--------------------------------------" << endl;

    // 3. Accessing Individual Characters
    string text = "GLS";
    cout << "First character: " << text[0] << endl;
    cout << "Last character: " << text[text.length() - 1] << endl;

    cout << "--------------------------------------" << endl;

    // 4. Taking String Input with Spaces
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;

    cout << "--------------------------------------" << endl;

    // 5. Comparing Strings
    string a = "Apple";
    string b = "Banana";
    if (a == b) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    cout << "--------------------------------------" << endl;

    // 6. Appending Strings
    string s = "Good";
    s.append(" Morning");
    cout << "Appended String: " << s << endl;

    cout << "--------------------------------------" << endl;

    // 7. Substring Extraction
    string str = "HelloWorld";
    string sub = str.substr(0, 5); // From index 0, take 5 characters
    cout << "Substring: " << sub << endl;

    cout << "--------------------------------------" << endl;

    // 8. Find a Word or Character in String
    string msg = "Welcome to GLS University";
    int index = msg.find("GLS");
    if (index != string::npos) {
        cout << "'GLS' found at index: " << index << endl;
    } else {
        cout << "'GLS' not found." << endl;
    }

    cout << "--------------------------------------" << endl;

    // 9. Replace Part of a String
    string sentence = "I like Java";
    sentence.replace(7, 4, "C++");  // Replace "Java" with "C++"
    cout << "Updated Sentence: " << sentence << endl;

    return 0;
}