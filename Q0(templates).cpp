class pair{
    private:
    int x;
    int y;
    private:
    void setX(int x){
        this->x = x;
    }
      void setY(int x){
        this->x = x;
    }
      int getX(){
        cout<<this->x<<endl;
        return x;
    }
      int getY(){
        cout<<this->y<<endl;
        return y;
    }
};

// Now we will create a template with only one data type at a time
template<typename T>

class pair{
    private:
    T x;
    T y;
    private:
    void setX(T x){
        this->x = x;
    }
      void setY(T x){
        this->x = x;
    }
      T getX(){
        cout<<this->x<<endl;
        return x;
    }
      T getY(){
        cout<<this->y<<endl;
        return y;
    }
};

int main(){
 pair p<int , int>
 p.setX(5)
 p.setY(6)
 cout<<getX()<<endl;
 cout<<getY()<<endl;
}
// Two data type at a time 
template<typename T , typename = V>
class pair{
    private:
    T x;
    V y;
    private:
    void setX(T x){
        this->x = x;
    }
      void setY(V x){
        this->x = x;
    }
      T getX(){
        cout<<this->x<<endl;
        return x;
    }
      V getY(){
        cout<<this->y<<endl;
        return y;
    }
};


int main(){
 pair p<int , float>
 p.setX(5)
 p.setY(6.2)
 cout<<getX()<<endl;
 cout<<getY()<<endl;
}

#include<iostream>
using namespace std;

// One pair and one data type
template<typename T , typename = V>
class pair{
    private:
    T x;
    V y;
    private:
    void setX(T x){
        this->x = x;
    }
      void setY(V x){
        this->x = x;
    }
      T getX(){
        cout<<this->x<<endl;
        return x;
    }
      V getY(){
        cout<<this->y<<endl;
        return y;
    }
};


int main(){
 pair p<int , pair<int , int>>
 p.setX(5)
 pair<int , int> p5;
 p5.setX(5);
 p5.setY(6);
 p.setY(p5)
cout<<p.getX()<<" "<<p.getY().getX()<<" "<<p.getY().getY()<<" "<<endl;
}