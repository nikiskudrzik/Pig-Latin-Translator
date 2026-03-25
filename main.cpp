#include <iostream>
#include <string>
#include <cctype>
#include "LinkedList.h"

using namespace std;

// This function checks if a letter is a vowel
bool isVowel(char ch)
{
    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    string word;
    LinkedList list;

    cout << "Enter a word: ";
    cin >> word;

    // Put each character of the word into the linked list
    for (int i = 0; i < word.length(); i++)
    {
        list.append(word[i]);
    }

    // Save the original first letter
    char firstLetter = word[0];

    // If the word starts with a vowel, just add "way"
    if (isVowel(firstLetter))
    {
        cout << "Pig Latin word: " << word + "way" << endl;
    }
    else
    {
        // Rotate until the first letter becomes a vowel
        while (!isVowel(list.getFirstChar()))
        {
            list.rotate();
        }

        cout << "Pig Latin word: " << list.toString() + "ay" << endl;
    }

    return 0;
}