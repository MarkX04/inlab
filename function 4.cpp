bool checkElementsUniqueness(int* arr, int n) {
    // Write your code 
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return false;
            }
        }
    }
    return true;
}