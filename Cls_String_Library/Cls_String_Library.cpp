#include <iostream>
#include "Cls_String_Library.h"
using namespace std;


int main()
{
    Cls_String_Library String1;


    Cls_String_Library String2("Al_Ubad");

    String1.Value = "Abdullah Al_ameri";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Abdullah Mohammed Mohqel Al_ameri") << endl;

    cout << "Number of words: " <<
        Cls_String_Library::CountWords("Abdullah Al_ameri") << endl;

    //----------------
    Cls_String_Library String3("hi how are you?");

    cout << "String 3 = " << String3.Value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.Value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.Value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.Value << endl;

    //----------------

    cout << "After inverting (a) : "
        << Cls_String_Library::InvertLetterCase('a') << endl;

    //----------------

    String3.Value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    String3.InvertAllLettersCase();
    cout << String3.Value << endl;

    //----------------

    cout << "Capital Letters count : "
        << Cls_String_Library::CountLetters("Abdullah Mohammed", Cls_String_Library::CapitalLetters)
        << endl << endl;

    //----------------

    String3.Value = "Welcome to Turkyi";
    cout << String3.Value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter (u) vowel? " << Cls_String_Library::IsVowel('u')
        << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.Value = "    Abdullah      ";
    cout << "\nString     = " << String3.Value;

    String3.Value = "    Abdullah     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.Value;

    //----------------

    String3.Value = "    Abdullah     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.Value;

    //----------------

    String3.Value = "    Abdullah     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.Value;

    //----------------

    //Joins
    vector<string> vString1 = { "Mohammed","Hassan","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << Cls_String_Library::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Hasssan","Ali","Maher" };

    cout << "\n\nJoin String From array: \n";
    cout << Cls_String_Library::JoinString(arrString, 4, " ");

    //----------------

    String3.Value = "Abdullah Mohammed";
    cout << "\n\nString     = " << String3.Value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.Value
        << endl;

    //---------------

    String3.Value = "Abdullah Mohammed";
    String3.ReplaceWord("Mohammed", "Al_ameri");
    cout << "\nReplace : " << String3.Value
        << endl;

    //---------------

    String3.Value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.Value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value
        << endl;

    //---------------

    system("pause>0");
    return 0;
}
