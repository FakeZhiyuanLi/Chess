/*
White piece numbers
Pawn: 0
Knight: 1
Bishop: 2
Rook: 3
Queen: 4
King: 5

Black piece numbers
Pawn: 6
Knight: 7
Bishop: 8
Rook: 9
Queen: 10
King: 11

*/

class Board {
    private:
        int positions[8][8];
    public:
        Board() {
            initBoard();
        }
        void initBoard() {
            // White
            positions[0][0] = 3;
            positions[0][1] = 1;
            positions[0][2] = 2;
            positions[0][3] = 4;
            positions[0][4] = 5;
            positions[0][5] = 2;
            positions[0][6] = 1;
            positions[0][7] = 3;

            for (int i = 0; i < 8; i++) {
                positions[1][i] = 0;
            }
            
            // Black
            positions[7][0] = 9;
            positions[7][1] = 7;
            positions[7][2] = 8;
            positions[7][3] = 10;
            positions[7][4] = 11;
            positions[7][5] = 8;
            positions[7][6] = 7;
            positions[7][7] = 9;   

            for (int i = 0; i < 8; i++) {
                positions[6][i] = 6;
            }

            for (int i = 2; i < 6; i++) {
                for (int j = 0; j < 8; j++) {
                    positions[i][j] = -1;
                }
            }

        }
        int getPieceAtPosition(int x, int y) {
            return positions[x][y];
        }

};