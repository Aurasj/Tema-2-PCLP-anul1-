#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

ifstream fin("localitatiRO.csv");
ofstream out("vecini.csv");

int main(){
    fin.ignore(500, '\n');
    float m,n,p,q;
    int locuitori;

    cout << "latitudine: "; cin >> m;
    cout << "longitudine: "; cin >> n;

    vector<vector<string>> content;
    vector<string> row;
    string line, word;
    
    while(getline(fin, line))
    {
        row.clear();
        
        stringstream str(line);
        
        //Se ia randul si se elimina virgulele
        while(getline(str, word, ','))
        {
            row.push_back(word);
        }
        p = stof(row[0]);
        q = stof(row[1]);
        locuitori = stoi(row[5]);
        
        if( ((((m - 0.5) <= p) && ((m + 0.5) >= p)) && 
            (((n - 0.5) <= q) && ((n + 0.5) >= q))) &&
            locuitori > 1000 )
        
        //Randul este stocat cu celelalte la un loc
        content.push_back(row);
    }
    
    for(int i = 0; i < content.size(); i++)
    {
        for(int j = 0; j < content[i].size(); j++)
        {
            out << content[i][j] << " ";
        }
        out << "\n";
    }
    //25.6,45.65
    return 0;
}