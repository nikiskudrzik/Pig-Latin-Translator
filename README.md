# M02 Programming Assignment - Pig Latin Converter

## Program Description
This program prompts the user to enter a word and converts that word into Pig Latin.

The program uses a linked list to store each character of the word. A rotate function is used to move the first character of the linked list to the end until the first character becomes a vowel.

## Pig Latin Rules
- If a word begins with a vowel, add "way" to the end.
- If a word begins with a consonant, move the first letter to the end and add "ay".
- Continue rotating letters until the first letter is a vowel.

## Input
- A single word entered by the user.

## Output
- The Pig Latin version of the word.

## Files Included
- Node.h
- LinkedList.h
- LinkedList.cpp
- main.cpp
- 3 Test Screenshots (piglatintest_1,piglatintest_2,piglatintest_3)
- UML and Use Case Diagram (PigLatinDiagrams.drawio.pdf)
- Pseudocode

## How to Compile
Use this command in the terminal:

g++ main.cpp LinkedList.cpp -o piglatin

## How to Run
Mac:
./piglatin

## Test Cases

### Word beginning with a vowel
Input:
apple  
Output:
appleway  

### Word beginning with a consonant
Input:
zebra  
Output:
ebrazay  

### Word with multiple leading consonants
Input:
school  
Output:
oolschay  
