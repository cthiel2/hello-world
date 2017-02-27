#include <iostream>

using namespace std;
#include "person1.h"


int main()
{
 class person person ;
char sprache;

cout << "Wählen Sie Ihre Sprache:" << endl;
cout << "e = English" << endl;
cout << "d = deutsch" << endl;
cout << "   Ihre Wahl:";
cin >> sprache;

cout << "Sie kommen aus:" << endl;
cout << "w = Westeuropa" << endl;
cout << "a = Amerika" << endl;
cout << "r = Rußland" << endl;
cout << "o = Österreich" << endl;
cout << "   Ihre Herkunft:";
cin >> person.herkunft;

switch(sprache)
   {
case 'e':
   person.askEnglish(&person);
   break;
case 'd':
   person.frageDeutsch(&person);
   break;
default:
   cout << "I do not know your language / Maybe you know English?";
   person.askEnglish(&person);
   person.setSprache('e');
   break;
   }

switch(person.getSprache)
   {
case 'e':
   person.greetEnglish(&person);
   break;
case 'd':
   person.gruesseDeutsch(&person);
   break;
   }
}
