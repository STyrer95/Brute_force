#include <bits/stdc++.h>
using namespace std;
 
void search(char* pat, char* txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int count = 0;
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                count++;
                break;
 
        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout << "Pattern found at index "
                 << i << endl;
    }
    cout << count;
}
 
// Driver Code
int main()
{
    char txt[] = "YOURETEARINMEAPARTEVERYDAYYOURTEARINMEAPARTOHWHATCANISAY";
    char pat[] = "TEARING";
    search(pat, txt);
    return 0;
}