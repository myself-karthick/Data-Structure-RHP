#include <iostream>
#include <cstring>
using namespace std;
char input[100], output[100];
void Comb(char *input, int index, char *output, int outLen)
{
    if (input[index] == '\0')
    {
        output[outLen] = '\0';
        cout << output << endl;
        return;
    }
    output[outLen] = input[index];
    output[outLen + 1] = ' ';
    Comb(input, index + 1, output, outLen + 2);
    if (input[index + 1] != '\0')
        Comb(input, index + 1, output, outLen + 1);
}

int main()
{
    cin>>input;
    output[0] = '\0';
    Comb(input, 0, output, 0);
    return 0;
}
