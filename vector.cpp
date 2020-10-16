//container, vector - dynamic array
//

#include <iostream>
#include <vector>
using namespace std;

void deMo(){
    vector<int> vi(3);
    //assign
    vi[0] = 10;
    vi[1] = 20;
    vi[2] = 30;
    vi.push_back(40);
    cout << vi.size() << endl;

    //normal array
    int ai[3];
    ai[0] = 10;
    ai[1] = 20;
    ai[2] = 30;

    //output
    cout << vi[3] << endl << ai[2];
}

void demoInit(){
    vector<int>  vj = {10,20,30,40};

    /*
        for(int e : vj){        //for each (Java. C#, JavaScript)
            cout << e << "\t";
        }
    */

    /*
        //for loop (index)
        for(int i = 0; i < vj.size(); i++){
            cout << vj[i] << "\t";
        }  
    */

    vector<int> vk;
    vk.push_back(1); 
    vk.push_back(20); 
    vk.push_back(30);   
    for(int c : vk){
        cout << c << endl;
    }
}

int main(){
    //deMo();
    demoInit();
}