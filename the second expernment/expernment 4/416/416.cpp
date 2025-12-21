#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]);
int main()
{
    char s[100];
    int counts[26];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    for (int a = 0; a < strlen(s); a++)
    {
        s[a] = tolower(s[a]);
    }
    for (int b = 0; b < 26; b++)
    {
        counts[b] = 0;
    }
    count(s, counts);
    for (int c = 0; c < 26; c++)
    {
        if (counts[c] > 0)
        {
            if (counts[c] == 1)
                cout << char(c + 97) << ": " << counts[c] << " time" << endl;
            else
                cout << char(c + 97) << ": " << counts[c] << " times" << endl;
        }
    }
    return 0;
}
void count(const char s[], int counts[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (97 <= int(s[i]) && int(s[i]) <= 122)
        {
            int letter = int(s[i]);
            counts[letter - 97] += 1;
        }
    }
}