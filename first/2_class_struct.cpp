#include<iostream>
using namespace std;
class rectangle{
    private:
        int lenght;
        int breath;
    public:
    rectangle(int l,int b){
        lenght=l;
        breath=b;
    }    
    int area(){
        return lenght*breath;
    }
    int change_len(int l){
        lenght=l;
        cout<<lenght<<endl;
    }
};
int main(){
    rectangle r(7,8);
    cout<<r.area()<<endl;
    r.change_len(20);
}
//-----------------------------------------------------------------------------------------------------
/*struct rectangle
{
    int lenght;
    int breath;
};
int value(struct rectangle * r,int l,int b){
    r->lenght=l;
    r->breath=b;
}
int area(struct rectangle r){
    return r.lenght*r.breath;
}
int change_len(struct rectangle * r,int ne){
    r->lenght=ne;
    cout<<r->lenght<<endl;
}
int main(){
    struct rectangle r;
    value(&r,7,8);
    cout<<area(r)<<endl;
    change_len(&r,20);
    cout<<r.lenght<<endl;
}*/





