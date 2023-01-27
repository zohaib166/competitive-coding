#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> strtok_cpp(string ipaddr) {
    stringstream ssip(ipaddr);
    vector<string> octets;
    string octet;
    int i=0;
    while(!ssip.eof()) {
        getline(ssip, octet, '.');
        octets.push_back(octet);
    }
    return octets;
}

int main() {
    string ipaddr = "172.16.7.5";
    vector<string> result = strtok_cpp(ipaddr);

    for(string x: result) {
        cout << x << endl;
    }
}
