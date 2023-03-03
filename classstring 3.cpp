#include <iostream>
#include <string>

using namespace std;

int main()  {
    // TODO
    std::string s; std::cin >> s;
    
    int n = 0, m = 1;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] != s[i - 1])
        {
            n = std::max(n, m); m = 1;
            continue;
        }
        m++;
    }
    n = std::max(n, m);

    std::cout << n;
}