void threeChars(string fileName)   {
    // TODO
    ifstream myFile(fileName);
    if (!myFile.is_open())
    {
        cout << "Error opening file" << endl;
        return;}
    string s;
    while (myFile >> s && s != "***"){
        if(s[0] <= s[1] && s[1] <= s[2])
        cout << "true";
        else cout << "false";
        cout << '\n';
    }
}