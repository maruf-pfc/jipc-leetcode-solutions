class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        int n = board.size();


        int rows[n], columns[n], boxes[n];
        for(int i = 0; i < n; i++){
            rows[i] = 0;
            columns[i] = 0;
            boxes[i] = 0;
        }


        int sq = sqrt(n);


        for(int r = 0; r < sq;  r++){
            for(int c = 0; c < sq; c++){
                char element = board[r][c]; // '5' -> 5
                if(element == '.') continue;




                // check whether r-th row is still valid with element
                // rows[r]
                int pos = (1 << (element - '0'));
               
                if((rows[r] & pos) > 0) return false;
                else{
                    rows[r] |= pos;
                }


                // check whether c-th column is still valid with element
                // columns[c]
               
                if((columns[c] & pos) > 0) return false;
                else{
                    columns[c] |= pos;
                }


                // check whether current (?) box is still valid with element
                // here, current box number is
                // boxes[r / 3 * 3 + c / 3]
               
                if((boxes[r / sq * sq + c / sq] & pos) > 0) return false;
                else{
                    boxes[r / sq * sq + c / sq] |= pos;
                }


            }
        }
       
        return true;
    }
};
