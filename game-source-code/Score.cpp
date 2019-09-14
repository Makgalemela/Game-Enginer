#include "Score.hpp"

Score::Score()
{
    _highscore = 0;
    out.open("../executables/highScore.txt", std::ios::out);
    in.open("../executables/highScore.txt", std::ios::in);
}

int Score::getCurrentScore() const{
    return _highscore;
}
void Score::setScore(Scores _score){
    if(_score == Scores::Ten)
        _highscore +=10;
    else if(_score == Scores::Twenty)
        _highscore +=20;
    else if(_score == Scores::ThirtyFive)
        _highscore +=35;
}
void Score::writehighscore(){
    
    out<<_highscore;
}
int Score::readhighscore(){
    int highscore;
    if(in.is_open()){
         in>>highscore;
    }
    return  highscore;
}
Score::~Score()
{
}

