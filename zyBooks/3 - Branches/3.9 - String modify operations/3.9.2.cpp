#include <iostream>
#include <string>
using namespace std;

/*
	Modify secondVerse to play "The Name Game" (a.k.a. "The Banana Song", see Wikipedia.org), by replacing "(Name)" with userName but without the first letter. Ex: if userName = "Katie", the program prints:
	
		Banana-fana fo-fatie!

*/

int main() {
   string secondVerse = "Banana-fana fo-f(Name)!";
   string userName = "Katie";

   userName.erase(userName.begin()); // Removes first char from userName

   /* Your solution goes here  */

   cout << secondVerse << endl;

   return 0;
}
