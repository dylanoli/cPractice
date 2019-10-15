double fatorial(double num)
{
    double fatNum = 1;
    int i;
    for (i = 0; i < num; i++)
    {
        fatNum *= (num-i);
    }
    return fatNum;   
}