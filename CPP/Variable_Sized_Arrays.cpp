#include <vector>
#include <iostream>
#include <algorithm>

int main() {

    using std::cin;
    using std::vector;
    using std::cout;

    unsigned int how_many_rows,how_many_data,which_row,which_column;
    std::cin>>how_many_rows>>how_many_data;
    std::vector <std::vector <int> > rows;
    std::vector <std::vector <int> > questions;

     for(unsigned int i=0;i<how_many_rows;i++)
     {
         int Size,value;
         cin>>Size;
         vector<int> rows2;
         for(int j=0;j<Size;j++)
         {
             cin>>value;
             rows2.push_back(value);
         }
         rows.push_back(rows2);

     }

      for(unsigned int i=0;i<how_many_data;i++)
     {
         int number;
         vector<int> questions2;
         for(int j=0;j<2;j++)
         {
             cin>>number;
             questions2.push_back(number);
         }
         questions.push_back(questions2);


     }

      for(unsigned int i=0;i<how_many_data;i++)
     {
             cout<<rows[questions[i][0]][questions[i][1]]<<std::endl;

     }

    return 0;
}
