/*


*/
#include <iostream>

using namespace std;

class ambhi{   //base class
    
    public:
    virtual void hero()=0;
};

class anniyan :public ambhi{
    public:
    void hero(){
        cout<<"hero character\n ";
    }
};

class remo :public ambhi{
    
    public:
    void hero(){
        cout<<"side character";
        
    }
};



int main(){
    
    anniyan a1;
    remo r1;
    
    ambhi *am1 = &a1;
    ambhi *am2 = &r1;
    
    
    
    am1 ->hero();
    am2 ->hero();
    
    
    
    
}
