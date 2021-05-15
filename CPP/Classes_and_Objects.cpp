class Student{
    public:
    vector <int> scores;
    void input()
    {
        for(int i = 0; i<5; i++)
        {
        int score;
        cin>>score;
        scores.push_back(score);
        }
    }

    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<scores.size();i++)
        {
            sum+=scores[i];
        }
        return sum;
    }


};

