'.', which means that the cell is empty;
'*', which means that the cell contains an obstacle;
'#', which means that the cell contains a small box.

box = [['#', '#', '.', '.', '*', '#', '.'],
       ['#', '#', '#', '.', '.', '*', '.'],
       ['#', '#', '#', '*', '.', '#', '.']]



box = [['.', '#', '#', '*', '#', '#', '.', '*','#'],
       ['#', '#', '#', '.', '.', '*', '.'],
       ['#', '#', '#', '*', '.', '#', '.']]

the output should be
rotateAndFall(box) = [['#', '.',  '.'],
                      ['#', '.',  '.'],
                      ['#', '#',  '.'],
                      ['*', '#',  '.'],
                      ['.', '#',  '#'],
                      ['.', '*',  '#'],
                      ['#', '.',  '#']]

m == box.length
n == box[i].length
1 <= m, n <= 500

 vector<vector<char>>  Solution (vector<vector<char>> box){

    int nboxes = 0;
    vector<vector<char>> boxResult;

     for (int i = 0; i < box.size(); i++)
     {
         for (int j = 0; j <  box[i].size(); j++)
         {
            if(box[i][j] == "*" && j ==  box[i].size()-1) {
                 for (int x = 1; x < nboxes ; x++)
                 {
                    box[i][j-x] = "#"
                 }
                 nboxes = 0;
            }
            else{
                if(box[i][j] == "#") nboxes++;
                box[i][j] == "."
            }
         }
     }
     for (int i = 0; i < box[0].size(); i++)
     {
         for (int j =box.size()-1; j >= 0; j--)
         {
             inside.push_back(box[i][j])
         }
         boxResult.push_back(inside)
         
     }

O(n**2)

 }


 int main(int argc, const char** argv) {
     return 0;
 }



// ************************* Solucion en Python *****************************
def rotarMatriz(matriz):
	matrizRotada = []
	for colI in range(len(matriz[0])):
		tempList = []
		for rowI in range(len(matriz)-1, -1, -1):
			tempList.append(matriz[rowI][colI])

		matrizRotada.append(tempList)
	return matrizRotada


def reacomodarCajas(matriz):
	for rowI in range(len(matriz)):
		counter = 0
		for colI in range(len(matriz[rowI]) - 1, -1, -1):
			item = matriz[rowI][colI]
			if item == '.':
				counter += 1
			elif item == '*':
				counter = 0
			elif item == '#':
				index = colI + counter
				matriz[rowI][colI] = '.'
				matriz[rowI][index] = '#'				
	return matriz


def roatateAndFall(matriz):
	matriz = reacomodarCajas(matriz)
	matriz = rotarMatriz(matriz)
	return matriz

box = [['#', '#', '.', '.', '.', '#', '.'],
       ['#', '#', '#', '.', '.', '*', '.'],
       ['#', '#', '#', '*', '.', '#', '.']]

m = roatateAndFall(box)
for row in m:
	print(row)