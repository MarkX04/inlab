void process(string fileName){
    // TODO
    ifstream myFile(fileName);
    if(myFile.is_open() == false){
        cout << "ERROW : File Not Found\n";
        return;
    }
    int n,m;
    myFile >> n >> m;
    float maxofAll;
    for(int row = 0; row < n; row++){
        float maxofrow;
        myFile >> maxofrow;
        for(int column = 1; column < m; column++){
            float number;
            myFile >> number;
            if(number > maxofrow)
                maxofrow = number;
        }
        cout << maxofrow << " ";
        if(row == 0 || maxofrow > maxofAll)
            maxofAll = maxofrow;
    }
    cout << maxofAll << "\n";
}