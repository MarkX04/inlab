void encrypt(char *text, int shift){
         shift %=26;
         int i = 0;
         while (text[i]){
             if (text[i] >= 'a' && text[i] <= 'z'){
                 text[i] = 'a' + (text[i] - 'a' + shift + 26) % 26;} 
             else if (text[i] >= 'A' && text[i] <= 'Z'){
                 text[i] = 'A' + (text[i] - 'A' + shift + 26) % 26;}
                 i++;}}   
 void decrypt(char *text, int shift){
        shift %=26;
        int i = 0; 
        while (text[i]){
            if (text[i] >= 'a' && text[i] <= 'z'){
                text[i] = 'a' + (text[i] - 'a' - shift + 26) % 26;} 
            else if (text[i] >= 'A' && text[i] <= 'Z'){
                text[i] = 'A' + (text[i] - 'A' - shift + 26) % 26;}
                i++;}}