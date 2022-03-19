int isPalindrome(char S[])
{
    int l = 0;
    int h = strlen(S) - 1;
    while (h > l)
    {
        if (S[l++] != S[h--])
        {
            return 0;
        }
    }
    return 1;
}
