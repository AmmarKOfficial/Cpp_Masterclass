// Check whether two Strings are anagram of each other

// Input: str1 = “listen”  str2 = “silent”
// Output: “Anagram”
// Explanation: All characters of “listen” and “silent” are the same.

// Input: str1 = “gram”  str2 = “arm”
// Output: “Not Anagram”

// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;

/* function to check whether two strings are anagram of
each other */
bool Anagramer(string S1, string S2)
{
	// Get lengths of both strings
	int LS1 = S1.length();
	int LS2 = S2.length();

	// If length of both strings is not same, then they
	// cannot be anagram
	if (LS1 != LS2)
		return false;

	// Sort both the strings
	sort(S1.begin(), S1.end()); //sort(first iterator, last iterator);
	sort(S2.begin(), S2.end()); //sort(first iterator, last iterator);

	// Compare sorted strings
	for (int i = 0; i < LS1; i++)
		if (S1[i] != S2[i])
			return false;

	return true;
}

// Driver code
int main()
{
	string String_1 = "listen";
	string String_2 = "silent";

	// Function Call
	if (Anagramer(String_1, String_2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each "
				"other";

	return 0;
}
