#include <iostream>

using namespace std;

char swap(char c);

int main()
{
    int T;
    string G;

    cin >> T;
    //cin >> ws;

    for (int i = 0; i < T; i++)
    {
        getline(cin >> ws, G);
        for (int j = 0; j < G.length(); j++)
        {
            G[j] = swap(G[j]);
        }
        
        cout << "Caso #" << i + 1 << ":" << G << endl;
    }
    

    
    return 0;
}

char swap(char c)
{
    switch (c)
    {
    case 'a':
        return 'y'; 
        break;
    case 'b':
        return'h';
        break;
    case 'c':
        return'e';
        break;
    case 'd':
        return's';
        break;
    case 'e':
        return'o';
        break;
    case 'f':
        return'c';
        break;
    case 'g':
        return'v';
        break;
    case 'h':
        return'x';
        break;
    case 'i':
        return'd';
        break;
    case 'j':
        return'u';
        break;
    case 'k':
        return'i';
        break;
    case 'l':
        return'g';
        break;
    case 'm':
        return'l';
        break;
    case 'n':
        return'b';
        break;
    case 'o':
        return'k';
        break;
    case 'p':
        return'r';
        break;
    case 'q':
        return'z';
        break;
    case 'r':
        return't';
        break;
    case 's':
        return'n';
        break;
    case 't':
        return'w';
        break;
    case 'u':
        return'j';
        break;
    case 'v':
        return'p';
        break;
    case 'w':
        return'f';
        break;
    case 'x':
        return'm';
        break;
    case 'y':
        return'a';
        break;
    case 'z':
        return'q';
        break;
    case ' ':
        return' ';
        break;
    default: 
        return '???';
        break;
    }
}