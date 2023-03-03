void uppercase(string output)
{
    ofstream file(output);
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return;
    }
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input.replace(i, 1, 1, input[i] - 32);
        }
    }
    file.write(input.c_str(), input.length());
}