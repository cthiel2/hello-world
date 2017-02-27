#include <iostream>
using namespace std;
#include "person1.h"

void askEnglish(
struct person  *partner)
{
cout << "What's your first name?";
cin >> partner->vorname;
cout << "What's your last name?";
cin >> partner->nachname;
switch(partner->herkunft)
   {
case 'r':
   cout << "What's your patronym?";
   cin >> partner->patronym;
   break;
case 'a':
   cout << "What's your middle name?";
   cin >> partner->middlename;
   break;
case 'o':
   cout << "What's your title?";
   cin >> partner->titel;
   break;
   }
}


void frageDeutsch(
struct person    *partner)
{
cout << "Wie lautet Ihr Vorname?";
cin >> partner->vorname;
cout << "Wie lautet Ihr Familienname?";
cin >> partner->nachname;
switch(partner->herkunft)
   {
case 'r':
   cout << "Was ist Ihr Vatersname?";
   cin >> partner->patronym;
   break;
case 'a':
   cout << "Was ist Ihr Mittelname?";
   cin >> partner->middlename;
   break;
case 'o':
   cout << "Welchen Titel haben Sie?";
   cin >> partner->titel;
   break;
   }
}

void greetEnglish(
struct person    *partner)
{
cout << "Welcome, ";
if (partner->herkunft=='o') cout << partner->titel << " ";
cout << partner->vorname << " ";
if (partner->herkunft=='r') cout << partner->patronym << " ";
else if (partner->herkunft=='a') cout << partner->middlename << " ";
cout << partner->nachname << "!" << endl;
}

void gruesseDeutsch(
struct person    *partner)
{
cout << "Willkommen, ";
if (partner->herkunft=='o') cout << partner->titel << " ";
cout << partner->vorname << " ";
if (partner->herkunft=='r') cout << partner->patronym << " ";
else if (partner->herkunft=='a') cout << partner->middlename << " ";
cout << partner->nachname << "!" << endl;
}
