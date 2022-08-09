class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {

            int row = matrix.size();

            int col = matrix[0].size();

           	//         vector<int> rowM (col, 0);
           	//         vector<int> colM (row,0);

           	//         for(int i=0; i< row ; i++){

           	//             for(int j=0; j < col ; j++){

           	//                 if(matrix[i][j] == 0){

           	//                     colM[i] = 1;
           	//                     rowM[j] = 1;

           	//                 }

           	//             }

           	//         }

           	//         for(int i=0; i< rowM.size(); i++){
           	//             if(rowM[i] == 1){
           	//                 for(int j=0; j< row; j++){
           	//                     matrix[j][i] =0;
           	//                 }
           	//             }
           	//         }

           	//         for(int i=0; i< colM.size(); i++){
           	//             if(colM[i] == 1){
           	//                 for(int j=0; j< col; j++){
           	//                     matrix[i][j] =0;
           	//                 }
           	//             }
           	//         }

            bool flag = false;

            for (int i = 0; i < row; i++)
            {

                for (int j = 0; j < col; j++)
                {

                    if (matrix[i][j] == 0)
                    {
                        matrix[i][0] = 0;
                        if (j == 0)
                        {
                            flag = true;
                        }
                        else
                        {
                            
                            matrix[0][j] = 0;
                        }
                    }
                }
            }

            for (int i = row - 1; i >= 0; i--)
            {

                for (int j = col - 1; j >= 1; j--)
                {

                    if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
                if(flag){
                    matrix[i][0] = 0;
                }
            }
            
        }
};