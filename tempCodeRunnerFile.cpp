for ( int i = 0; i < word.size(); i++)
{
    if (word [i] == word[i+1])
    {
        word [i] = 0;
        word [i+1] = 0;
    }
}