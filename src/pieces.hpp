/*
Numbers:
0: White
1: Black
*/

class Piece {
    private:
        bool isAlive;
        bool isWhite;
        int identifier;
    public:
        bool getAlive() {
            return isAlive;
        }
        bool getColor() {
            return isWhite;
        }

        void setAlive(bool alive) {
            isAlive = alive;
        }

        void setIdentifier(int num) {
            identifier = num;
        }

        int getIdentifier() {
            return identifier;
        }

        void setColor(bool color) {
            isWhite = color;
        }
        Piece(bool isAlive, bool isWhite) {
            initPiece(isAlive, isWhite);
        }
        void initPiece(bool alive, bool team) {
            isAlive = alive;
            isWhite = team;
        }
};

class Pawn : public Piece {
    private:
        bool firstMove = true;
    public:
        bool getFirstMove() {
            return firstMove;
        }
        void setFirstMove(bool moved) {
            firstMove = moved;
        }
        Pawn(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(0);
            } else {
                setIdentifier(6);
            }
        }
};

class Knight : public Piece {
    public:
        Knight(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(1);
            } else {
                setIdentifier(7);
            }
        }
};

class Bishop : public Piece {
    public:
        Bishop(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(2);
            } else {
                setIdentifier(8);
            }
        }
};

class Rook : public Piece {
    public:
        Rook(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(3);
            } else {
                setIdentifier(9);
            }
        }
};

class Queen : public Piece {
    public:
        Queen(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(4);
            } else {
                setIdentifier(10);
            }
        }
};

class King : public Piece {
    private:
        bool isChecked = false;
    public:
        bool getChecked() {
            return isChecked;
        }
        void setChecked(bool checked) {
            isChecked = checked; 
        }
        
        King(bool Alive, bool Color) : Piece(Alive, Color) {
            initPiece(Alive, Color);
            if (Color == true) {
                setIdentifier(5);
            } else {
                setIdentifier(11);
            }
        }

};