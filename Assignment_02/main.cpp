#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    String s0("Initial string");
    // constructors used in the same order as described above:
    String s1;
    String s2(s0);
    String s3(s0, 8, 3);
    String s4("A character sequence");
    String s5("Another character sequence", 12);
    String s6a(10, 'x');
    String s6b(10, 42);      // 42 is the ASCII code for '*'

    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3
        << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a
        << "\ns6b: " << s6b << '\n';

    String str("Test string");
    String str2 = str.substr(3, 5); //no need check for index out of bounds

    cout << "The value in str is: " << str << endl;
    cout << "The size of str is: " << str.length() << "\n";
    cout << "char at 5th location: " << str.at(5) << "\n";
    cout << "char at 3nd location: " << str.at(3) << "\n";
    cout << "Substring: " << str2 << "\n";
    String test;
    char src[20] = "I am the source.";

    // large enough to store content of src
    char dest[30] = "I am the destination.";

    cout << "\n\ndest[] before copy: " << dest << endl;

    // copy contents of src to dest    
    test.Strcpy(dest, src);

    cout << "dest[] after copy: " << dest;


    char str1[] = "Megadeth";
    char str3[] = "Metallica";

    // returns -1 because "Megadeth" < "Metallica" lexicographically
    int result = test.Strcmp(str1 ,str3);

    cout << "\n\nComparing " << str1 << " and " << str3 << ": " << result << endl;

    // returns 1 because  "Metallica" > "Megadeth" lexicographically
    result = test.Strcmp(str3, str1);

    cout << "Comparing " << str3 << " and " << str1 << ": " << result << endl;

    // returns 1 because  "Megadeth" = "Megadeth" lexicographically
    result = test.Strcmp(str1, str1);

    cout << "Comparing " << str1 << " and " << str1 << ": " << result<<"\n\n";

    return 0;
}
