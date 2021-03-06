#pragma once
#include "piece.h"
class king : public piece{
    public:
    king(string _type="",string _color="",int position_x_=0,int position_y_=0){
        this -> color = _color;
        this->position_x = position_x_;
        this->position_y = position_y_;
        this ->type = _type;
    }
    bool is_check(piece board[8][8]);
    bool checkmate(piece board[8][8]);
    void update_pos(int endx, int endy);
};
