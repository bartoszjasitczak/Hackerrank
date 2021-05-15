class Box{
    int l,b,h;

public:
    Box() { l = 0; b = 0; h = 0;}
    Box(int l, int b, int h) : l(l), b(b), h(h) {}
    Box( const Box &a) { l = a.l; b = a.b; h = a.h;}



    int getLength() {return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    long long CalculateVolume() {return (long long)l*b*h;}

    bool operator<(Box& b){
        if (l < b.l) return true;
        if (this->b < b.b && l == b.l) return true;
        if (h < b.h && this->b == b.b && l == b.l) return true;

        else return false;
    }


};

ostream& operator<<(ostream& out, Box& B) {


    out << B.getLength() <<" "<<B.getBreadth()<<" "<<B.getHeight();

    return out;
}

