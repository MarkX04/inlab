void deleteWord(string s, string s1){
    //TO DO
    string outstr = "";
    int prev = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s.substr(i, s1.length()) == s1)
        {
            outstr += s.substr(prev, i - prev);
            prev = i + s1.length();
        }
    }

    outstr += s.substr(prev, s.length() - prev);

    cout << outstr;
}