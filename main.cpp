#include <iostream>
#include <cmath>
using namespace std;


double findb(double a, double c) {
    double pa = pow(a, 2); 
    double pc = pow(c, 2);
    double pb = pc - pa;
    return sqrt(pb);
}
double findc(double a, double b) {
    double pa = pow(a, 2); 
    double pb = pow(b, 2);
    double pc = pb + pa;
    return sqrt(pc);
}
void solveRT() {
    cout<<"3 args necessary: (A, B, C), where B or C is 0.\n\n";
    double a,b,c;
    cin>>a; cin>>b; cin>>c;
    cout<<"OUTPUT: ";
    
    if (b == 0) {
        cout << findb(a,c);
    } else if (c == 0) {
        cout << findc(a,b);
    } else {
        cout << "Failure-> neither B or C were 0\n";
    }
}
void solveGM() {
    cout << "3 args necessary: (A, <operator>, B)\n\n";
    double a;
    char op;
    double b;
    cin>>a; cin>>op; cin>>b;
    
    cout<<"OUTPUT: ";
    switch(op) {
    case 'A':
        cout << a + b;
        break;
    case 'S':
        cout << a - b;
        break;
    case 'M':
        cout << a * b;
        break;
    case 'D':
        cout << a / b;
        break;
    case 'R':
        cout << fmod(a,b);
        break;
    default:
        cout << "Failure-> invalid operation\n\n";
        break;
    }
}
void solveME() {
    float name, qty, i, total = 0;
    cout<<"Variable number of args: (qty, element1, element2, ...)\n\n";
    cin>>qty;
    for (;i<qty;i++) {
        cin>>name;
        total = total + name;
    }
    total = total / qty;
    cout<<"Output: "<<total;
}


int main() {
char command;
while (43 == 43) {
    cout<<"One arg: (P|G|M|X) -> ";
    cin>>command;
    
    switch(command) {
    case 'P':
        solveRT();
        break;
    case 'G':
        solveGM();
        break;
    case 'M':
        solveME();
        break;
    case 'X':
        return 0;
        break;
    default:
        cout<<"Failure-> This is not a valid operation";
    }
    cout<<"\n\n\n";
}
}
