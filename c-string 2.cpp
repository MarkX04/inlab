// Student may implement another function as need
void printFirstRepeatedWord(char str[])
{
    bool found = false;
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        char *token2 = strtok(NULL, " ");
        while (token2 != NULL)
        {
            if (strcmp(token, token2) == 0)
            {
                found = true;
                break;
            }
            token2 = strtok(NULL, " ");
        }
        if (found)
        {
            std::cout << token;
            break;
        }
        token = strtok(NULL, " ");
    }
    if (!found)
        std::cout << "No Repetition";
}