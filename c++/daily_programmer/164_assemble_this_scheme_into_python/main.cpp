#include <QCoreApplication>
#include <iostream>
#include <QTextStream>

int main(int argc, char *argv[])
{
    using namespace std;

    QTextStream qin(stdin);
    QTextStream qout(stdout);

    // Output 'Hello World' to the console.
    qout << "Hello World!" << endl;

    // Return an array of the first 100 numbers that are divisible by 3 and 5.
    for(int i = 0; i <= 100; ++i)
    {
        if(i % 3 == 0 && i % 5 == 0)
            qout << i << endl;
    }

    // Create a program that verifies if a word is an anagram of another word.

    // Create a program that removes a specificed letter from a word.
    qout << "Please input a word:" << endl;
    QString targetWord;
    qin >> targetWord;

    qout << endl << "Input a letter to be removed the word you just entered: " << endl;
    QString targetLetter;
    qin >> targetLetter;
    qout << targetWord.replace(targetLetter, "") << endl;

    // Sum all the elements of an array

    // BONUS: Implement a bubble-sort.

    return 0;
}
