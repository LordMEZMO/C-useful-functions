#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int random(int a, int b)    // random number in the range from the smallest to the largest given
{
	srand (time(NULL));
	if(b>=a)
	{    
		int c = rand() % b + a;
		if(c >= a || c <= b)
		{
			return c;
		}	
		else
		{
			return a;	
		}	
	}
	else
	{
		int c = rand() % a + b;
		if(c >= b || c <= a)
		{
			return c;
		}	
		else
		{
			return a;	
		}
	}
}   

void tab(int arr[])     //print array
{
	for ( int i = 0; i < sizeof(arr); i++ ) 
		{
            cout << arr[i]<<" ";
        }
}

template<typename T, size_t N, size_t M>     //print 2d arrays
void tab2( T(&theArray)[N][M]  ) 
{
    for ( int i = 0; i < N; i ++ ) 
	{
        for ( int j = 0; j < M; j++ ) 
		{
            cout<<theArray[i][j]<<" ";
        }
        cout<<"\n";
    }
}


int main(int argc, char *argv[])
{
      

    
	cout<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
