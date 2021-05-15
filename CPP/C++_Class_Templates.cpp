/*Write the class AddElements here*/
template <class T>
class  AddElements {
    T element;
public:
    AddElements (T arg) {element=arg;}
    T add (T arg) {return element+arg;}
};

template <>
class AddElements <string> {
    string element;
public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
        return element.append(arg);
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

